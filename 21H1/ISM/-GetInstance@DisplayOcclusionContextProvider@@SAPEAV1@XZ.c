/*
 * XREFs of ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x180147130
 * Callers:
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180126E6C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18012CF40 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 * Callees:
 *     atexit @ 0x18003BEFC (atexit.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C8D0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x180146D8C (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
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
  if ( dword_18020A518 > *(_DWORD *)(v1 + 16) )
  {
    Init_thread_header(&dword_18020A518);
    if ( dword_18020A518 == -1 )
    {
      atexit(DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_18020A518);
    }
  }
  inited = wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___(v1, v0, &v5);
  if ( inited < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      487LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited);
    __debugbreak();
  }
  return (struct DisplayOcclusionContextProvider *)qword_1802099E8;
}
