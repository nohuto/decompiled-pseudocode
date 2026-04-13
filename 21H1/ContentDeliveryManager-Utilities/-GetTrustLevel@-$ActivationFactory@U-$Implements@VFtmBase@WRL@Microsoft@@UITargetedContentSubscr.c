/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180023BA0
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180026EB0 (-GetTrustLevel@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargeted_ea_180026EB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        int *a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    v4 = (*(__int64 (**)(void))(v2 + 16))();
  else
    v4 = 2;
  *a2 = v4;
  return 0LL;
}
