/*
 * XREFs of ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x1804537A4
 * Callers:
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z @ 0x180100600 (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18023E778 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180246AB4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersive_ea_180246AB4.c)
 */

Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vector deleting destructor'(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        char a2)
{
  volatile int *v4; // rdx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 32);
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>((__int64 *)this + 23);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
