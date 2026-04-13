/*
 * XREFs of ?GetRuntimeClassName@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180025B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::GetRuntimeClassName(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.Services.TargetedContent.Internal.TargetedContentTriggerStateTransition",
           0x4Fu,
           a2);
}
