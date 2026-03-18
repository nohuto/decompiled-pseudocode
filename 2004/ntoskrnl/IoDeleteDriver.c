/*
 * XREFs of IoDeleteDriver @ 0x140890A70
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x14075767C (EtwTiLogDriverObjectUnLoad.c)
 */

void __fastcall IoDeleteDriver(PADAPTER_OBJECT DmaAdapter)
{
  EtwTiLogDriverObjectUnLoad((unsigned __int16 *)&DmaAdapter[3].DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
}
