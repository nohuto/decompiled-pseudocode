/*
 * XREFs of ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1803A515C
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803A5D24 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegisterBufferTagWindowClass@CAppTransitionManager@@AEAAXXZ @ 0x1803A5A8C (-_RegisterBufferTagWindowClass@CAppTransitionManager@@AEAAXXZ.c)
 */

__int64 __fastcall CAppTransitionManager::_EnsureWindowForBufferTag(CAppTransitionManager *this)
{
  HWND WindowInBand; // rax
  const char *v3; // r9
  HWND v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)this + 24) )
  {
    CAppTransitionManager::_RegisterBufferTagWindowClass(this);
    WindowInBand = (HWND)CreateWindowInBand(
                           136315008LL,
                           L"BufferTagWindow",
                           &word_1804BE2A8,
                           0x80000000LL,
                           0,
                           0,
                           0,
                           0,
                           0LL,
                           0LL,
                           &_ImageBase,
                           0LL,
                           7);
    v4 = WindowInBand;
    if ( !WindowInBand )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x355,
               (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
               v3);
    ShowWindow(WindowInBand, 8);
    *((_QWORD *)this + 24) = v4;
  }
  return 0LL;
}
