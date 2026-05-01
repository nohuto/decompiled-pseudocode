/*
 * XREFs of ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x1801557B8
 * Callers:
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x180154E08 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18015B340 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs(__int64 a1, int a2)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLinkEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLinkEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Shell::Chaining::ChainLinkEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = &Windows::Internal::Shell::Chaining::ChainLinkEventArgs::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLinkEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Shell::Chaining::ChainLinkEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
