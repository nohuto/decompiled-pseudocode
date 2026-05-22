/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CAXXZ @ 0x180086C50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064860 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
