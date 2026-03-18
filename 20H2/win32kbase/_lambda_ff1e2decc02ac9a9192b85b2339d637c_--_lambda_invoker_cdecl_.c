/*
 * XREFs of _lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_ @ 0x1C00D11A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00A6EEC (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_ff1e2decc02ac9a9192b85b2339d637c_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v5 = *(_QWORD *)(a1 + 8);
  }
  if ( v5 == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1, a2, a3, a4);
}
