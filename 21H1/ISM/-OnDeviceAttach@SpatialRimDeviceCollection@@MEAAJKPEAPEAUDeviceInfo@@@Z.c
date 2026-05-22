/*
 * XREFs of ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034AD0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F968 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800903C0 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x180092C4C (--1TraceSessionConfig@@QEAA@XZ.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800932B8 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800935E8 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     GetHolographicInputSession @ 0x180093708 (GetHolographicInputSession.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180095EFC (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDeviceAttach(void **this, unsigned int a2, struct DeviceInfo **a3)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rcx
  RawInputProvidersTracing *v10; // rcx
  int v12; // eax
  _BYTE v13[128]; // [rsp+20h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v13);
  v7 = TracingSessionHelper::StartOrStop(HolographicInputSession, 1);
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v13);
  if ( v7 < 0 && RawInputProvidersTracing::IsEnabled(v8) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v9,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::FailedToStartTracingSession_(v10, v7);
  }
  if ( a3 )
  {
    if ( (int)HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3) >= 0 )
    {
      v12 = SpatialRimDeviceCollection::DoDeviceAttach(this, a2, *a3);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          354LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
