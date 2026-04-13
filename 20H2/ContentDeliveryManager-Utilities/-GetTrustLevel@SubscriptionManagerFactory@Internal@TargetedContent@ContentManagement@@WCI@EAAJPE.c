/*
 * XREFs of ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180028E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return ContentManagement::IdentityManager::GetTrustLevel((ContentManagement::IdentityManager *)(a1 - 40), a2);
}
