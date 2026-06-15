/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x180075700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::AddRef(__int64 a1)
{
  return CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)(a1 - 16));
}
