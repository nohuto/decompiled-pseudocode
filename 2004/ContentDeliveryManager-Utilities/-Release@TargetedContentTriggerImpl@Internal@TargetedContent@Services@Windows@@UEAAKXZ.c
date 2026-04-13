/*
 * XREFs of ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180025370
 * Callers:
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180029760 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 *     ?Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ @ 0x180029A00 (-Release@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::Release(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
