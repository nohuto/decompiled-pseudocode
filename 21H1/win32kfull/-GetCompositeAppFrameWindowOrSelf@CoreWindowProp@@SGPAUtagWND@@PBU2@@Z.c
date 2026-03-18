/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB848
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

struct tagWND *__thiscall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(void *this)
{
  struct tagWND *TopLevelHostForComponent; // eax
  int TopLevelWindow; // eax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  TopLevelWindow = _GetTopLevelWindow((int)TopLevelHostForComponent);
  if ( TopLevelWindow )
    return (struct tagWND *)TopLevelWindow;
  return (struct tagWND *)this;
}
