/*
 * XREFs of ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180250920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_64254619df9f214b55a0e1ef01728cd5___ @ 0x1800A9914 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase__lambda_64254619df9f214b55a0e1ef01728cd5___.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___ @ 0x1800A9A48 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_cc5deae.c)
 *     _lambda_025d670431b0b6098eb2d1c47c9e9598_::__lambda_025d670431b0b6098eb2d1c47c9e9598_ @ 0x1800A9D9C (_lambda_025d670431b0b6098eb2d1c47c9e9598_--__lambda_025d670431b0b6098eb2d1c47c9e9598_.c)
 *     _lambda_cc5deaedd2cfca8d7c581af421c5ead5_::__lambda_cc5deaedd2cfca8d7c581af421c5ead5_ @ 0x1800A9DF0 (_lambda_cc5deaedd2cfca8d7c581af421c5ead5_--__lambda_cc5deaedd2cfca8d7c581af421c5ead5_.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18024BC84 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18024BC84.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024BD38 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18024BD38.c)
 *     ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024D084 (--1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802523CC (-StartActivity@PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationV.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802548F8 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180254A98 (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortFromHolographic(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        unsigned __int8 *a2)
{
  unsigned int v4; // esi
  struct IWin32ApplicationView *v5; // rbx
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  struct Windows::Foundation::IAsyncAction *v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v4 = 0;
  *a2 = 0;
  v5 = (struct IWin32ApplicationView *)*((_QWORD *)this + 69);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"PortFromHolographic");
  v14[0] = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  Win32BackedViewHostItemTelemetry::PortFromHolographic::StartActivity(
    (Win32BackedViewHostItemTelemetry::PortFromHolographic *)v14,
    v5);
  v6 = (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 24);
  if ( Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate(v6) )
  {
    v12 = 0LL;
    v7 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(v6, 0, &v12);
    v8 = v7;
    if ( v7 >= 0 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v15,
        (__int64)v14);
      v15[0] = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
      holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5___(
        v13,
        v6,
        (__int64)v15);
      lambda_cc5deaedd2cfca8d7c581af421c5ead5_::__lambda_cc5deaedd2cfca8d7c581af421c5ead5_((Win32BackedViewHostItemTelemetry::PortFromHolographic *)v15);
      v9 = wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_64254619df9f214b55a0e1ef01728cd5___(
             (__int64)v12,
             v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        *a2 = 1;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A8,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v9);
        v4 = v10;
      }
      lambda_025d670431b0b6098eb2d1c47c9e9598_::__lambda_025d670431b0b6098eb2d1c47c9e9598_((__int64)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39B,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v7);
      v4 = v8;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  }
  Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic((Win32BackedViewHostItemTelemetry::PortFromHolographic *)v14);
  return v4;
}
