/*
 * XREFs of ?AddRef@COffScreenRenderTarget@@$4PPPPPPPM@IGA@EAAKXZ @ 0x1800ED0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 2144));
}
