/*
 * XREFs of RawDeleteVcb @ 0x1405D914C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140202FEC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140394DD4 (RawCheckForDeleteVolume.c)
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
