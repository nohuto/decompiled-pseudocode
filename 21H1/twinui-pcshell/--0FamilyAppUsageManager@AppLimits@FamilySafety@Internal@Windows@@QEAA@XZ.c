/*
 * XREFs of ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x18042FF20
 * Callers:
 *     ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042F558 (--$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18042FB94 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_18042FB94.c)
 */

RTL_SRWLOCK *__fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::FamilyAppUsageManager(
        RTL_SRWLOCK *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>((__int64)this);
  this->Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IInspectable'};
  this[1].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>'};
  this[6].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IImmersiveShellComponent'};
  this[7].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  this[14].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `IWeakReferenceSource'};
  this[15].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>'};
  this[16].Ptr = &Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::`vftable'{for `Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification'};
  this[17].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[23].Ptr = 0LL;
  InitializeSRWLock(this + 24);
  InitializeSRWLock(this + 25);
  this[26].Ptr = 0LL;
  LOBYTE(this[27].Ptr) = 0;
  this[28].Ptr = 0LL;
  this[29].Ptr = 0LL;
  LODWORD(this[30].Ptr) = 0;
  HIDWORD(this[30].Ptr) = 1;
  LOBYTE(this[31].Ptr) = 0;
  this[32].Ptr = 0LL;
  return this;
}
