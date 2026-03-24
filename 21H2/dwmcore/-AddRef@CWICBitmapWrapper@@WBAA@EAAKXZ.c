/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@WBAA@EAAKXZ @ 0x1800F5C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 256));
}
