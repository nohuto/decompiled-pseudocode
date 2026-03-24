/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1405BA4DC
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1405BA3C4 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14027B730 (KeQueryMaximumProcessorCountEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA494 (ExpSaBinaryArrayRemove.c)
 */

PSLIST_ENTRY __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter2)
{
  ULONG MaximumProcessorCount; // eax
  _DWORD *v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r14
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v7; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v9; // rax
  __int64 v10; // rsi
  int SessionId; // eax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  struct _KTHREAD *v25; // rbx
  unsigned __int8 v26; // r14
  unsigned int v27; // edx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // r9
  _DWORD v36[4]; // [rsp+30h] [rbp-10h] BYREF
  int v37; // [rsp+90h] [rbp+50h] BYREF
  int v38; // [rsp+98h] [rbp+58h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v36[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = MaximumProcessorCount;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  v38 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v7 = -1;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock);
      goto LABEL_7;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v9, AbEntrySummary);
  v38 = v9;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v9);
  v10 = (__int64)&CurrentThread->LockEntries[v9];
  if ( v10 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_15;
  }
LABEL_7:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_15:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)v36, v3);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v10, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (_DWORD)v5 )
  {
    v15 = 0LL;
    do
    {
      v16 = *(unsigned int *)(BugCheckParameter2 + 32);
      _BitScanReverse(&v17, v16);
      v18 = *(_QWORD *)(v15 + ExSaPageArrays);
      v19 = 1 << v17;
      v20 = v17 - 2;
      v36[1] = v20;
      v21 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * v20) + 8LL * ((unsigned int)v16 ^ v19) + 8);
      ExpSaBinaryArrayRemove(v18, v16);
      ExFreeHeapPool(v21, v22, v23, v24);
      v15 += 8LL;
      --v5;
    }
    while ( v5 );
    v7 = -1;
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(unsigned int *)(BugCheckParameter2 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v37 = 0;
  v25 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v7 = MmGetSessionIdEx((__int64)v25->ApcState.Process);
  --v25->SpecialApcDisable;
  v26 = ++v25->AbAllocationRegionCount;
  v27 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v29, v27);
    if ( v13 )
      goto LABEL_37;
    v28 = (__int64)&v25->LockEntries[v29];
    v27 &= ~(1 << v29);
    if ( (*(_BYTE *)(v28 + 26) & 1) != 0
      && (*(_DWORD *)(v28 + 32) & 1) == 0
      && (*(_QWORD *)(v28 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v28 + 40) == v7 )
    {
      *(_BYTE *)(v28 + 26) &= ~1u;
      if ( *(_QWORD *)(v28 + 32) )
        break;
    }
  }
  if ( !v28 )
  {
LABEL_37:
    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v7, 0LL);
    goto LABEL_44;
  }
  *(_BYTE *)(v28 + 32) |= 2u;
  if ( *(__int64 *)(v28 + 32) < 0 )
    KiAbEntryRemoveFromTree(v28);
  v37 = *(_DWORD *)(v28 + 88) & 0x1FFFF;
  *(_DWORD *)(v28 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v28 + 25) &= ~1u;
  *(_QWORD *)(v28 + 32) = 0LL;
  v30 = (signed __int64)(v28 - (unsigned __int64)v25->LockEntries) / 96;
  if ( v26 == 1 )
    v25->AbEntrySummary |= 1 << v30;
  else
    _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v30);
LABEL_44:
  --v25->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v25, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v37, (_DWORD *)1);
  v13 = v25->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
    KiCheckForKernelApcDelivery(v32);
  return ExFreeHeapPool(BugCheckParameter2, v31, v33, v34);
}
