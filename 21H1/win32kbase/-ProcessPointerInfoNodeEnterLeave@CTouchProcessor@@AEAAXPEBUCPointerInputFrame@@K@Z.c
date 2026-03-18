/*
 * XREFs of ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C019DC74
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0193188 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x1C019E49C (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C019B35C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019D1D4 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C019EC74 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ProcessPointerInfoNodeEnterLeave(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rcx
  const struct CPointerInputFrame *v5; // rdi
  unsigned int *v6; // rsi
  __int64 v7; // rcx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v5 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  if ( v5 )
  {
    v6 = (unsigned int *)CTouchProcessor::LookupNode(v4, a2, 0);
    v7 = v6[45];
    if ( (v7 & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    CTouchProcessor::ProcessEnterLeave(this, v5, (struct CPointerInfoNode *)v6);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v5);
  }
}
