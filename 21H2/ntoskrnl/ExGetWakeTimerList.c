/*
 * XREFs of ExGetWakeTimerList @ 0x1405B6148
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoStoreDiagnosticContext @ 0x14038AC9C (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeQueryTimerDueTime @ 0x140515E08 (KeQueryTimerDueTime.c)
 */

__int64 __fastcall ExGetWakeTimerList(ULONG_PTR *a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 TimerDueTime; // r13
  SIZE_T v5; // r12
  ULONG_PTR v6; // r15
  struct _KTHREAD *v7; // rbx
  __int64 v8; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v10; // dl
  __int64 v11; // rdi
  int SessionId; // eax
  bool v13; // zf
  __int64 *v15; // rbx
  __int64 v16; // rcx
  char *PoolWithQuotaTag; // rax
  int v18; // r14d
  char *v19; // rdi
  __int64 *v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  __int64 v23; // r13
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  int v28; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 *v35; // rdi
  struct _KTHREAD *v36; // rbx
  __int64 v37; // r9
  unsigned __int8 v38; // r13
  unsigned int v39; // edx
  __int64 v40; // rdi
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  _DWORD *v47; // r9
  unsigned __int64 v49; // [rsp+30h] [rbp-39h] BYREF
  int v50; // [rsp+38h] [rbp-31h] BYREF
  ULONG_PTR v51; // [rsp+40h] [rbp-29h]
  int v52; // [rsp+48h] [rbp-21h]
  int v53; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v54; // [rsp+50h] [rbp-19h]
  __int64 **v55; // [rsp+58h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-9h]
  __int64 v57; // [rsp+68h] [rbp-1h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+7h]
  KIRQL v61; // [rsp+E0h] [rbp+77h]

  TimerDueTime = 0LL;
  v49 = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeGetCurrentThread();
  v53 = 0;
  --v7->SpecialApcDisable;
  if ( ++v7->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v7, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v8) = v7->AbEntrySummary;
  v52 = 0;
  if ( !(_BYTE)v8 )
  {
    if ( !v7->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)v7, (__int64)&ExpWakeTimerLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = v7->AbOrphanedEntrySummary;
    v7->AbOrphanedEntrySummary = 0;
    LOBYTE(v8) = AbOrphanedEntrySummary | v7->AbEntrySummary;
  }
  v10 = v8;
  _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
  v52 = v8;
  v7->AbEntrySummary = v10 & ~(1 << v8);
  v11 = (__int64)&v7->LockEntries[v8];
  if ( !v11 )
  {
LABEL_7:
    _interlockedbittestandset((volatile signed __int32 *)&v7->116 + 1, 0x10u);
    goto LABEL_15;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v11 + 40) = SessionId;
  *(_QWORD *)(v11 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_15:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&ExpWakeTimerLock, (__int64)&v53, a4);
  v13 = v7->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v11, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v15 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v16 = *(v15 - 1);
      if ( v16 )
      {
        v49 = 0LL;
        PoStoreDiagnosticContext(v16, 0LL, &v49);
        v5 = (v49 + 31 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v5 > 0xFFFFFFFF )
        {
          v18 = -1073741789;
          goto LABEL_53;
        }
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != &ExpWakeTimerList );
    if ( v5 )
      goto LABEL_28;
  }
  v5 = 64LL;
LABEL_28:
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5, 0x734C6B57u);
  v51 = (ULONG_PTR)PoolWithQuotaTag;
  v6 = (ULONG_PTR)PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v18 = 0;
    v19 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v5);
    v20 = (__int64 *)ExpWakeTimerList;
    v21 = 0LL;
    v49 = 0LL;
    v22 = v5;
    while ( 1 )
    {
      v55 = (__int64 **)v20;
      if ( v20 == &ExpWakeTimerList )
        break;
      if ( v22 < 0x40 )
        goto LABEL_57;
      v23 = (__int64)(v20 - 33);
      SpinLock = (PKSPIN_LOCK)(v20 - 25);
      v24 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v28 = *(_DWORD *)(v23 + 240);
      v61 = v24;
      v57 = *(_QWORD *)(v23 + 256);
      v54 = v28;
      if ( v57 )
        TimerDueTime = KeQueryTimerDueTime(v23, v25, v26, v27);
      else
        TimerDueTime = 0LL;
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v61 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v61 + 1));
            v13 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v21 = v49;
          }
        }
      }
      __writecr8(v61);
      if ( TimerDueTime )
      {
        v33 = v57;
        v34 = TimerDueTime - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v19 + 4) = v54;
        v49 = v22 - 24;
        *((_QWORD *)v19 + 1) = v34;
        TimerDueTime = 0LL;
        v18 = PoStoreDiagnosticContext(v33, (unsigned __int64 *)v19 + 3, &v49);
        if ( v18 < 0 )
          goto LABEL_52;
        v21 = (v49 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v49 = v21;
        if ( v22 < v21 )
        {
LABEL_57:
          v18 = -1073741789;
          goto LABEL_52;
        }
        v22 -= v21;
        *(_QWORD *)v19 = v21;
        v19 += v21;
      }
      v20 = *v55;
    }
    v35 = (__int64 *)&v19[-v21];
    *v35 = TimerDueTime;
    if ( !v21 )
      v35[1] = TimerDueTime;
LABEL_52:
    v6 = v51;
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_53:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v36 = KeGetCurrentThread();
  v50 = TimerDueTime;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v37 = (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process);
  else
    v37 = 0xFFFFFFFFLL;
  --v36->SpecialApcDisable;
  v38 = ++v36->AbAllocationRegionCount;
  v39 = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v41, v39);
    if ( v13 )
      goto LABEL_66;
    v40 = (__int64)&v36->LockEntries[v41];
    v39 &= ~(1 << v41);
    if ( (*(_BYTE *)(v40 + 26) & 1) != 0
      && (*(_DWORD *)(v40 + 32) & 1) == 0
      && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v40 + 40) == (_DWORD)v37 )
    {
      *(_BYTE *)(v40 + 26) &= ~1u;
      if ( *(_QWORD *)(v40 + 32) )
        break;
    }
  }
  if ( !v40 )
  {
LABEL_66:
    if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, (ULONG_PTR)&ExpWakeTimerLock, (unsigned int)v37, 0LL);
    goto LABEL_73;
  }
  *(_BYTE *)(v40 + 32) |= 2u;
  if ( *(__int64 *)(v40 + 32) < 0 )
    KiAbEntryRemoveFromTree(v40);
  v42 = *(_DWORD *)(v40 + 88) & 0x1FFFF;
  v43 = *(_DWORD *)(v40 + 88) & 0xFFFE0000;
  *(_BYTE *)(v40 + 25) &= ~1u;
  v50 = v42;
  *(_DWORD *)(v40 + 88) = v43;
  *(_QWORD *)(v40 + 32) = 0LL;
  v44 = (signed __int64)(v40 - (unsigned __int64)v36->LockEntries) / 96;
  if ( v38 == 1 )
    v36->AbEntrySummary |= 1 << v44;
  else
    _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v44);
LABEL_73:
  --v36->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v36, (__int64)&ExpWakeTimerLock, (__int64)&v50, (_DWORD *)v37);
  v13 = v36->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
    KiCheckForKernelApcDelivery(1LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v18 >= 0 )
  {
    *a1 = v6;
    *a2 = v5;
  }
  else if ( v6 )
  {
    ExFreeHeapPool(v6, v45, v46, v47);
  }
  return (unsigned int)v18;
}
