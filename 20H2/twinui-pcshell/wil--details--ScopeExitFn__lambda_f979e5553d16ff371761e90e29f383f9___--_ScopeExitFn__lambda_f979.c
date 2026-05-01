/*
 * XREFs of wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___ @ 0x18040C580
 * Callers:
 *     _WindowArrangementView::CommitPlaceModeTap_::_1_::dtor$0 @ 0x18040D1EA (_WindowArrangementView--CommitPlaceModeTap_--_1_--dtor$0.c)
 *     _WindowArrangementView::EndDrag_::_1_::dtor$0 @ 0x18040D660 (_WindowArrangementView--EndDrag_--_1_--dtor$0.c)
 * Callees:
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18040D080 (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18040DCB0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040FF60 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    WindowArrangementView::Hide((WindowArrangementView *)(*(_QWORD *)a1 + 24LL), 1);
    WindowArrangementView::Cleanup(*(WindowArrangementView **)a1);
    return TabletModeTelemetry::TMAppArrange::Stop(*(_QWORD *)a1 + 328LL, **((unsigned int **)a1 + 1));
  }
  return result;
}
