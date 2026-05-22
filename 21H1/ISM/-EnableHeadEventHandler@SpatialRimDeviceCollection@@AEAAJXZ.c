/*
 * XREFs of ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800934BC
 * Callers:
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180092E30 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VInputSiteHierarchyManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006B420 (--1-$MakeAllocator@VInputSiteHierarchyManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationCompletedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18007BA20 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18008AC3C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F968 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800903C0 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ @ 0x180092750 (--0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x180093C74 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180095C10 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnableHeadEventHandler(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  SpatialRimDeviceCollectionHeadEventHandler **v3; // rsi
  SpatialRimDeviceCollectionHeadEventHandler *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  SpatialRimDeviceCollectionHeadEventHandler *v7; // rax
  volatile int *v8; // rdx
  SpatialRimDeviceCollectionHeadEventHandler *v9; // r10
  __int64 v10; // rcx
  RawInputProvidersTracing *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SpatialRimDeviceCollectionHeadEventHandler *v16; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v17 = v2;
  v3 = (SpatialRimDeviceCollectionHeadEventHandler **)((char *)this + 2832);
  if ( *((_QWORD *)this + 354) )
    goto LABEL_12;
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 354);
  *v3 = 0LL;
  v4 = (SpatialRimDeviceCollectionHeadEventHandler *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v4;
  if ( v4 )
  {
    v7 = SpatialRimDeviceCollectionHeadEventHandler::SpatialRimDeviceCollectionHeadEventHandler(v4);
    v9 = v7;
    v16 = v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::InternalAddRef(
        (__int64)v7,
        v8);
    *v3 = v9;
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)&v16);
    v6 = 0;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<InputSiteHierarchyManager>::~MakeAllocator<InputSiteHierarchyManager>((void **)&v16);
    v6 = -2147024882;
  }
  if ( RawInputProvidersTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v10,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::HeadEventHandlerEnabled_(v11, v6);
  }
  if ( v6 < 0
    || (v12 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(*v3, this, *((struct IMessageSession **)this + 346)),
        v13 = v12,
        v12 >= 0) )
  {
LABEL_12:
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v13;
}
