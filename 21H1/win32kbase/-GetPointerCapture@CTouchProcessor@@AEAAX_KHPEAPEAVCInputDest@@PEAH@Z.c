/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01969D4
 * Callers:
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0197840 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0198810 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0199E54 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C019B530 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C019B680 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019E760 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 * Callees:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C0196B2C (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        struct CInputDest **a4,
        int *a5)
{
  __int64 v9; // rax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            (CTouchProcessor *)this,
            (struct CPointerCaptureInfo *)(v9 + 32 + (a3 != 0 ? 0x88 : 0)),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
}
