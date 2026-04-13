/*
 * XREFs of ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025180
 * Callers:
 *     ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800294F0 (-QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029520 (-QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAJAEBU_GUID@@PE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::QueryInterface(
        ContentManagement::TargetedContent::SubscriptionStaticsImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
