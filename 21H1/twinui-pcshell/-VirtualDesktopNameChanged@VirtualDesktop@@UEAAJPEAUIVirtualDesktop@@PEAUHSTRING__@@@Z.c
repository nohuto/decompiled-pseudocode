/*
 * XREFs of ?VirtualDesktopNameChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180358100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C860 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180356F2C (--$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@.c)
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopNameChanged(VirtualDesktop *this, struct IUnknown *a2, HSTRING a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u);
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 11)) )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
      (RTL_SRWLOCK *)this + 8,
      (__int64)this - 16,
      1);
  return 0LL;
}
