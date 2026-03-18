/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C019ED3C
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0194228 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C0196B2C (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C019ECD0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01A0048 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(struct _KTHREAD **this, struct CPointerCaptureInfo *a2)
{
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *(_DWORD *)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    if ( !*((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 32) = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    if ( *((_DWORD *)a2 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  }
}
