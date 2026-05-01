/*
 * XREFs of ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x18017B1C4
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x18017AF90 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x18017B0A0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016C144 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightweightWindows@@@details@wil@@QEAAX_N.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180179664 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x18017AD08 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IUnknown *v3; // rbp
  struct IUnknown **v6; // rbx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  struct IUnknown **v11; // r14
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IUnknown *v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = (struct IUnknown *)a2;
  v3 = (struct IUnknown *)a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::GetImpl'::`2'::impl,
    1u,
    a3);
  v6 = *(struct IUnknown ***)(a1 + 40);
  v7 = (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v6) >> 3;
  if ( v7 )
  {
    v17 = 0;
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v6[v7 - 1]->lpVtbl[2].QueryInterface)(v6[v7 - 1], &v17);
    if ( v8 < 0 )
    {
      v9 = 317LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !v17 )
    {
      v8 = -2147024811;
      v9 = 318LL;
      goto LABEL_4;
    }
    v6 = *(struct IUnknown ***)(a1 + 40);
  }
  v11 = *(struct IUnknown ***)(a1 + 48);
  while ( v6 != v11 && !(unsigned int)SHIsSameObject(*v6, v3) )
    ++v6;
  if ( v6 != *(struct IUnknown ***)(a1 + 48) )
  {
    v8 = -2147024811;
    v9 = 327LL;
    goto LABEL_4;
  }
  v12 = *(__int64 **)(a1 + 48);
  if ( *(__int64 **)(a1 + 56) == v12 )
  {
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
      (__int64 **)(a1 + 40),
      v12,
      (__int64 *)&v16);
    v3 = v16;
  }
  else
  {
    v13 = *(__int64 **)(a1 + 48);
    *v12 = (__int64)v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    *(_QWORD *)(a1 + 48) += 8LL;
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a3,
      a1,
      v14,
      (__int64)v3,
      2u);
  ++*(_DWORD *)(a1 + 72);
  return 0LL;
}
