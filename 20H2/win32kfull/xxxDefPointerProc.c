/*
 * XREFs of xxxDefPointerProc @ 0x1C0243720
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C01E1A5C (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1C01F00A4 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, int a2, unsigned __int16 a3, unsigned __int64 a4)
{
  if ( a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000u);
  }
  else
  {
    CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, a4, 0x10000000u);
  }
  return 0LL;
}
