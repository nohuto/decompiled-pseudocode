/*
 * XREFs of ExGetWakeTimerList @ 0x1405B4718
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     PoStoreDiagnosticContext @ 0x14038A54C (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeQueryTimerDueTime @ 0x1405142C8 (KeQueryTimerDueTime.c)
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
  unsigned __int64 v44; // [rsp+30h] [rbp-39h] BYREF
  int v45; // [rsp+38h] [rbp-31h] BYREF
  ULONG_PTR v46; // [rsp+40h] [rbp-29h]
  int v47; // [rsp+48h] [rbp-21h]
  int v48; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v49; // [rsp+50h] [rbp-19h]
  __int64 **v50; // [rsp+58h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-9h]
  __int64 v52; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+7h]
  KIRQL v56; // [rsp+E0h] [rbp+77h]

  TimerDueTime = 0LL;
  v44 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  v48 = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = v5->AbEntrySummary;
  v47 = 0;
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
  v47 = v6;
  v5->AbEntrySummary = v8 & ~(1 << v6);
  v9 = (__int64)&v5->LockEntries[v6];
  if ( !v9 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_15;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F848[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpWakeTimerLock, &v48);
  v11 = v5->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v9, (ULONG_PTR)&ExpWakeTimerLock);
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
        v44 = 0LL;
        PoStoreDiagnosticContext(v14, 0LL, &v44);
        v3 = (v44 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
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
  v46 = (ULONG_PTR)PoolWithQuotaTag;
  v4 = (ULONG_PTR)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v16 = 0;
    v17 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v3);
    v18 = (__int64 *)ExpWakeTimerList;
    v19 = 0LL;
    v44 = 0LL;
    v20 = v3;
    while ( 1 )
    {
      v50 = (__int64 **)v18;
      if ( v18 == &ExpWakeTimerList )
        break;
      if ( v20 < 0x40 )
        goto LABEL_57;
      v21 = (__int64)(v18 - 33);
      SpinLock = (PKSPIN_LOCK)(v18 - 25);
      v22 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v26 = *(_DWORD *)(v21 + 240);
      v56 = v22;
      v52 = *(_QWORD *)(v21 + 256);
      v49 = v26;
      if ( v52 )
        TimerDueTime = KeQueryTimerDueTime(v21, v23, v24, v25);
      else
        TimerDueTime = 0LL;
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v56 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v56 + 1));
            v11 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v19 = v44;
          }
        }
      }
      __writecr8(v56);
      if ( TimerDueTime )
      {
        v31 = v52;
        v32 = TimerDueTime - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v17 + 4) = v49;
        v44 = v20 - 24;
        *((_QWORD *)v17 + 1) = v32;
        TimerDueTime = 0LL;
        v16 = PoStoreDiagnosticContext(v31, (unsigned __int64 *)v17 + 3, &v44);
        if ( v16 < 0 )
          goto LABEL_52;
        v19 = (v44 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v44 = v19;
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
      v18 = *v50;
    }
    v33 = (__int64 *)&v17[-v19];
    *v33 = TimerDueTime;
    if ( !v19 )
      v33[1] = TimerDueTime;
LABEL_52:
    v4 = v46;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_53:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v34 = KeGetCurrentThread();
  v45 = TimerDueTime;
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
  v45 = v40;
  *(_DWORD *)(v38 + 88) = v41;
  *(_QWORD *)(v38 + 32) = 0LL;
  v42 = (signed __int64)(v38 - (unsigned __int64)v34->LockEntries) / 96;
  if ( v36 == 1 )
    v34->AbEntrySummary |= 1 << v42;
  else
    _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v42);
LABEL_73:
  --v34->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&ExpWakeTimerLock, &v45);
  v11 = v34->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery(1LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
