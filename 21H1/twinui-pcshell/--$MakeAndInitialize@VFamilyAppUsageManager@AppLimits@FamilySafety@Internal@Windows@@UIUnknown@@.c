/*
 * XREFs of ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18042F558
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180430660 (-CreateInstance@-$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Wind.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180224AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180224AD0.c)
 *     ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x18042FF20 (--0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@89Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180430410 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_180430410.c)
 *     ?RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ @ 0x180432884 (-RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager,IUnknown,>(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager **a1)
{
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *v2; // rax
  int CanCastTo; // ebx
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // r9

  *a1 = 0LL;
  v2 = (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)operator new(
                                                                              0x108uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::FamilyAppUsageManager(v2);
    CanCastTo = Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v4 + 8,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
