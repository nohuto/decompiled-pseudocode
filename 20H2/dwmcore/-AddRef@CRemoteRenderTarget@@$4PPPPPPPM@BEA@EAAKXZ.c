/*
 * XREFs of ?AddRef@CRemoteRenderTarget@@$4PPPPPPPM@BEA@EAAKXZ @ 0x1800EEE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRemoteRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 320));
}
