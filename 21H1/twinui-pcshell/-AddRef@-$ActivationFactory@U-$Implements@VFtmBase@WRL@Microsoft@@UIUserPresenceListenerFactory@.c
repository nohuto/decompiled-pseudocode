/*
 * XREFs of ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18020DA60
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800CF2E0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewListenerFactory@DataE.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800CF2F0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFa.c)
 *     ??$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18020AFE0 (--$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456.c)
 *     ??$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18020B068 (--$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180218028 (--$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V1.c)
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBrokeredViewTabConverterStatics@@@Z @ 0x180240E28 (--$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVB.c)
 *     ?AddRef@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x180241070 (-AddRef@BrokeredViewTabConverterStatics@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027864C (--$MakeAndInitialize@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@De.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009197C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 88) & 4) == 0 && v2 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
