/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1405BA70C
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1405BA5F4 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA6C4 (ExpSaBinaryArrayRemove.c)
 */

PSLIST_ENTRY __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter2)
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
  bool v11; // zf
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // rcx
  ULONG_PTR v19; // rbx
  struct _KTHREAD *v20; // rbx
  unsigned __int8 v21; // r14
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v27[4]; // [rsp+30h] [rbp-10h] BYREF
  int v28; // [rsp+90h] [rbp+50h] BYREF
  int v29; // [rsp+98h] [rbp+58h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v27[0] = 0;
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
  v29 = 0;
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
  v29 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( v9 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4FA08[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, v27);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock,
      (_RTL_BALANCED_NODE *)v9,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (_DWORD)v4 )
  {
    v13 = 0LL;
    do
    {
      v14 = *(_DWORD *)(BugCheckParameter2 + 32);
      _BitScanReverse(&v15, v14);
      v16 = *(_QWORD *)(v13 + ExSaPageArrays);
      v17 = 1 << v15;
      v18 = v15 - 2;
      v27[1] = v18;
      v19 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * v18) + 8LL * (v14 ^ v17) + 8);
      ExpSaBinaryArrayRemove(v16, v14);
      ExFreeHeapPool(v19);
      v13 += 8LL;
      --v4;
    }
    while ( v4 );
    v6 = -1;
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(_DWORD *)(BugCheckParameter2 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v28 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v11 )
      goto LABEL_37;
    v23 = (__int64)&v20->LockEntries[v24];
    v22 &= ~(1 << v24);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v6 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_37:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v6, 0LL);
    goto LABEL_44;
  }
  *(_BYTE *)(v23 + 32) |= 2u;
  if ( *(__int64 *)(v23 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
  v28 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
  *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v23 + 25) &= ~1u;
  *(_QWORD *)(v23 + 32) = 0LL;
  v25 = (signed __int64)(v23 - (unsigned __int64)v20->LockEntries) / 96;
  if ( v21 == 1 )
    v20->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v25);
LABEL_44:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, (__int64)&ExSaPageGroupDescriptorArrayLock, (unsigned int *)&v28);
  v11 = v20->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
  return ExFreeHeapPool(BugCheckParameter2);
}
