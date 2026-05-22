/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CAXXZ @ 0x180069040
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064E30 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
