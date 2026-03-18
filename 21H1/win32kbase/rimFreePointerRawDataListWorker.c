/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C0179F90
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C017A6E8 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      v5 = *(_QWORD *)(v4 + 8);
      if ( !v5 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
        v5 = *(_QWORD *)(v4 + 8);
      }
      Win32FreePool(v5, a2, a3);
      Win32FreePool(v4, v6, v7);
    }
    while ( v3 );
  }
}
