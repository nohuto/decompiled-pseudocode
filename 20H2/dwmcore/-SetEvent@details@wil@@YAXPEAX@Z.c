/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C9704
 * Callers:
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x1800C96A0 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x1800C96E0 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180257CA0 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E2E4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    JUMPOUT(0x1801452AALL);
  }
}
