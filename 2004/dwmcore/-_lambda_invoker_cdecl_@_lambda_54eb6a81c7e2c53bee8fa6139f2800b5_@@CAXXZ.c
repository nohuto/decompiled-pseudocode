/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CAXXZ @ 0x1802507A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18014E1D0 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      CompositorTracing::`vector deleting destructor'((CompositorTracing *)Context, 0);
  }
}
