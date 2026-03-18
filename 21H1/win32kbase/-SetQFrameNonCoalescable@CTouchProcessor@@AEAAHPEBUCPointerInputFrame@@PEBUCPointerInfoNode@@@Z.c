/*
 * XREFs of ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01A1AE4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetQFrameNonCoalescable(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 >= *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    v7 = *((_DWORD *)a3 + 2);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = 160LL * v7;
  if ( *(_DWORD *)(v9 + v8) != v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    v7 = *((_DWORD *)a3 + 2);
    v8 = *((_QWORD *)a2 + 18);
  }
  result = 1LL;
  *(_DWORD *)(160LL * v7 + v8 + 140) &= ~1u;
  return result;
}
