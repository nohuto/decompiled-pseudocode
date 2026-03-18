/*
 * XREFs of _GetPenDoubleClickTime@0 @ 0x16FB93
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YGHXZ @ 0xAEF40 (-LoadPointerDevicePenSettings@@YGHXZ.c)
 */

struct tagDEVICECONFIG_SETTING *__stdcall GetPenDoubleClickTime()
{
  struct tagDEVICECONFIG_SETTING *result; // eax

  if ( !gPenMonitor && !LoadPointerDevicePenSettings() )
    return (struct tagDEVICECONFIG_SETTING *)_gdtDblClk;
  result = off_266020[8];
  if ( result == (struct tagDEVICECONFIG_SETTING *)-1 )
    return off_266020[7];
  return result;
}
