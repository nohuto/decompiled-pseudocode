/*
 * XREFs of wil::details::lambda_call__lambda_9a793a0e1d5688303fd7a11efc675423___::_lambda_call__lambda_9a793a0e1d5688303fd7a11efc675423___ @ 0x180118C00
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$5 @ 0x1800765A0 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_9a793a0e1d5688303fd7a11efc675423___::_lambda_call__lambda_9a793a0e1d5688303fd7a11efc675423___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
