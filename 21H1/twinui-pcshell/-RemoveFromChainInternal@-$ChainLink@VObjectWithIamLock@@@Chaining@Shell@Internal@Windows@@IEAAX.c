/*
 * XREFs of ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18015C7A0
 * Callers:
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18015C6B4 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18015F374 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x180120DA8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180147BC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x1801568E8 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x180156964 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@_ea_180156964.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // rbp
  __int64 *v6; // rdi
  __int64 v7; // r8

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    a3);
  v5 = *(__int64 **)(a1 + 48);
  v6 = *(__int64 **)(a1 + 40);
  if ( v5 - v6 )
  {
    while ( v6 != v5 )
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        a2,
        a1,
        *v6++,
        a1,
        0);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 2);
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a2,
      a1,
      v7,
      a1,
      1u);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(a2, a1, 1);
    ++*(_DWORD *)(a1 + 72);
    *(_BYTE *)(a1 + 88) = 1;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    v7);
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
    *(__int64 **)(a1 + 40),
    *(__int64 **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 40);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 64));
}
