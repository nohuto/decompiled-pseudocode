/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4
 * Callers:
 *     NtUserNavigateFocus @ 0x1C0007B40 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0007CEC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C003C8CC (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     NtUserGetForegroundWindow @ 0x1C0065F40 (NtUserGetForegroundWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C00BED60 (_lambda_cb10391b5661d01073277e9ca426a942_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00F6128 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C020D830 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1)
{
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *result; // rax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  result = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( !result )
    return a1;
  return result;
}
