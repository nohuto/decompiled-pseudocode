/*
 * XREFs of ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x180254810
 * Callers:
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800AAB30 (_lambda_fa229aea017a19cbc9cb3db68405d883_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0515d79353468786afaa47ac5fc4f5c5___::Run @ 0x1800AC710 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0515d79353468786afaa47ac5fc4f5c5___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009391C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024B418 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18024B418.c)
 *     ??1SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024C7BC (--1SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x180251DF4 (-StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18025221C (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(
        struct IWin32ApplicationView *a1,
        char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  LPVOID v10; // rbx
  __int64 (__fastcall *v11)(LPVOID, GUID *, GUID *, __int64 **); // rsi
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, GUID *, GUID *, __int64 *); // rsi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  HWND LastActivePopup; // rbx
  _BYTE v22[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  HWND hWnd; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"SendViewToDesktop");
  v31[0] = &Win32BackedViewHostItemTelemetry::SendViewToDesktop::`vftable';
  Win32BackedViewHostItemTelemetry::SendViewToDesktop::StartActivity(
    (Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v31,
    a1);
  hWnd = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x154,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v4);
LABEL_22:
    Win32BackedViewHostItemTelemetry::SendViewToDesktop::~SendViewToDesktop((Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v31);
    return v5;
  }
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v6);
LABEL_21:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
    goto LABEL_22;
  }
  v25 = 0LL;
  v24 = 0LL;
  v7 = *(_QWORD *)ppv;
  v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v7 + 24))(
         ppv,
         &CLSID_HolographicForegroundAssistant,
         &GUID_0249c870_f630_4a75_8d01_b316c814157a,
         &v26);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 349LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v8);
LABEL_20:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    goto LABEL_21;
  }
  v10 = ppv;
  v11 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 **))(*(_QWORD *)ppv + 24LL);
  if ( v25 )
    (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
  v8 = v11(v10, &CLSID_HolographicViewHostItemLedger, &GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f, &v25);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 350LL;
    goto LABEL_7;
  }
  v12 = ppv;
  v13 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v8 = v13(v12, &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267, &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267, &v24);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 351LL;
    goto LABEL_7;
  }
  v14 = (**(__int64 (__fastcall ***)(struct IWin32ApplicationView *, GUID *, __int64 *))a1)(
          a1,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v30);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5481LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v14);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v30[0], 5LL);
  v5 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x163,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v30);
    goto LABEL_20;
  }
  if ( a2 && IsWindow(hWnd) )
  {
    v18 = *v25;
    v29 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 48))(v25, &v29);
    if ( v19 < 0 )
    {
      v20 = 365LL;
LABEL_27:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_35;
    }
    if ( v29 )
    {
      v27 = 0;
      v22[0] = 0;
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 120LL))(v29, &v27);
      if ( v19 < 0 )
      {
        v20 = 370LL;
        goto LABEL_27;
      }
      if ( v27 == 1 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 80LL))(v29, v22);
        if ( v19 < 0 )
        {
          v20 = 372LL;
          goto LABEL_27;
        }
        if ( v22[0] )
        {
LABEL_40:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
          goto LABEL_41;
        }
      }
    }
LABEL_35:
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26) >= 0 )
    {
      LastActivePopup = GetLastActivePopup(hWnd);
      if ( !IsWindowVisible(LastActivePopup) )
        LastActivePopup = hWnd;
      if ( !SetForegroundWindow(LastActivePopup) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x182,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)0x80070005LL);
    }
    goto LABEL_40;
  }
LABEL_41:
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v31,
    v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  Win32BackedViewHostItemTelemetry::SendViewToDesktop::~SendViewToDesktop((Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v31);
  return 0LL;
}
