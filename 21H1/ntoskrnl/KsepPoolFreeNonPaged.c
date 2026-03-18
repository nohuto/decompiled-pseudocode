/*
 * XREFs of KsepPoolFreeNonPaged @ 0x14036E6D4
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C2A9CC);
  }
}
