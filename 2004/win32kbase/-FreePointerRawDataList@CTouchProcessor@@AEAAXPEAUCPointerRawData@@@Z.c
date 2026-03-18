/*
 * XREFs of ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C018E9D4
 * Callers:
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C018BADC (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018E1FC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerRawDataList(
        struct _KTHREAD **this,
        struct CPointerRawData *a2,
        __int64 a3,
        __int64 a4)
{
  struct CPointerRawData *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx

  v4 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  while ( v4 )
  {
    v5 = (__int64)v4;
    v4 = (struct CPointerRawData *)*((_QWORD *)v4 + 3);
    v6 = *(_QWORD *)(v5 + 16);
    if ( !v6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
      v6 = *(_QWORD *)(v5 + 16);
    }
    Win32FreePool(v6);
    Win32FreePool(v5);
  }
}
