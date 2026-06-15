/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x180074D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::AddRef(__int64 a1)
{
  return CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)(a1 - 16));
}
