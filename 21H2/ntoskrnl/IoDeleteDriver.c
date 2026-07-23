/*
 * XREFs of IoDeleteDriver @ 0x140893C90
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140769BFC (EtwTiLogDriverObjectUnLoad.c)
 */

void __fastcall IoDeleteDriver(PADAPTER_OBJECT DmaAdapter)
{
  EtwTiLogDriverObjectUnLoad((unsigned __int16 *)&DmaAdapter[3].DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
}
