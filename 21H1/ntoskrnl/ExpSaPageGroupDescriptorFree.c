/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1405B4818
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1405B4700 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140327170 (KeQueryMaximumProcessorCountEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1405B47D0 (ExpSaBinaryArrayRemove.c)
 */

__int64 __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter2)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r14
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v6; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  __int64 v9; // rsi
  int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9
  bool v15; // zf
  __int64 v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  struct _KTHREAD *v24; // rbx
  unsigned __int8 v25; // r14
  unsigned int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // r9
  _DWORD v35[4]; // [rsp+30h] [rbp-10h] BYREF
  int v36; // [rsp+90h] [rbp+50h] BYREF
  int v37; // [rsp+98h] [rbp+58h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v35[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = MaximumProcessorCount;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  v37 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v6 = -1;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v37 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v9 + 40) = SessionId;
    *(_QWORD *)(v9 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_15:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, v35);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11, v13, v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v9, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (_DWORD)v4 )
  {
    v17 = 0LL;
    do
    {
      v18 = *(_DWORD *)(BugCheckParameter2 + 32);
      _BitScanReverse(&v19, v18);
      v20 = *(_QWORD *)(v17 + ExSaPageArrays);
      v21 = 1 << v19;
      v22 = v19 - 2;
      v35[1] = v22;
      v23 = *(_QWORD *)(*(_QWORD *)(v20 + 8 * v22) + 8LL * (v18 ^ v21) + 8);
      ExpSaBinaryArrayRemove(v20, v18);
      ExFreeHeapPool(v23);
      v17 += 8LL;
      --v4;
    }
    while ( v4 );
    v6 = -1;
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(_DWORD *)(BugCheckParameter2 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v36 = 0;
  v24 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v24->ApcState.Process);
  --v24->SpecialApcDisable;
  v25 = ++v24->AbAllocationRegionCount;
  v26 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v28, v26);
    if ( v15 )
      goto LABEL_37;
    v27 = (__int64)&v24->LockEntries[v28];
    v26 &= ~(1 << v28);
    if ( (*(_BYTE *)(v27 + 26) & 1) != 0
      && (*(_DWORD *)(v27 + 32) & 1) == 0
      && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v27 + 40) == v6 )
    {
      *(_BYTE *)(v27 + 26) &= ~1u;
      if ( *(_QWORD *)(v27 + 32) )
        break;
    }
  }
  if ( !v27 )
  {
LABEL_37:
    if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v24, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v6, 0LL);
    goto LABEL_44;
  }
  *(_BYTE *)(v27 + 32) |= 2u;
  if ( *(__int64 *)(v27 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
  v36 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
  *(_DWORD *)(v27 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v27 + 25) &= ~1u;
  *(_QWORD *)(v27 + 32) = 0LL;
  v29 = (signed __int64)(v27 - (unsigned __int64)v24->LockEntries) / 96;
  if ( v25 == 1 )
    v24->AbEntrySummary |= 1 << v29;
  else
    _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v29);
LABEL_44:
  --v24->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v24, (__int64)&ExSaPageGroupDescriptorArrayLock, &v36);
  v15 = v24->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery(v31, v30, v32, v33);
  return ExFreeHeapPool(BugCheckParameter2);
}
