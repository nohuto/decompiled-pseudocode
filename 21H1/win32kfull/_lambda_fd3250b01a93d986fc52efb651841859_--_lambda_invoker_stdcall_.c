/*
 * XREFs of _lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_ @ 0xEF826
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB862 (-GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0xAD3E2 (_anonymous_namespace_--IsForegroundWindow.c)
 */

bool __stdcall lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_(_DWORD *a1, struct tagWND **a2)
{
  struct tagWND *CompositeAppFrameWindow; // edi

  *a2 = 0;
  a2[1] = 0;
  if ( anonymous_namespace_::IsForegroundWindow(a1) )
  {
    CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow();
    if ( IsWindowActivateable(CompositeAppFrameWindow) )
    {
      *a2 = CompositeAppFrameWindow;
      a2[1] = (struct tagWND *)7;
    }
  }
  return *a2 != 0;
}
