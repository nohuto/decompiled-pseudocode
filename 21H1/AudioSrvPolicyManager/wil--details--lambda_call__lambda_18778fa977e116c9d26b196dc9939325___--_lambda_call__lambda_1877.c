/*
 * XREFs of wil::details::lambda_call__lambda_18778fa977e116c9d26b196dc9939325___::_lambda_call__lambda_18778fa977e116c9d26b196dc9939325___ @ 0x18000D334
 * Callers:
 *     _CWindowsPolicyManager::InitAccessibilityAudioSettings_::_1_::dtor$0 @ 0x180040ACE (_CWindowsPolicyManager--InitAccessibilityAudioSettings_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$15 @ 0x18004153C (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$15.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$2 @ 0x180041A7F (_CApplicationManager--RpcGetProcess_--_1_--dtor$2.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$3 @ 0x1800425DE (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_18778fa977e116c9d26b196dc9939325___::_lambda_call__lambda_18778fa977e116c9d26b196dc9939325___(
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
