/*
 * XREFs of RawDeleteVcb @ 0x140634218
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402FF00C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140392914 (RawCheckForDeleteVolume.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
