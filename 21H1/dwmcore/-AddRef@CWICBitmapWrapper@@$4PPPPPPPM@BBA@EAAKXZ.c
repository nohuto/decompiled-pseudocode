/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@$4PPPPPPPM@BBA@EAAKXZ @ 0x1800EE370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 272));
}
