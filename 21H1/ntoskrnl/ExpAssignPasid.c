/*
 * XREFs of ExpAssignPasid @ 0x140952274
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x1405B2D80 (ExpFreeAsid.c)
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
