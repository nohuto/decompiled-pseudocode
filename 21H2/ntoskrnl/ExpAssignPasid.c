/*
 * XREFs of ExpAssignPasid @ 0x140956E24
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B74B0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x1405B8C60 (ExpFreeAsid.c)
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
