/*
 * XREFs of ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C019A354
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0187A6C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018A4E8 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x1C019C8AC (WPP_RECORDER_SF_dqd.c)
 */

PDEVICE_OBJECT __fastcall CTouchProcessor::TrackCoalesceOnReassign(int a1, int *a2, int a3)
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
                                 253,
                                 (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
                                 v6,
                                 v7,
                                 a3);
    }
  }
  v4[37] = a3;
  return result;
}
