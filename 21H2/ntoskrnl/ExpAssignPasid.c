/*
 * XREFs of ExpAssignPasid @ 0x140956C54
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x1405B8A30 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(PADAPTER_OBJECT DmaAdapter, signed __int32 a2)
{
  ObfReferenceObject(DmaAdapter);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&DmaAdapter[136], a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1);
  HalPutDmaAdapter(DmaAdapter);
  return 0LL;
}
