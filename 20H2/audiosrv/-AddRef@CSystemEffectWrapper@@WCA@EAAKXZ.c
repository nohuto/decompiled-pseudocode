/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x180074D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::AddRef(__int64 a1)
{
  return CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)(a1 - 32));
}
