/*
 * XREFs of ?get_PredicateKind@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentPredicateKind@2345@@Z @ 0x180062150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_PredicateKind(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentPredicateKind *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 41);
  return 0LL;
}
