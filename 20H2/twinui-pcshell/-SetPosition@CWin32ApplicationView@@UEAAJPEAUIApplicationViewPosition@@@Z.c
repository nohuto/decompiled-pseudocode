/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1801949E0
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x180192980 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CED0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18000F544 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139AC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x180191AD0 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x180191BA0 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x180194E44 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(CWin32ApplicationView *this, struct IApplicationViewPosition *a2)
{
  HWND v3; // rsi
  int v4; // eax
  CWin32ApplicationView *v5; // rcx
  signed int LastErrorFailHr; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  UINT showCmd; // eax
  CWin32ApplicationView *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[44]; // [rsp+68h] [rbp-98h]
  WINDOWPLACEMENT wndpl; // [rsp+98h] [rbp-68h] BYREF
  struct tagWINDOWPLACEMENT v25; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v26[16]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v17) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, WINDOWPLACEMENT *))(*(_QWORD *)v17 + 72LL))(v17, &wndpl);
    LastErrorFailHr = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v4);
LABEL_34:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      return (unsigned int)LastErrorFailHr;
    }
    *(_DWORD *)v23 = 44;
    *(_OWORD *)&v23[4] = *(_OWORD *)&wndpl.length;
    *(_QWORD *)&v23[20] = *(_QWORD *)&wndpl.ptMinPosition.y;
    *(_OWORD *)&v23[28] = *(_OWORD *)&wndpl.ptMaxPosition.y;
    *(_OWORD *)&v25.length = *(_OWORD *)v23;
    *(_OWORD *)&v25.ptMinPosition.y = *(_OWORD *)&v23[16];
    *(_QWORD *)&v25.rcNormalPosition.top = *(_OWORD *)&wndpl.ptMaxPosition.y >> 32;
    v25.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&wndpl.ptMaxPosition.y, 12));
    v25.flags = wndpl.length | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v5, v3, &v25);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v16) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 32LL))(v16, &v19);
    LastErrorFailHr = v7;
    if ( v7 < 0 )
    {
      v8 = 482LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_33;
    }
    if ( v19 == 4 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v26);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 488LL;
        goto LABEL_31;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, &v21);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 491LL;
        goto LABEL_31;
      }
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v20);
      if ( v20 )
        lambda_a869f7513e8efdf703e23387751d77d1_::operator()(&v22, v20);
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, int))(*(_QWORD *)v18 + 24LL))(
                          v18,
                          v3,
                          v26,
                          0LL,
                          v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    else
    {
      if ( v17 )
        goto LABEL_35;
      if ( v19 != 3 )
      {
LABEL_19:
        if ( !v16 )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          if ( !GetWindowPlacement(v3, &wndpl) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v10, v9, v11, v12);
            goto LABEL_33;
          }
          showCmd = wndpl.showCmd;
          if ( wndpl.showCmd == 3 )
            showCmd = 9;
          wndpl.showCmd = showCmd;
          v7 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, RECT *))(*(_QWORD *)a2 + 24LL))(
                 a2,
                 &wndpl.rcNormalPosition);
          LastErrorFailHr = v7;
          if ( v7 < 0 )
          {
            v8 = 513LL;
            goto LABEL_31;
          }
          wndpl.flags |= 4u;
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v14, v3, &wndpl);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v20);
      if ( v20 )
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v22, v20);
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v18 + 32LL))(v18, v3, 5LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_34;
    }
  }
  if ( !v17 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return 0LL;
}
