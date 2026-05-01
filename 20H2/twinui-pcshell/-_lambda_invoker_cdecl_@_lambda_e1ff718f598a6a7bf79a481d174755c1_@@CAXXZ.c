/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ @ 0x1801425F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x180138990 (--_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall _lambda_e1ff718f598a6a7bf79a481d174755c1_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`AppCloseTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ViewManagerInteropTraceLogging::`scalar deleting destructor'((ViewManagerInteropTraceLogging *)Context, 0);
  }
}
