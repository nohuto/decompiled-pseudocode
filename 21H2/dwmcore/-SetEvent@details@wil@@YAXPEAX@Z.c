/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002A854
 * Callers:
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x18002A75C (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?ResetMmcss@CGlobalMit@@UEAAJXZ @ 0x18002A7F0 (-ResetMmcss@CGlobalMit@@UEAAJXZ.c)
 *     ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x18002A830 (-RequestCursorUpdate@CGlobalMit@@UEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180193334 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180276F78 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18029CF8C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180178EA4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
