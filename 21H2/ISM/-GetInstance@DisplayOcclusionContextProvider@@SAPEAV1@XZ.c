/*
 * XREFs of ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801470D0
 * Callers:
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180126E0C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CEE0 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     atexit @ 0x18003BC9C (atexit.c)
 *     _Init_thread_footer @ 0x18003C608 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C670 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x180146D2C (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 */

struct DisplayOcclusionContextProvider *DisplayOcclusionContextProvider::GetInstance(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 16LL;
  v1 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18020A508 > *(_DWORD *)(v1 + 16) )
  {
    Init_thread_header(&dword_18020A508);
    if ( dword_18020A508 == -1 )
    {
      atexit(DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_18020A508);
    }
  }
  inited = wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___(v1, v0, &v5);
  if ( inited < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      555LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited);
    __debugbreak();
  }
  return (struct DisplayOcclusionContextProvider *)qword_1802098D8;
}
