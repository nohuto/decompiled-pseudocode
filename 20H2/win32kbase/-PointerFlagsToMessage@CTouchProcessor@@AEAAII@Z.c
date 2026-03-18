/*
 * XREFs of ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0193820
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall CTouchProcessor::PointerFlagsToMessage(CTouchProcessor *this, int a2)
{
  char v3; // [rsp+28h] [rbp-10h]

  if ( (a2 & 0x10000) != 0 )
    return 582LL;
  if ( (a2 & 0x40000) != 0 )
    return 583LL;
  if ( (a2 & 0x20000) != 0 )
    return 581LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a2;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_L((_DWORD)this, a2, 7, 297, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, v3);
  }
  return 0LL;
}
