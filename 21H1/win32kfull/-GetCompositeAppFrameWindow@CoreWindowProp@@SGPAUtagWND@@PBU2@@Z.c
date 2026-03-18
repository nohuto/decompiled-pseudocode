/*
 * XREFs of ?GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB862
 * Callers:
 *     _lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_ @ 0xEF826 (_lambda_fd3250b01a93d986fc52efb651841859_--_lambda_invoker_stdcall_.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

struct tagWND *__cdecl CoreWindowProp::GetCompositeAppFrameWindow()
{
  struct tagWND *TopLevelHostForComponent; // eax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent();
  return (struct tagWND *)_GetTopLevelWindow((int)TopLevelHostForComponent);
}
