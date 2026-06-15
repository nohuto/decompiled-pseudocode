/*
 * XREFs of wil::details::ScopeExitFn__lambda_702672805a7bdb1b6eca33161466abb8___::_ScopeExitFn__lambda_702672805a7bdb1b6eca33161466abb8___ @ 0x1800EAF78
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$2 @ 0x1800774F0 (_BuildDeviceGraphForStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::ScopeExitFn__lambda_702672805a7bdb1b6eca33161466abb8___::_ScopeExitFn__lambda_702672805a7bdb1b6eca33161466abb8___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
