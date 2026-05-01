/*
 * XREFs of ??1PeoplePaneViewManager@@UEAA@XZ @ 0x18025D4AC
 * Callers:
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x18025D9C8 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18013FF9C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180141840 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x18014533C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021D8F8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x18025DA04 (--_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PeoplePaneViewManager::~PeoplePaneViewManager(PeoplePaneViewManager *this)
{
  unsigned int v2; // edx
  void *v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rbx
  void *v7; // rbx

  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 71);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 70);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  v3 = (void *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 61) )
    {
      v5 = 0LL;
      do
      {
        PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
          (PeoplePaneViewManager::ViewChangeListener *)(v5 + *((_QWORD *)this + 60)),
          v2);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < *((_QWORD *)this + 61) );
      v3 = (void *)*((_QWORD *)this + 60);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 60) = 0LL;
  }
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 352));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this + 352);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 216));
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)this + 216);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 24);
  v6 = (void *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
      *((__int64 **)this + 21),
      *((__int64 **)this + 22));
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 23) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(*((_QWORD *)this + 17), *((_QWORD *)this + 18));
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((PeoplePaneViewManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
