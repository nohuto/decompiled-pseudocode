/*
 * XREFs of ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024FC0
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028CA0 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180028CA0.c)
 *     ?QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029440 (-QueryInterface@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@_ea_180029440.c)
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
