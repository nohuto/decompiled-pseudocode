/*
 * XREFs of IoDeleteDriver @ 0x140893B30
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140769A3C (EtwTiLogDriverObjectUnLoad.c)
 */

void __fastcall IoDeleteDriver(PADAPTER_OBJECT DmaAdapter)
{
  EtwTiLogDriverObjectUnLoad((unsigned __int16 *)&DmaAdapter[3].DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
}
