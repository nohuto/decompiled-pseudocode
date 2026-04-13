/*
 * XREFs of ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180029950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
           (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)(a1 - 56),
           a2);
}
