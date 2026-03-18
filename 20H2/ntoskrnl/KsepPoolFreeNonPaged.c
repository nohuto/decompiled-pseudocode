/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140371254
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140751754 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C2A8AC);
  }
}
