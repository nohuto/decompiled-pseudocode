/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0012418
 * Callers:
 *     _lambda_18e42bef8aab6193ee3628fe412f6142_::_lambda_invoker_cdecl_ @ 0x1C000F1B0 (_lambda_18e42bef8aab6193ee3628fe412f6142_--_lambda_invoker_cdecl_.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C000F580 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     _lambda_beb7e60510a54e82b7f39bd19dd130e9_::_lambda_invoker_cdecl_ @ 0x1C000F630 (_lambda_beb7e60510a54e82b7f39bd19dd130e9_--_lambda_invoker_cdecl_.c)
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1C000F6CC (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     _lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_ @ 0x1C0012380 (_lambda_dc07bf9eeab06415d9a9c521953e95b1_--_lambda_invoker_cdecl_.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C002BBDC (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142B0 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     IsWindowHolographicForHitTest @ 0x1C004C870 (IsWindowHolographicForHitTest.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  bool result; // al
  char v2; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx

  result = 0;
  if ( a1 )
  {
    v2 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v2 & 0x10) != 0 && (v2 & 8) == 0 )
    {
      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
      if ( (unsigned int)IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf)
        || !(unsigned int)GetWindowCloakState(CompositeAppFrameWindowOrSelf) )
      {
        return 1;
      }
    }
  }
  return result;
}
