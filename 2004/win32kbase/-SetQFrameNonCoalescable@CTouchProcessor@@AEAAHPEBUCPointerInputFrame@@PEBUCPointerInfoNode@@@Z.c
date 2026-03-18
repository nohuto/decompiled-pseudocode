/*
 * XREFs of ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019BD84
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019B930 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetQFrameNonCoalescable(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 result; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, 0LL, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2, (__int64)a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v14 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v14, v12, v13);
    v14 = *((unsigned int *)a3 + 2);
  }
  v15 = *((_QWORD *)a2 + 18);
  v16 = 160LL * (unsigned int)v14;
  if ( *(_DWORD *)(v16 + v15) != (_DWORD)v14 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v15, v13);
    LODWORD(v14) = *((_DWORD *)a3 + 2);
    v15 = *((_QWORD *)a2 + 18);
  }
  result = 1LL;
  *(_DWORD *)(160LL * (unsigned int)v14 + v15 + 140) &= ~1u;
  return result;
}
