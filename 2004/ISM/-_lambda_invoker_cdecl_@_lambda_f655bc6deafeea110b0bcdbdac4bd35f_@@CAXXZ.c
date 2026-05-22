/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CAXXZ @ 0x180090900
 * Callers:
 *     <none>
 * Callees:
 *     ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064860 (--_GISMTracing@@UEAAPEAXI@Z.c)
 */

void _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`RawInputProvidersContinuousTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      ISMTracing::`scalar deleting destructor'((ISMTracing *)Context, 0);
  }
}
