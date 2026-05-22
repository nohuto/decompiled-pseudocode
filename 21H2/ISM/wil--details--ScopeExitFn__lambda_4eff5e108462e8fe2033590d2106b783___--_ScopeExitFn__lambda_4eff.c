/*
 * XREFs of wil::details::ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___::_ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___ @ 0x1801577B4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::dtor$2 @ 0x18016506C (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800757C0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___::_ScopeExitFn__lambda_4eff5e108462e8fe2033590d2106b783___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return std::_Func_class<void,>::operator()(*(_QWORD *)a1);
  }
  return result;
}
