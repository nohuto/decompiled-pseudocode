/*
 * XREFs of ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x1801910D4
 * Callers:
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x180191320 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C008 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180145420 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x1801912E8 (--_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z.c)
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::~ApplicationViewManagerVisibilityDebouncer(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  void *v4; // rdi
  unsigned int v5; // edx
  void *v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi

  *(_QWORD *)this = &ApplicationViewManagerVisibilityDebouncer::`vftable';
  *((_QWORD *)this + 1) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 2) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &ApplicationViewManagerVisibilityDebouncer::`vftable'{for `IApplicationViewCollectionTestHook'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 25) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 24) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 25) );
      v2 = (void *)*((_QWORD *)this + 24);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(*((_QWORD *)this + 15), *((_QWORD *)this + 16));
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this + 13);
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      v8 = 0LL;
      do
      {
        ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
          (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)(v8 + *((_QWORD *)this + 9)),
          v5);
        ++v7;
        v8 += 32LL;
      }
      while ( v7 < *((_QWORD *)this + 10) );
      v6 = (void *)*((_QWORD *)this + 9);
    }
    CoTaskMemFree(v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
}
