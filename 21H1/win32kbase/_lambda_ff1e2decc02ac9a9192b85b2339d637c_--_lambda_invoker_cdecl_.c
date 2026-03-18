/*
 * XREFs of _lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_ @ 0x1C00D0A00
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C005F7C4 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_QWORD *)(a1 + 8);
  }
  if ( v2 == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
