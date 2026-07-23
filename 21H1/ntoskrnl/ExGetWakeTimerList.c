/*
 * XREFs of ExGetWakeTimerList @ 0x1405B0498
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PoStoreDiagnosticContext @ 0x14038741C (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeQueryTimerDueTime @ 0x140510348 (KeQueryTimerDueTime.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  bool v14; // zf
  __int64 *v16; // rbx
  __int64 v17; // rcx
  char *PoolWithQuotaTag; // rax
  int v19; // r14d
  char *v20; // rdi
  __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // r13
  KIRQL v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  int v29; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r13
  __int64 *v36; // rdi
  struct _KTHREAD *v37; // rbx
  unsigned int v38; // r9d
  unsigned __int8 v39; // r13
  unsigned int v40; // edx
  __int64 v41; // rdi
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned __int64 v50; // [rsp+30h] [rbp-39h] BYREF
  int v51; // [rsp+38h] [rbp-31h] BYREF
  ULONG_PTR v52; // [rsp+40h] [rbp-29h]
  int v53; // [rsp+48h] [rbp-21h]
  int v54; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v55; // [rsp+50h] [rbp-19h]
  __int64 **v56; // [rsp+58h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-9h]
  __int64 v58; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+7h]
  KIRQL v62; // [rsp+E0h] [rbp+77h]

  TimerDueTime = 0LL;
  v50 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  v54 = 0;
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v5, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = v5->AbEntrySummary;
  v53 = 0;
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
  v53 = v6;
  v5->AbEntrySummary = v8 & ~(1 << v6);
  v9 = (__int64)&v5->LockEntries[v6];
  if ( !v9 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_15;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F908[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, (__int64)&ExpWakeTimerLock, &v54);
  v14 = v5->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(1LL, v11, v12, v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v9, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v16 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v17 = *(v16 - 1);
      if ( v17 )
      {
        v50 = 0LL;
        PoStoreDiagnosticContext(v17, 0LL, &v50);
        v3 = (v50 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v19 = -1073741789;
          goto LABEL_53;
        }
      }
      v16 = (__int64 *)*v16;
    }
    while ( v16 != &ExpWakeTimerList );
    if ( v3 )
      goto LABEL_28;
  }
  v3 = 64LL;
LABEL_28:
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, 0x734C6B57u);
  v52 = (ULONG_PTR)PoolWithQuotaTag;
  v4 = (ULONG_PTR)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v19 = 0;
    v20 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v3);
    v21 = (__int64 *)ExpWakeTimerList;
    v22 = 0LL;
    v50 = 0LL;
    v23 = v3;
    while ( 1 )
    {
      v56 = (__int64 **)v21;
      if ( v21 == &ExpWakeTimerList )
        break;
      if ( v23 < 0x40 )
        goto LABEL_57;
      v24 = (__int64)(v21 - 33);
      SpinLock = (PKSPIN_LOCK)(v21 - 25);
      v25 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v29 = *(_DWORD *)(v24 + 240);
      v62 = v25;
      v58 = *(_QWORD *)(v24 + 256);
      v55 = v29;
      if ( v58 )
        TimerDueTime = KeQueryTimerDueTime(v24, v26, v27, v28);
      else
        TimerDueTime = 0LL;
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v62 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (v62 + 1));
            v14 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v22 = v50;
          }
        }
      }
      __writecr8(v62);
      if ( TimerDueTime )
      {
        v34 = v58;
        v35 = TimerDueTime - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v20 + 4) = v55;
        v50 = v23 - 24;
        *((_QWORD *)v20 + 1) = v35;
        TimerDueTime = 0LL;
        v19 = PoStoreDiagnosticContext(v34, (unsigned __int64 *)v20 + 3, &v50);
        if ( v19 < 0 )
          goto LABEL_52;
        v22 = (v50 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v50 = v22;
        if ( v23 < v22 )
        {
LABEL_57:
          v19 = -1073741789;
          goto LABEL_52;
        }
        v23 -= v22;
        *(_QWORD *)v20 = v22;
        v20 += v22;
      }
      v21 = *v56;
    }
    v36 = (__int64 *)&v20[-v22];
    *v36 = TimerDueTime;
    if ( !v22 )
      v36[1] = TimerDueTime;
LABEL_52:
    v4 = v52;
  }
  else
  {
    v19 = -1073741670;
  }
LABEL_53:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v37 = KeGetCurrentThread();
  v51 = TimerDueTime;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v38 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
  else
    v38 = -1;
  --v37->SpecialApcDisable;
  v39 = ++v37->AbAllocationRegionCount;
  v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v42, v40);
    if ( v14 )
      goto LABEL_66;
    v41 = (__int64)&v37->LockEntries[v42];
    v40 &= ~(1 << v42);
    if ( (*(_BYTE *)(v41 + 26) & 1) != 0
      && (*(_DWORD *)(v41 + 32) & 1) == 0
      && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v41 + 40) == v38 )
    {
      *(_BYTE *)(v41 + 26) &= ~1u;
      if ( *(_QWORD *)(v41 + 32) )
        break;
    }
  }
  if ( !v41 )
  {
LABEL_66:
    if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&ExpWakeTimerLock, v38, 0LL);
    goto LABEL_73;
  }
  *(_BYTE *)(v41 + 32) |= 2u;
  if ( *(__int64 *)(v41 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41);
  v43 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
  v44 = *(_DWORD *)(v41 + 88) & 0xFFFE0000;
  *(_BYTE *)(v41 + 25) &= ~1u;
  v51 = v43;
  *(_DWORD *)(v41 + 88) = v44;
  *(_QWORD *)(v41 + 32) = 0LL;
  v45 = (signed __int64)(v41 - (unsigned __int64)v37->LockEntries) / 96;
  if ( v39 == 1 )
    v37->AbEntrySummary |= 1 << v45;
  else
    _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v45);
LABEL_73:
  --v37->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v37, (__int64)&ExpWakeTimerLock, &v51);
  v14 = v37->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery(1LL, v46, v47, v48);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v46, v47, (__int64)v48);
  if ( v19 >= 0 )
  {
    *a1 = v4;
    *a2 = v3;
  }
  else if ( v4 )
  {
    ExFreeHeapPool(v4);
  }
  return (unsigned int)v19;
}
