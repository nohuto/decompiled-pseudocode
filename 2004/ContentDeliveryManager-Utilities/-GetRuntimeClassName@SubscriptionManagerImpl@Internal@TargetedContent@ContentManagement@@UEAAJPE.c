/*
 * XREFs of ?GetRuntimeClassName@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180042AD0
 * Callers:
 *     ?GetRuntimeClassName@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004A1B0 (-GetRuntimeClassName@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetRuntimeClassName(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.TargetedContent.Internal.SubscriptionManager", 0x3Eu, a2);
}
