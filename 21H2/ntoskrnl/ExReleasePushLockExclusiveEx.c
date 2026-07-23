/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x140355470
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  char result; // al
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v7; // r15
  unsigned int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rdx

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
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    if ( v9 )
      goto LABEL_24;
    while ( 1 )
    {
      v11 = (__int64)&CurrentThread->LockEntries[v10];
      v8 &= ~(1 << v10);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v11 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      if ( v9 )
        goto LABEL_24;
    }
    if ( !v11 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v11 + 32) |= 2u;
      if ( *(__int64 *)(v11 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
      v12 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
      *(_BYTE *)(v11 + 25) &= ~1u;
      *(_DWORD *)(v11 + 88) = v12;
      *(_QWORD *)(v11 + 32) = 0LL;
      v13 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v7 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v13;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
    }
    --CurrentThread->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
