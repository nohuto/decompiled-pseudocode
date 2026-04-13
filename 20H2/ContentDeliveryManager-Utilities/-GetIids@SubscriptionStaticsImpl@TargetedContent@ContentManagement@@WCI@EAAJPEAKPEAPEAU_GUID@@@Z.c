/*
 * XREFs of ?GetIids@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180029150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetIids(
           (ContentManagement::TargetedContent::SubscriptionStaticsImpl *)(a1 - 40),
           a2,
           a3);
}
