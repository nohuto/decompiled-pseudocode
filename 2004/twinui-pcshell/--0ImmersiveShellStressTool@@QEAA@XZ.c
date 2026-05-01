/*
 * XREFs of ??0ImmersiveShellStressTool@@QEAA@XZ @ 0x180216948
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18021649C (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@WRL@Microsoft@@QEAA@XZ @ 0x1802168AC (--0-$RuntimeClass@U-$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UII.c)
 */

ImmersiveShellStressTool *__fastcall ImmersiveShellStressTool::ImmersiveShellStressTool(ImmersiveShellStressTool *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>((__int64)this);
  *(_QWORD *)this = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 3) = &ImmersiveShellStressTool::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,1,IImmersiveShellStressTool>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  *((_DWORD *)this + 28) = SHTaskPoolGetUniqueContext();
  return this;
}
