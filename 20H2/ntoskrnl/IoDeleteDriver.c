/*
 * XREFs of IoDeleteDriver @ 0x140896560
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407662BC (EtwTiLogDriverObjectUnLoad.c)
 */

void __fastcall IoDeleteDriver(PADAPTER_OBJECT DmaAdapter)
{
  EtwTiLogDriverObjectUnLoad((unsigned __int16 *)&DmaAdapter[3].DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
}
