/*
 * XREFs of ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18026B47C
 * Callers:
 *     ?add_TabDeselectedViewActive@TabViewManager@@UEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180280A90 (-add_TabDeselectedViewActive@TabViewManager@@UEAAJPEAU-$ITypedEventHandler@PEAVBrokeredViewTabCo.c)
 *     ?add_ViewTabAssociated@TabViewManager@@UEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180280AE0 (-add_ViewTabAssociated@TabViewManager@@UEAAJPEAU-$ITypedEventHandler@PEAVBrokeredViewTabConverte.c)
 *     ?add_ViewTabClosed@TabViewManager@@UEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180280B30 (-add_ViewTabClosed@TabViewManager@@UEAAJPEAU-$ITypedEventHandler@PEAVBrokeredViewTabConverter@Ta.c)
 *     ?add_ViewTabDeassociated@TabViewManager@@UEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180280B80 (-add_ViewTabDeassociated@TabViewManager@@UEAAJPEAU-$ITypedEventHandler@PEAVBrokeredViewTabConver.c)
 *     ?add_ViewTabLostFocus@TabViewManager@@UEAAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180280BD0 (-add_ViewTabLostFocus@TabViewManager@@UEAAJPEAU-$ITypedEventHandler@PEAVBrokeredViewTabConverter.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180065860 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180262E44 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Int.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v7; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>>(
         a2,
         (__int64 *)&v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1,
             v8,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v7;
}
