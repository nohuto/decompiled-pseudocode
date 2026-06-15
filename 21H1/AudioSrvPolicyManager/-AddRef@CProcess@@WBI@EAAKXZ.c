/*
 * XREFs of ?AddRef@CProcess@@WBI@EAAKXZ @ 0x18001F110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::AddRef(__int64 a1)
{
  return CBackgroundSessionCallbacks::AddRef((CBackgroundSessionCallbacks *)(a1 - 24));
}
