/*
 * XREFs of ExGetWakeTimerList @ 0x1405B6378
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoStoreDiagnosticContext @ 0x14038ADEC (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeQueryTimerDueTime @ 0x140516048 (KeQueryTimerDueTime.c)
 */

__int64 __fastcall ExGetWakeTimerList(ULONG_PTR *a1, _DWORD *a2)
{
  __int64 TimerDueTime; // r13
  SIZE_T v3; // r12
  ULONG_PTR v4; // r15
  struct _KTHREAD *v5; // rbx
  __int64 v6; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v8; // dl
  __int64 v9; // rdi
  int SessionId; // eax
  bool v11; // zf
  __int64 *v13; // rbx
  __int64 v14; // rcx
  char *PoolWithQuotaTag; // rax
  int v16; // r14d
  char *v17; // rdi
  __int64 *v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r15
  __int64 v21; // r13
  KIRQL v22; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  int v26; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 *v33; // rdi
  struct _KTHREAD *v34; // rbx
  unsigned int v35; // r9d
  unsigned __int8 v36; // r13
  unsigned int v37; // edx
  __int64 v38; // rdi
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v47; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-31h] BYREF
  ULONG_PTR v49; // [rsp+40h] [rbp-29h]
  int v50; // [rsp+48h] [rbp-21h]
  unsigned int v51; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v52; // [rsp+50h] [rbp-19h]
  __int64 **v53; // [rsp+58h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-9h]
  __int64 v55; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+7h]
  KIRQL v59; // [rsp+E0h] [rbp+77h]

  TimerDueTime = 0LL;
  v47 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  v51 = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = v5->AbEntrySummary;
  v50 = 0;
  if ( !(_BYTE)v6 )
  {
    if ( !v5->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v5, (__int64)&ExpWakeTimerLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    LOBYTE(v6) = AbOrphanedEntrySummary | v5->AbEntrySummary;
  }
  v8 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  v50 = v6;
  v5->AbEntrySummary = v8 & ~(1 << v6);
  v9 = (__int64)&v5->LockEntries[v6];
  if ( !v9 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_15;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4FA08[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_15:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpWakeTimerLock, &v51);
  v11 = v5->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (_RTL_BALANCED_NODE *)v9, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v13 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v14 = *(v13 - 1);
      if ( v14 )
      {
        v47 = 0LL;
        PoStoreDiagnosticContext(v14, 0LL, &v47);
        v3 = (v47 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v16 = -1073741789;
          goto LABEL_53;
        }
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != &ExpWakeTimerList );
    if ( v3 )
      goto LABEL_28;
  }
  v3 = 64LL;
LABEL_28:
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, 0x734C6B57u);
  v49 = (ULONG_PTR)PoolWithQuotaTag;
  v4 = (ULONG_PTR)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v16 = 0;
    v17 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v3);
    v18 = (__int64 *)ExpWakeTimerList;
    v19 = 0LL;
    v47 = 0LL;
    v20 = v3;
    while ( 1 )
    {
      v53 = (__int64 **)v18;
      if ( v18 == &ExpWakeTimerList )
        break;
      if ( v20 < 0x40 )
        goto LABEL_57;
      v21 = (__int64)(v18 - 33);
      SpinLock = (PKSPIN_LOCK)(v18 - 25);
      v22 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v26 = *(_DWORD *)(v21 + 240);
      v59 = v22;
      v55 = *(_QWORD *)(v21 + 256);
      v52 = v26;
      if ( v55 )
        TimerDueTime = KeQueryTimerDueTime(v21, v23, v24, v25);
      else
        TimerDueTime = 0LL;
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v59 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v59 + 1));
            v11 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v19 = v47;
          }
        }
      }
      __writecr8(v59);
      if ( TimerDueTime )
      {
        v31 = v55;
        v32 = TimerDueTime - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v17 + 4) = v52;
        v47 = v20 - 24;
        *((_QWORD *)v17 + 1) = v32;
        TimerDueTime = 0LL;
        v16 = PoStoreDiagnosticContext(v31, (unsigned __int64 *)v17 + 3, &v47);
        if ( v16 < 0 )
          goto LABEL_52;
        v19 = (v47 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v47 = v19;
        if ( v20 < v19 )
        {
LABEL_57:
          v16 = -1073741789;
          goto LABEL_52;
        }
        v20 -= v19;
        *(_QWORD *)v17 = v19;
        v17 += v19;
      }
      v18 = *v53;
    }
    v33 = (__int64 *)&v17[-v19];
    *v33 = TimerDueTime;
    if ( !v19 )
      v33[1] = TimerDueTime;
LABEL_52:
    v4 = v49;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_53:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v34 = KeGetCurrentThread();
  v48 = TimerDueTime;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v35 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
  else
    v35 = -1;
  --v34->SpecialApcDisable;
  v36 = ++v34->AbAllocationRegionCount;
  v37 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v39, v37);
    if ( v11 )
      goto LABEL_66;
    v38 = (__int64)&v34->LockEntries[v39];
    v37 &= ~(1 << v39);
    if ( (*(_BYTE *)(v38 + 26) & 1) != 0
      && (*(_DWORD *)(v38 + 32) & 1) == 0
      && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v38 + 40) == v35 )
    {
      *(_BYTE *)(v38 + 26) &= ~1u;
      if ( *(_QWORD *)(v38 + 32) )
        break;
    }
  }
  if ( !v38 )
  {
LABEL_66:
    if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v34, (ULONG_PTR)&ExpWakeTimerLock, v35, 0LL);
    goto LABEL_73;
  }
  *(_BYTE *)(v38 + 32) |= 2u;
  if ( *(__int64 *)(v38 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
  v40 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
  v41 = *(_DWORD *)(v38 + 88) & 0xFFFE0000;
  *(_BYTE *)(v38 + 25) &= ~1u;
  v48 = v40;
  *(_DWORD *)(v38 + 88) = v41;
  *(_QWORD *)(v38 + 32) = 0LL;
  v42 = (signed __int64)(v38 - (unsigned __int64)v34->LockEntries) / 96;
  if ( v36 == 1 )
    v34->AbEntrySummary |= 1 << v42;
  else
    _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v42);
LABEL_73:
  --v34->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&ExpWakeTimerLock, &v48);
  v11 = v34->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v43, v44, v45);
  if ( v16 >= 0 )
  {
    *a1 = v4;
    *a2 = v3;
  }
  else if ( v4 )
  {
    ExFreeHeapPool(v4);
  }
  return (unsigned int)v16;
}
