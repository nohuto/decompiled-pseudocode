/*
 * XREFs of wil::details::lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___::_lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___ @ 0x180026A20
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$11 @ 0x180041B21 (_CApplicationManager--RpcGetProcess_--_1_--dtor$11.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___::_lambda_call__lambda_5f49d5e02d11af6811cb389ab1b22b61___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CApplicationManager::Unregister(*(CApplicationManager **)a1, **(struct CProcess ***)(a1 + 8));
  }
  return result;
}
