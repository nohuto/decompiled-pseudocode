/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C005170C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
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
      WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 17, (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 408);
    }
    *(_DWORD *)(a1 + 188) &= ~1u;
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  return result;
}
