/*
 * XREFs of ExpAssignPasid @ 0x1409593D4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x1405B7000 (ExpFreeAsid.c)
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
