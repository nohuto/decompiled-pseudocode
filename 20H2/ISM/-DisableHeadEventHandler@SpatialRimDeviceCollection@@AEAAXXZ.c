/*
 * XREFs of ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180092CA4
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094920 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180094ED0 (-ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18008A6DC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F408 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x18009369C (-HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800956B0 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::DisableHeadEventHandler(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  SpatialRimDeviceCollectionHeadEventHandler *v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  RawInputProvidersTracing *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v3 = (SpatialRimDeviceCollectionHeadEventHandler *)*((_QWORD *)this + 354);
  if ( v3 )
  {
    v4 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(v3, 0LL, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        164LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 354);
    if ( RawInputProvidersTracing::IsEnabled(v5) )
    {
      wil::details::static_lazy<RawInputProvidersTracing>::get(
        v6,
        _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
      RawInputProvidersTracing::HeadEventHandlerDisabled_(v7);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
