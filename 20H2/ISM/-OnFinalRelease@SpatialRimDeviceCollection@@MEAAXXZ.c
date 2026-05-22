/*
 * XREFs of ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800214F0 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x180069674 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F408 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18008FFE4 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800926EC (--1TraceSessionConfig@@QEAA@XZ.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180092CA4 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     GetHolographicInputSession @ 0x1800931A8 (GetHolographicInputSession.c)
 *     ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x180095804 (-SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009599C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::OnFinalRelease(SpatialRimDeviceCollection *this)
{
  __int64 v2; // rcx
  RawInputProvidersTracing *v3; // rcx
  RTL_SRWLOCK *Instance; // rax
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v6; // eax
  int v7; // eax
  _BYTE v8[128]; // [rsp+20h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( RawInputProvidersTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v2,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::SpatialInputControllerCollection_Released_(v3);
  }
  if ( *((_DWORD *)this + 711) )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 711));
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 346) + 264LL))(
    *((_QWORD *)this + 346),
    *((_QWORD *)this + 365));
  SpatialRimDeviceCollection::DisableHeadEventHandler(this);
  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v8);
  v6 = TracingSessionHelper::StartOrStop(HolographicInputSession, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      331LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v8);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 347) + 40LL))(*((_QWORD *)this + 347));
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      333LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v7);
  RIMDeviceCollection::Close((HANDLE *)this);
}
