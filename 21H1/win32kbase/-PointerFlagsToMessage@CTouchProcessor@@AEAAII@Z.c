/*
 * XREFs of ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C019BA40
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C01A43BC (WPP_RECORDER_SF_L.c)
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
    WPP_RECORDER_SF_L((_DWORD)this, a2, 7, 297, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids, v3);
  }
  return 0LL;
}
