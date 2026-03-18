/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x14063C290
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExFreeCacheAwarePushLock(ULONG_PTR *BugCheckParameter3)
{
  ULONG_PTR *v2; // rsi
  unsigned __int64 v3; // rbx

  if ( *BugCheckParameter3 )
  {
    v2 = BugCheckParameter3;
    v3 = (-(__int64)(*(_BYTE *)(*BugCheckParameter3 + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v2 )
        ExFreeHeapPool(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return ExFreeHeapPool((ULONG_PTR)BugCheckParameter3);
}
