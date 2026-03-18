/*
 * XREFs of KsepPoolFreeNonPaged @ 0x14036F304
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140742B74 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C2A7CC);
  }
}
