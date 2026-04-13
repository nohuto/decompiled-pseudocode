/*
 * XREFs of ?get_Options@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentTriggerOptions@2345@@Z @ 0x180062320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_Options(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerOptions *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 40);
  return 0LL;
}
