/*
 * XREFs of _lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_ @ 0x1C00D09B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceInputMode @ 0x1C0048570 (RIMSetDeviceInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_1a5b9a3245c38924ef301777e78dc3ff_::_lambda_invoker_cdecl_(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx
  __int64 v6; // rcx

  v4 = *a2;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (unsigned int)RIMSetDeviceInputMode(i, v4, a3, a4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  }
}
