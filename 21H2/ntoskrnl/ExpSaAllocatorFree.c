/*
 * XREFs of ExpSaAllocatorFree @ 0x1403944A4
 * Callers:
 *     ExSaFree @ 0x14039442C (ExSaFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403946AC (ExpSaPageGroupFreeMemory.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405BA5F4 (ExpSaAllocatorOptimizeList.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v7; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 AbEntrySummary; // cl
  __int64 v10; // rax
  __int64 v11; // r15
  int SessionId; // eax
  bool v13; // zf
  int v14; // eax
  $C459BD0D405E8E46662177FB3D0A143F *v15; // rax
  struct _KTHREAD *v16; // r14
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // eax
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 **v24; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KTHREAD *v26; // rbx
  ULONG_PTR v27; // r9
  unsigned __int8 v28; // r15
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rdx
  int v34; // [rsp+30h] [rbp-20h] BYREF
  int v35; // [rsp+34h] [rbp-1Ch]
  unsigned int v36; // [rsp+38h] [rbp-18h] BYREF
  int v37; // [rsp+3Ch] [rbp-14h]
  unsigned int v38[4]; // [rsp+40h] [rbp-10h] BYREF

  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    v38[0] = 0;
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v37 = 0;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v11 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_25;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v37 = v10;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    v11 = (__int64)&CurrentThread->LockEntries[v10];
    if ( v11 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v11 + 40) = SessionId;
      *(_QWORD *)(v11 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_9;
    }
LABEL_25:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_9:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v38);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v11, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    goto LABEL_16;
  }
  v36 = 0;
  v7 = 1;
  v16 = KeGetCurrentThread();
  --v16->SpecialApcDisable;
  if ( ++v16->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v16, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  v17 = v16->AbEntrySummary;
  v35 = 0;
  if ( !v17 )
  {
    if ( !v16->AbOrphanedEntrySummary )
    {
      v20 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v16, BugCheckParameter2);
      goto LABEL_38;
    }
    v18 = v16->AbOrphanedEntrySummary;
    v16->AbOrphanedEntrySummary = 0;
    v17 = v18 | v16->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v19, v17);
  v35 = v19;
  v16->AbEntrySummary = v17 & ~(1 << v19);
  v20 = (__int64)&v16->LockEntries[v19];
  if ( v20 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      v21 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    }
    else
    {
      v21 = -1;
    }
    *(_DWORD *)(v20 + 40) = v21;
    *(_QWORD *)(v20 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_41;
  }
LABEL_38:
  _interlockedbittestandset((volatile signed __int32 *)&v16->116 + 1, 0x10u);
LABEL_41:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, BugCheckParameter2, &v36);
  v13 = v16->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v20, BugCheckParameter2);
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  *((_DWORD *)a2 + 10) = 0;
  v22 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2
    || (v23 = (__int64 **)a2[1], *v23 != a2)
    || (*v23 = v22,
        v22[1] = (__int64)v23,
        v24 = *(__int64 ***)(BugCheckParameter2 + 16),
        *v24 != (__int64 *)(BugCheckParameter2 + 8)) )
  {
    __fastfail(3u);
  }
  *a2 = BugCheckParameter2 + 8;
  a2[1] = (__int64)v24;
  *v24 = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = a2;
LABEL_16:
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v14) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v14 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v14 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_61;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    LOBYTE(v15) = KeAbPostRelease(BugCheckParameter2);
    return (char)v15;
  }
LABEL_61:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v34 = 0;
  v26 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v27 = (unsigned int)MmGetSessionIdEx((__int64)v26->ApcState.Process);
  else
    v27 = 0xFFFFFFFFLL;
  --v26->SpecialApcDisable;
  v28 = ++v26->AbAllocationRegionCount;
  v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v30, v29);
    if ( v13 )
      goto LABEL_68;
    v31 = (__int64)&v26->LockEntries[v30];
    v29 &= ~(1 << v30);
    if ( (*(_BYTE *)(v31 + 26) & 1) != 0
      && (*(_DWORD *)(v31 + 32) & 1) == 0
      && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v31 + 40) == (_DWORD)v27 )
    {
      *(_BYTE *)(v31 + 26) &= ~1u;
      if ( *(_QWORD *)(v31 + 32) )
        break;
    }
  }
  if ( !v31 )
  {
LABEL_68:
    if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v26, BugCheckParameter2, v27, 0LL);
    goto LABEL_80;
  }
  *(_BYTE *)(v31 + 32) |= 2u;
  if ( *(__int64 *)(v31 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
  v34 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
  *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v31 + 25) &= ~1u;
  *(_QWORD *)(v31 + 32) = 0LL;
  v32 = (signed __int64)(v31 - (unsigned __int64)v26->LockEntries) / 96;
  if ( v28 == 1 )
    v26->AbEntrySummary |= 1 << v32;
  else
    _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
LABEL_80:
  --v26->AbAllocationRegionCount;
  LOBYTE(v15) = KiAbThreadRemoveBoosts((ULONG_PTR)v26, BugCheckParameter2, (unsigned int *)&v34);
  v13 = v26->SpecialApcDisable++ == -1;
  if ( v13 )
  {
    v15 = &v26->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != v15 )
      LOBYTE(v15) = KiCheckForKernelApcDelivery();
  }
  return (char)v15;
}
