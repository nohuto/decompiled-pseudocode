/*
 * XREFs of ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0198788
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C0192580 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01A1EC4 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29F4 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01A2EC0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerQFrame *__fastcall CTouchProcessor::GetPointerInfoNodeQFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v6 = *((_DWORD *)a3 + 2);
  if ( v6 >= *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    v6 = *((_DWORD *)a3 + 2);
  }
  v7 = *((_QWORD *)a2 + 18);
  v8 = 160LL * v6;
  if ( *(_DWORD *)(v8 + v7) != v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v6 = *((_DWORD *)a3 + 2);
    v7 = *((_QWORD *)a2 + 18);
  }
  return (const struct CPointerQFrame *)(v7 + 160LL * v6);
}
