/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C005F37C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00AB430 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C0175C04 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 408);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 17, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 408);
    }
    *(_DWORD *)(a1 + 188) &= ~1u;
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  return result;
}
