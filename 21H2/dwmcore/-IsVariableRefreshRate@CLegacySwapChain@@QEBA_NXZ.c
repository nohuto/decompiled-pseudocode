/*
 * XREFs of ?IsVariableRefreshRate@CLegacySwapChain@@QEBA_NXZ @ 0x18028B6A0
 * Callers:
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z @ 0x18028ADE4 (-CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsVariableRefreshRate(CLegacySwapChain *this)
{
  return *((_QWORD *)this + 23) != 0LL;
}
