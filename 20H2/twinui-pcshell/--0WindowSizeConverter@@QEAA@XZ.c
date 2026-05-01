/*
 * XREFs of ??0WindowSizeConverter@@QEAA@XZ @ 0x1803D0950
 * Callers:
 *     ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803CFF9C (--$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIWindowSizeConversionLogicalClientToWindow@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1803D0808 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIW.c)
 */

// Hidden C++ exception states: #wind=4
WindowSizeConverter *__fastcall WindowSizeConverter::WindowSizeConverter(WindowSizeConverter *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>((__int64)this);
  *(_QWORD *)this = &WindowSizeConverter::`vftable';
  *((_QWORD *)this + 3) = &WindowSizeConverter::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IWindowSizeConversionLogicalClientToWindow,IImmersiveMonitorNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &WindowSizeConverter::`vftable'{for `IWindowSizeConversionLogicalClientToWindow'};
  *((_QWORD *)this + 12) = &WindowSizeConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 17) = v2;
  *((_DWORD *)this + 38) = 0;
  return this;
}
