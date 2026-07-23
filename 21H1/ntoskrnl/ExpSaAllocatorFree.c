/*
 * XREFs of ExpSaAllocatorFree @ 0x140390EB4
 * Callers:
 *     ExSaFree @ 0x140390E3C (ExSaFree.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupFreeMemory @ 0x1403910BC (ExpSaPageGroupFreeMemory.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x1405B4700 (ExpSaAllocatorOptimizeList.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v7; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 AbEntrySummary; // cl
  __int64 v10; // rax
  __int64 v11; // r15
  int SessionId; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  bool v17; // zf
  int v18; // eax
  $C774EFD68449142D8271B1EC1EB7FB26 *v19; // rax
  struct _KTHREAD *v20; // r14
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 *v30; // rax
  __int64 **v31; // rcx
  __int64 **v32; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KTHREAD *v34; // rbx
  ULONG_PTR v35; // r9
  unsigned __int8 v36; // r15
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _DWORD *v44; // r9
  int v46; // [rsp+30h] [rbp-20h] BYREF
  int v47; // [rsp+34h] [rbp-1Ch]
  int v48; // [rsp+38h] [rbp-18h] BYREF
  int v49; // [rsp+3Ch] [rbp-14h]
  _DWORD v50[4]; // [rsp+40h] [rbp-10h] BYREF

  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    v50[0] = 0;
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v49 = 0;
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
    v49 = v10;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v50);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14, v13, v15, v16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    goto LABEL_16;
  }
  v48 = 0;
  v7 = 1;
  v20 = KeGetCurrentThread();
  --v20->SpecialApcDisable;
  if ( ++v20->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v20, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  v21 = v20->AbEntrySummary;
  v47 = 0;
  if ( !v21 )
  {
    if ( !v20->AbOrphanedEntrySummary )
    {
      v24 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v20, BugCheckParameter2);
      goto LABEL_38;
    }
    v22 = v20->AbOrphanedEntrySummary;
    v20->AbOrphanedEntrySummary = 0;
    v21 = v22 | v20->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v23, v21);
  v47 = v23;
  v20->AbEntrySummary = v21 & ~(1 << v23);
  v24 = (__int64)&v20->LockEntries[v23];
  if ( v24 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      v25 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
    }
    else
    {
      v25 = -1;
    }
    *(_DWORD *)(v24 + 40) = v25;
    *(_QWORD *)(v24 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_41;
  }
LABEL_38:
  _interlockedbittestandset((volatile signed __int32 *)&v20->116 + 1, 0x10u);
LABEL_41:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, BugCheckParameter2, &v48);
  v17 = v20->SpecialApcDisable++ == -1;
  if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v27, v26, v28, v29);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v24, BugCheckParameter2);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  *((_DWORD *)a2 + 10) = 0;
  v30 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2
    || (v31 = (__int64 **)a2[1], *v31 != a2)
    || (*v31 = v30,
        v30[1] = (__int64)v31,
        v32 = *(__int64 ***)(BugCheckParameter2 + 16),
        *v32 != (__int64 *)(BugCheckParameter2 + 8)) )
  {
    __fastfail(3u);
  }
  *a2 = BugCheckParameter2 + 8;
  a2[1] = (__int64)v32;
  *v32 = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = a2;
LABEL_16:
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v18) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v18 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v18 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_61;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    LOBYTE(v19) = KeAbPostRelease(BugCheckParameter2);
    return (char)v19;
  }
LABEL_61:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v46 = 0;
  v34 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v35 = (unsigned int)MmGetSessionIdEx((__int64)v34->ApcState.Process);
  else
    v35 = 0xFFFFFFFFLL;
  --v34->SpecialApcDisable;
  v36 = ++v34->AbAllocationRegionCount;
  v37 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v38, v37);
    if ( v17 )
      goto LABEL_68;
    v39 = (__int64)&v34->LockEntries[v38];
    v37 &= ~(1 << v38);
    if ( (*(_BYTE *)(v39 + 26) & 1) != 0
      && (*(_DWORD *)(v39 + 32) & 1) == 0
      && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v39 + 40) == (_DWORD)v35 )
    {
      *(_BYTE *)(v39 + 26) &= ~1u;
      if ( *(_QWORD *)(v39 + 32) )
        break;
    }
  }
  if ( !v39 )
  {
LABEL_68:
    if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v34, BugCheckParameter2, v35, 0LL);
    goto LABEL_80;
  }
  *(_BYTE *)(v39 + 32) |= 2u;
  if ( *(__int64 *)(v39 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
  v46 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
  *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v39 + 25) &= ~1u;
  *(_QWORD *)(v39 + 32) = 0LL;
  v40 = (signed __int64)(v39 - (unsigned __int64)v34->LockEntries) / 96;
  if ( v36 == 1 )
    v34->AbEntrySummary |= 1 << v40;
  else
    _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v40);
LABEL_80:
  --v34->AbAllocationRegionCount;
  LOBYTE(v19) = KiAbThreadRemoveBoosts((ULONG_PTR)v34, BugCheckParameter2, &v46);
  v17 = v34->SpecialApcDisable++ == -1;
  if ( v17 )
  {
    v19 = &v34->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != v19 )
      LOBYTE(v19) = KiCheckForKernelApcDelivery(v42, v41, v43, v44);
  }
  return (char)v19;
}
