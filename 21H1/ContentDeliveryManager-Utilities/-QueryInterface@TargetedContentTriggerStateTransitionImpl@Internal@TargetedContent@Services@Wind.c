/*
 * XREFs of ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022DB0
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026A90 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180026A90.c)
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027230 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180027230.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
