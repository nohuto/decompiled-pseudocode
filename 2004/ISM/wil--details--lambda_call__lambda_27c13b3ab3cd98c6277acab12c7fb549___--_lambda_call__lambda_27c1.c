/*
 * XREFs of wil::details::lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___::_lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___ @ 0x1801574E4
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$4 @ 0x180162D87 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180162D87.c)
 * Callees:
 *     ?RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180163300 (-RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEA.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___::_lambda_call__lambda_27c13b3ab3cd98c6277acab12c7fb549___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return Windows::Internal::Holographic::HolographicDriverHandleWrapper::RemoveHandleOpenCloseCallbacks(
             **(_QWORD **)a1,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16));
  }
  return result;
}
