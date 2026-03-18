/*
 * XREFs of _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00F5C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C00F5C58 (_anonymous_namespace_--IsForegroundWindow.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00F6128 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  const struct tagWND *v3; // rcx
  struct tagWND *TopLevelHostForComponent; // rax
  const struct tagWND *TopLevelWindow; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  if ( (unsigned __int8)anonymous_namespace_::IsForegroundWindow() )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v3);
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
    if ( IsWindowActivateable(TopLevelWindow) )
    {
      *(_QWORD *)&v7 = TopLevelWindow;
      DWORD2(v7) = 7;
      *a2 = v7;
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
