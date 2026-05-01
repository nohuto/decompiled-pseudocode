/*
 * XREFs of ?GetSourceRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1803B0DF0
 * Callers:
 *     ?GetBeginRect@MultitaskingViewInvocationAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1803AF780 (-GetBeginRect@MultitaskingViewInvocationAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUt.c)
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x1803AFF98 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::GetSourceRect(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2,
        struct tagRECT *a3)
{
  HWND v5; // rdi
  _QWORD *v6; // rax
  HWND v7; // r14
  const char *v8; // r9
  __int64 result; // rax
  RECT rcNormalPosition; // xmm0
  HRESULT WindowAttribute; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+20h] [rbp-39h] BYREF
  HWND v14; // [rsp+28h] [rbp-31h] BYREF
  LPARAM lParam[2]; // [rsp+30h] [rbp-29h] BYREF
  RECT pvAttribute; // [rsp+40h] [rbp-19h] BYREF
  RECT v17; // [rsp+50h] [rbp-9h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  v5 = (HWND)(*(__int64 (__fastcall **)(struct ISwitchItemElement *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
  v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 328LL))(*v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  pvAttribute = 0LL;
  if ( IsIconic(v5) )
  {
    if ( !GetWindowPlacement(v5, &wndpl) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xA5,
               (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
               v8);
    pvAttribute = wndpl.rcNormalPosition;
    rcNormalPosition = wndpl.rcNormalPosition;
    goto LABEL_10;
  }
  WindowAttribute = DwmGetWindowAttribute(v5, 9u, &pvAttribute, 0x10u);
  v12 = WindowAttribute;
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return v12;
  }
  if ( pvAttribute.left >= pvAttribute.right || pvAttribute.top >= pvAttribute.bottom )
  {
    v14 = v5;
    lParam[0] = (LPARAM)&v14;
    lParam[1] = (LPARAM)&v17;
    v17 = 0LL;
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_5560a5ae6a27c3052849bcc6223d54f3_>,
      (LPARAM)lParam);
    rcNormalPosition = v17;
LABEL_10:
    pvAttribute = rcNormalPosition;
  }
  MapWindowPoints(0LL, v7, (LPPOINT)&pvAttribute, 2u);
  result = 0LL;
  *a3 = pvAttribute;
  return result;
}
