/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800758B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CSystemEffectWrapper::QueryInterface((CSystemEffectWrapper *)(a1 - 32), a2, a3);
}
