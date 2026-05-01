/*
 * XREFs of GetViewId @ 0x180241418
 * Callers:
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180242E68 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180242FBC (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802430EC (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetViewId(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *), _QWORD *a2)
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, void **); // rdi
  int v12; // eax
  void *v13; // rcx
  void *v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v17; // [rsp+40h] [rbp+20h] BYREF
  __int64 v18; // [rsp+48h] [rbp+28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v19 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v5 = v4(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = 0LL;
    v7 = v19;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v9 = v8(v7, &v18);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v17 = 0LL;
      v10 = v18;
      v11 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v18 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v17,
        0LL);
      v12 = v11(v10, &v17);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v14 = v17;
        v13 = 0LL;
        v17 = 0LL;
        *a2 = v14;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
          (const char *)(unsigned int)v12);
        v13 = v17;
      }
      if ( v13 )
        CoTaskMemFree(v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v6;
}
