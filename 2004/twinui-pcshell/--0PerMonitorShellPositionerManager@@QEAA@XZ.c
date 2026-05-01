/*
 * XREFs of ??0PerMonitorShellPositionerManager@@QEAA@XZ @ 0x1803D71B4
 * Callers:
 *     ??$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D705C (--$MakeAndInitialize@VPerMonitorShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18008E738 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803D7118 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1803D7118.c)
 */

PerMonitorShellPositionerManager *__fastcall PerMonitorShellPositionerManager::PerMonitorShellPositionerManager(
        PerMonitorShellPositionerManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IPerMonitorShellPositionerManager>>'};
  *((_QWORD *)this + 3) = &PerMonitorShellPositionerManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &PerMonitorShellPositionerManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPerMonitorShellPositionerManager>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IPerMonitorShellPositionerManager>>'};
  `eh vector constructor iterator'(
    (char *)this + 104,
    8LL,
    10LL,
    (void (*)(void *))wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>);
  return this;
}
