/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140260770
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  char result; // al
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v7; // r15
  __int64 v8; // rdx
  ULONG_PTR v9; // r8
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    result = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    LODWORD(v8) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    v10 = !_BitScanReverse((unsigned int *)&v11, v8);
    if ( v10 )
      goto LABEL_24;
    while ( 1 )
    {
      v12 = (__int64)&CurrentThread->LockEntries[v11];
      v8 = ~(1 << v11) & (unsigned int)v8;
      if ( (*(_BYTE *)(v12 + 26) & 1) != 0
        && (*(_DWORD *)(v12 + 32) & 1) == 0
        && (*(_QWORD *)(v12 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v9
        && *(_DWORD *)(v12 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v12 + 26) &= ~1u;
        if ( *(_QWORD *)(v12 + 32) )
          break;
      }
      v10 = !_BitScanReverse((unsigned int *)&v11, v8);
      if ( v10 )
        goto LABEL_24;
    }
    if ( !v12 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v12 + 32) |= 2u;
      if ( *(__int64 *)(v12 + 32) < 0 )
        KiAbEntryRemoveFromTree(v12, v8, v9);
      v13 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
      *(_BYTE *)(v12 + 25) &= ~1u;
      *(_DWORD *)(v12 + 88) = v13;
      *(_QWORD *)(v12 + 32) = 0LL;
      v14 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v7 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
    }
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      return KiCheckForKernelApcDelivery(v16, v15, v17, v18);
  }
  return result;
}
