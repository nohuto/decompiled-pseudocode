/*
 * XREFs of _xxxDefPointerProc@16 @ 0x1A1EB4
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 *     _xxxPromotePointerToMouse@8 @ 0x15A76D (_xxxPromotePointerToMouse@8.c)
 */

int __fastcall xxxDefPointerProc(int a1, char *a2, unsigned __int16 a3, unsigned int a4)
{
  if ( a3 == 1 )
  {
    SetMiPPromotion(_gptiCurrent, a2);
  }
  else if ( !a4 || a4 == -1 )
  {
    xxxPromotePointerToMouse((unsigned int *)a3);
  }
  else
  {
    CTouchProcessor::PromotePointerDataToMouse(_gpTouchProcessor, a4, 0x10000000u);
  }
  return 0;
}
