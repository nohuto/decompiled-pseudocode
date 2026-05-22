/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_9dbe22df4b880a8e911c86b950d68f95_@@CAXXZ @ 0x18014E110
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064E30 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`HolographicDriverClientTrace::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
