/*
 * XREFs of ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180382D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180382F90 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x18038332C (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x1803838C8 (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ContinueSwipe(
        MultitaskingViewGestureHandler *this,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  MultitaskingViewGestureHandler *v9; // rsi
  int MultitaskingViewState; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), 2LL);
  *((_DWORD *)this + 16) += a2;
  *((_DWORD *)this + 17) += a3;
  v9 = (MultitaskingViewGestureHandler *)((char *)this - 8);
  v15 = 0;
  v14 = 0;
  MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                            v9,
                            (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v14);
  if ( MultitaskingViewState < 0 )
  {
    v11 = 192LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)MultitaskingViewState);
    return (unsigned int)MultitaskingViewState;
  }
  if ( !MultitaskingViewGestureHandler::ShouldProcessGestureInput(
          v9,
          (const struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v14) )
    return 0LL;
  MultitaskingViewState = MultitaskingViewGestureHandler::ProcessGestureInput(v9, 2LL, &v14, a6);
  if ( MultitaskingViewState < 0 )
  {
    v11 = 194LL;
    goto LABEL_7;
  }
  return (unsigned int)MultitaskingViewState;
}
