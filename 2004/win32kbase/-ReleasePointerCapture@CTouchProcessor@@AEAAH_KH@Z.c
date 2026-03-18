/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C0198FE0
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C0188210 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019904C (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 result; // rax

  v4 = a3;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  result = *(_QWORD *)(a2 + 40);
  if ( result )
  {
    CTouchProcessor::ReleasePointerCaptureInt(
      (CTouchProcessor *)this,
      (struct CPointerCaptureInfo *)(result + 32 + (v4 != 0 ? 0x88 : 0)));
    return 1LL;
  }
  return result;
}
