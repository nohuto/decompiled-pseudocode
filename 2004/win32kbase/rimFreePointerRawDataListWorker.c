/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C0173C60
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C01743B8 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
        v6 = *(_QWORD *)(v5 + 8);
      }
      Win32FreePool(v6);
      Win32FreePool(v5);
    }
    while ( v4 );
  }
}
