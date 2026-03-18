/*
 * XREFs of _lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_ @ 0x1C00D0EC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceInputMode @ 0x1C00BB8BC (RIMSetDeviceInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = *a2;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (unsigned int)RIMSetDeviceInputMode(i, v2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  }
}
