/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_::_Do_call @ 0x180166EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAAEAIW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E250 (-GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Win.c)
 */

_DWORD *__fastcall std::_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_::_Do_call(__int64 a1)
{
  _DWORD *result; // rax

  result = (_DWORD *)Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
                       **(_QWORD **)(a1 + 8) + 44LL,
                       **(_DWORD **)(a1 + 16));
  --*result;
  return result;
}
