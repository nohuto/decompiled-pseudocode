/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019904C
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C018E528 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C0190E2C (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C0198FE0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C019A358 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(
        struct _KTHREAD **this,
        struct CPointerCaptureInfo *a2,
        __int64 a3,
        __int64 a4)
{
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *(_DWORD *)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    if ( !*((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 32) = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    if ( *((_DWORD *)a2 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  }
}
