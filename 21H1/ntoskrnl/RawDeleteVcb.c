/*
 * XREFs of RawDeleteVcb @ 0x1407028C8
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1402C27AC (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x140391D64 (RawCheckForDeleteVolume.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 176));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
