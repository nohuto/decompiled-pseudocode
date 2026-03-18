/*
 * XREFs of IoDeleteDriver @ 0x14088F750
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140754CF4 (EtwTiLogDriverObjectUnLoad.c)
 */

void __fastcall IoDeleteDriver(PADAPTER_OBJECT DmaAdapter)
{
  EtwTiLogDriverObjectUnLoad((unsigned __int16 *)&DmaAdapter[3].DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
}
