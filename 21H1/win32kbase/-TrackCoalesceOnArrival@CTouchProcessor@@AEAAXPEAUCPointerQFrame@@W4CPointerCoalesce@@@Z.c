/*
 * XREFs of ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01A2538
 * Callers:
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C019A9D0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01A2630 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x1C01A4B0C (WPP_RECORDER_SF_dqd.c)
 */

PDEVICE_OBJECT __fastcall CTouchProcessor::TrackCoalesceOnArrival(int a1, int *a2, int a3)
{
  int *v4; // rbx
  PDEVICE_OBJECT result; // rax
  int v6; // eax
  char v7; // [rsp+30h] [rbp-18h]

  v4 = a2;
  result = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = *((_QWORD *)a2 + 1);
      v6 = *a2;
      LOBYTE(a2) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dqd(
                                 a1,
                                 (_DWORD)a2,
                                 7,
                                 251,
                                 (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
                                 v6,
                                 v7,
                                 a3);
    }
  }
  v4[36] = a3;
  return result;
}
