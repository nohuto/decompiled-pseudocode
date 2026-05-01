/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002C4AC
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002D150 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18007DA70 (-EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 * Callees:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002C60C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002D9FC (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18004D710 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x180219DE0 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x180221AF8 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64 *); // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int IsPropertySetContextHolographic; // eax
  unsigned int ApplicationViewUniqueIdForTracing; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v14[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         v14) >= 0 )
  {
    v6 = v14[0];
    v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14[0] + 24LL);
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v7(v6, &v16) >= 0
      && ((*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 328LL))(v16, 0LL)
       || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 328LL))(v16, 5LL)) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      return 0;
    }
  }
  v9 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v15 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 400LL))(a2, &v15) >= 0
    && v15 - 1 <= 3 )
  {
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LODWORD(v14[0]) = 1;
  }
  else
  {
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(this, a3);
    if ( IsPropertySetContextHolographic == 2 )
    {
      LODWORD(v16) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LODWORD(v14[0]) = 0;
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(v14, &v16);
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, v15) )
        *((_BYTE *)this + 296) = 1;
      return 1;
    }
    if ( IsPropertySetContextHolographic == 1
      || !HolographicPositioner::_IsViewPropertySetHeuristicHolographic(this, a2, a3) )
    {
      return 0;
    }
    ApplicationViewUniqueIdForTracing = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LODWORD(v14[0]) = 2;
  }
  LODWORD(v16) = ApplicationViewUniqueIdForTracing;
  HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(v14, &v16);
  return 1;
}
