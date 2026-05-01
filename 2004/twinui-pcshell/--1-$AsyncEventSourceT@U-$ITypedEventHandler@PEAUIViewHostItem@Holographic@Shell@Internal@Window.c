/*
 * XREFs of ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18023F098
 * Callers:
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x18023F400 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ @ 0x18024D200 (--1Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem@@UEAA@XZ @ 0x1802594C8 (--1ApplicationViewBackedViewHostItem@@UEAA@XZ.c)
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x180453EE4 (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x18023F520 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x180246E48 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 result; // rax
  volatile int *v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r10

  *((_BYTE *)a1 + 64) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 15, 0xFFFFFFFF) > 1 )
    wil::slim_event_t<1>::wait(a1 + 7);
  wil::operation_guard::~operation_guard((wil::operation_guard *)(a1 + 7));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 5);
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v4 + 12), v3);
    if ( !(_DWORD)result )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
