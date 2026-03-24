/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x1405B3E30
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x1403C86C0 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExFreeCacheAwarePushLock(ULONG_PTR *BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR *v5; // rsi
  unsigned __int64 v6; // rbx

  if ( *BugCheckParameter2 )
  {
    v5 = BugCheckParameter2;
    v6 = (-(__int64)(*(_BYTE *)(*BugCheckParameter2 + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v5 )
        ExFreeHeapPool(*v5, a2, a3, a4);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return ExFreeHeapPool((ULONG_PTR)BugCheckParameter2, a2, a3, a4);
}
