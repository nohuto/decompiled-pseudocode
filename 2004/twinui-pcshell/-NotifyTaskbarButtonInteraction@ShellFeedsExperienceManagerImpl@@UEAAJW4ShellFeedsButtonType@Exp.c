/*
 * XREFs of ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBG@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG@Z @ 0x18009859C (--$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Expe.c)
 *     ??$ShellFeedsExperienceManagerImpl_PokeOnMouseMove@AEAH@ShellFeedsTelemetry@@SAXAEAH@Z @ 0x1800986B8 (--$ShellFeedsExperienceManagerImpl_PokeOnMouseMove@AEAH@ShellFeedsTelemetry@@SAXAEAH@Z.c)
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009B9EC (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009BA60 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009D008 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x18009D048 (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009DE54 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_N@Z @ 0x18009E3E8 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@QEAA_NXZ @ 0x18009E474 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAA_NXZ @ 0x18009E4B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::NotifyTaskbarButtonInteraction(
        __int64 a1,
        int a2,
        int a3,
        HSTRING a4)
{
  __int64 v7; // rdx
  ShellFeedsExperienceManagerImpl *v8; // rcx
  bool v9; // al
  unsigned __int8 Variant; // cl
  PCWSTR v12[5]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v12[0] = WindowsGetStringRawBuffer(a4, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &,unsigned short const *>(
    &v13,
    &v14,
    (__int64 *)v12);
  if ( a3 <= 0 )
    return 0LL;
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
    {
      *(_BYTE *)(a1 + 186) = 0;
      ShellFeedsExperienceManagerImpl::_NotifyViewTaskbarButtonHoverStateChanged(
        (ShellFeedsExperienceManagerImpl *)a1,
        0);
      return 0LL;
    }
    if ( a3 == 4 )
    {
      if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1)
        && *(_BYTE *)(a1 + 185) )
      {
        *(_BYTE *)(a1 + 186) = 1;
      }
      ShellFeedsExperienceManagerImpl::_NotifyViewTaskbarButtonHoverStateChanged(
        (ShellFeedsExperienceManagerImpl *)a1,
        1);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetImpl'::`2'::impl)
        && ShellFeedsExperienceManagerImpl::CanPokeNow((ShellFeedsExperienceManagerImpl *)a1) )
      {
        ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_PokeOnMouseMove<int &>((int *)(a1 + 156));
        ShellFeedsExperienceManagerImpl::Poke((ShellFeedsExperienceManagerImpl *)a1, a4);
        ++*(_DWORD *)(a1 + 156);
      }
      return 0LL;
    }
    if ( a3 != 5 )
      return 0LL;
  }
  if ( a3 == 1 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::GetImpl'::`2'::impl) )
    {
      if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1)
        || !ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(v8) )
      {
        return 0LL;
      }
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl) == 4
           || ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1) )
    {
      return 0LL;
    }
  }
  else
  {
    v9 = a3 == 5;
    if ( a3 == 2 )
    {
      Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl);
      v9 = 0;
      if ( Variant >= 2u && (Variant <= 4u || Variant == 6) )
        v9 = 1;
    }
    if ( v9 )
    {
      if ( *(_BYTE *)(a1 + 186) )
      {
        *(_BYTE *)(a1 + 186) = 0;
        return 0LL;
      }
      if ( !*(_BYTE *)(a1 + 185) )
      {
        *(_BYTE *)(a1 + 185) = 1;
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), v7);
        *(_BYTE *)(a1 + 186) = 1;
      }
    }
  }
  ShellFeedsExperienceManagerImpl::_Show(a1, a4, (unsigned int)a3);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)(a1 + 176) = _Xtime_get_ticks();
    *(_DWORD *)(a1 + 156) = 0;
  }
  return 0LL;
}
