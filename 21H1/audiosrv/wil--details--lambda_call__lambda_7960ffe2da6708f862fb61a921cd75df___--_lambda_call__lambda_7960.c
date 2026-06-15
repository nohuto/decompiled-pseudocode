/*
 * XREFs of wil::details::lambda_call__lambda_7960ffe2da6708f862fb61a921cd75df___::_lambda_call__lambda_7960ffe2da6708f862fb61a921cd75df___ @ 0x18011976C
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x180076F20 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_7960ffe2da6708f862fb61a921cd75df___::_lambda_call__lambda_7960ffe2da6708f862fb61a921cd75df___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockShared((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
