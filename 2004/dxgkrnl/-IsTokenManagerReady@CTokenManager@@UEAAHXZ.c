/*
 * XREFs of ?IsTokenManagerReady@CTokenManager@@UEAAHXZ @ 0x1C00180E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTokenManager::IsTokenManagerReady(CTokenManager *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
