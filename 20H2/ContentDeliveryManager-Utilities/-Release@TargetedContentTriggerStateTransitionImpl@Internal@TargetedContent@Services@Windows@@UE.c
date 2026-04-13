/*
 * XREFs of ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180024FD0
 * Callers:
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180028CB0 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7.c)
 *     ?Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180028F00 (-Release@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::Release(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::Release(this);
}
