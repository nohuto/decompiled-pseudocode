/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x14056EF60
 * Callers:
 *     <none>
 * Callees:
 *     PopPepCountReadyActivities @ 0x14023C174 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14023C234 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14023C3C0 (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleState @ 0x140308AA8 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140308BB4 (PopPepComponentGetResidencyIdleState.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPepArmIdleTimer @ 0x14056E544 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int8 v4; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v11; // r10
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int ResidencyIdleState; // eax
  __int64 v16; // r10
  unsigned int v17; // eax
  unsigned __int8 CurrentIrql; // al
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) != 0 )
      continue;
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
    if ( *(_BYTE *)(i + 136) )
    {
      ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v11 = 200LL * j + i + 184;
        if ( *(_DWORD *)(v11 + 176) == *(_DWORD *)(v11 + 188) - 1
          || **(_DWORD **)(v11 + 72)
          || (v12 = 1, **(_DWORD **)(v11 + 80)) )
        {
          v12 = 0;
        }
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 136);
          if ( v0 > v13 )
          {
            v14 = v0 - v13;
            if ( (unsigned __int64)(v0 - v13) > *(_QWORD *)(v11 + 120) )
            {
              *(_QWORD *)(v11 + 120) = v14;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v11, v14);
              if ( *(_DWORD *)(v16 + 160) != ResidencyIdleState )
              {
                *(_DWORD *)(v16 + 160) = ResidencyIdleState;
                PopPepUpdateIdleState(i, v16, 1);
              }
            }
          }
        }
      }
      PopPepPromoteActivities(i, 0LL, 3);
      v17 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      PopPepRequestWork(ready, v17);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_29;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_29;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu )
        goto LABEL_29;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_29;
      if ( CurrentIrql < 2u )
        goto LABEL_29;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( !v8 )
        goto LABEL_29;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !KiIrqlFlags )
        goto LABEL_29;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_29;
      v4 = KeGetCurrentIrql();
      if ( v4 > 0xFu )
        goto LABEL_29;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_29;
      if ( v4 < 2u )
        goto LABEL_29;
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( !v8 )
        goto LABEL_29;
    }
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_29:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
  PopPepArmIdleTimer(1);
}
