/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x180183074
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18017DB10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016BF24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___ @ 0x180179108 (Windows--Internal--ComTaskPool--QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1801799A4 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x18017A5CC (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x18017CFE4 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1801806F0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  char v5; // bl
  void *v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  _DWORD *v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    a3);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( (int)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::GetNextChainLinks(
              (__int64)this + 176,
              &v11,
              v4) < 0
    || (*(int (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v11 + 56LL))(v11, &v10) < 0
    || (v5 = 1, !(_DWORD)v10) )
  {
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( v5 )
  {
    v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6
       ? (_DWORD *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v6)
       : 0LL;
    if ( v8 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(
        (__int64)this + 176,
        (__int64)v8,
        v7);
      *v8 = 1;
      v10 = v8;
      if ( (int)Windows::Internal::ComTaskPool::QueueTask__lambda_a5fd20ec656c6250dae9aa58fde1c803___(v9, &v10) >= 0 )
        v8 = 0LL;
      if ( v8 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v8);
    }
  }
}
