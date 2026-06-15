/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x180075860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::AddRef(__int64 a1)
{
  return CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)(a1 - 64));
}
