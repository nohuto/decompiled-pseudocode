/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C00BF6BC
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 408);
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 17, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 408);
    }
    *(_DWORD *)(a1 + 188) &= ~1u;
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
}
