/*
 * XREFs of wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___ @ 0x1801577D8
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::dtor$1 @ 0x180166307 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_c364fe7c41acf4148978cba8a333a804_::operator() @ 0x1801587C0 (_lambda_c364fe7c41acf4148978cba8a333a804_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_c364fe7c41acf4148978cba8a333a804_::operator()();
  }
  return result;
}
