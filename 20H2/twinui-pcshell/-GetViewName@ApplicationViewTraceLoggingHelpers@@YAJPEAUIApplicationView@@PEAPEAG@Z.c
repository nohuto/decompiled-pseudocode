/*
 * XREFs of ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803F7CD4
 * Callers:
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1803F6D38 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1803FBD80 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1803FC358 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1803FC588 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803FC754 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803FC940 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803FFEA0 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18040009C (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18040033C (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180029560 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002A298 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180168CAC (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetViewName(
        ApplicationViewTraceLoggingHelpers *this,
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  unsigned int v5; // ebx
  char *v6; // r14
  __int64 v7; // rsi
  int v8; // edi
  _WORD *v9; // rax
  _WORD *v10; // rcx
  __int16 v11; // dx
  int v12; // eax
  __int64 v13; // rdx
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // dx
  int v17; // eax
  unsigned __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pString[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+3B8h]

  v5 = 0;
  v6 = 0LL;
  *(_QWORD *)v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v7 = 8LL;
  if ( (**(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v26) >= 0 )
  {
    if ( is_mul_ok(8uLL, 2uLL) )
    {
      v8 = 0;
      v9 = CoTaskMemAlloc(0x10uLL);
      v10 = v9;
      if ( v9 )
      {
        v25 = 8LL;
        v6 = (char *)v9;
        *(_QWORD *)v23 = v9;
        *v9 = 0;
      }
      else
      {
        v8 = -2147024882;
        v10 = 0LL;
      }
      if ( v8 >= 0 )
      {
        while ( --v7 )
        {
          v11 = *(_WORD *)((char *)v10 + (char *)L"WinRT: " - v6);
          if ( !v11 )
            break;
          *v10++ = v11;
        }
        *v10 = 0;
        v24 = 7LL;
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
        v29 = -1LL;
        v30 = -1LL;
        if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int64 *))(*(_QWORD *)this + 136LL))(
               this,
               &v28) >= 0 )
        {
          v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                  (__int64)v23,
                  &v28);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x13,
              (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
              (const char *)(unsigned int)v12);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
        goto LABEL_32;
      }
    }
    else
    {
      v8 = -2147024362;
    }
    v13 = 14LL;
LABEL_36:
    v18 = (unsigned int)v8;
    goto LABEL_37;
  }
  if ( !is_mul_ok(8uLL, 2uLL) )
  {
    v8 = -2147024362;
LABEL_35:
    v13 = 25LL;
    goto LABEL_36;
  }
  v8 = 0;
  v14 = CoTaskMemAlloc(0x10uLL);
  v15 = v14;
  if ( v14 )
  {
    v25 = 8LL;
    v6 = (char *)v14;
    *(_QWORD *)v23 = v14;
    *v14 = 0;
  }
  else
  {
    v8 = -2147024882;
    v15 = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_35;
  while ( --v7 )
  {
    v16 = *(_WORD *)((char *)v15 + (char *)L"Win32: " - v6);
    if ( !v16 )
      break;
    *v15++ = v16;
  }
  *v15 = 0;
  v24 = 7LL;
  v17 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, HWND *))(*(_QWORD *)this + 72LL))(this, &hWnd);
  v8 = v17;
  if ( v17 < 0 )
  {
    v18 = (unsigned int)v17;
    v13 = 28LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)v18);
    v5 = v8;
    goto LABEL_38;
  }
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v23,
            (__int64)L"Class[%s] ",
            ClassName);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v19);
  }
  if ( InternalGetWindowText(hWnd, pString, 260) )
  {
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v23,
            (__int64)L"Title[%s]",
            pString);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v20);
  }
LABEL_32:
  v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((__int64 *)v23, a2);
  v8 = v21;
  if ( v21 < 0 )
  {
    v18 = (unsigned int)v21;
    v13 = 42LL;
    goto LABEL_37;
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v23);
  return v5;
}
