/*
 * XREFs of ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x180095290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800940A0 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180094140 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096E18 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnInputReport(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        void *a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  RawInputProvidersContinuousTracing *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( RawInputProvidersContinuousTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v8,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::InputReportReceived_(v9, a2, a4);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD, char *))(**((_QWORD **)this + 347) + 64LL))(
          *((_QWORD *)this + 347),
          a2,
          a3,
          a4,
          (char *)this + 2760);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      416LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
