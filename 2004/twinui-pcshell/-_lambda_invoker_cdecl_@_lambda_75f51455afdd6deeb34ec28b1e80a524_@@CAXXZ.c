/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ @ 0x180178330
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180099180 (--_ECustomShellHostTelemetry@@UEAAPEAXI@Z.c)
 */

void _lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(
         &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context) )
  {
    if ( !fPending )
      CustomShellHostTelemetry::`vector deleting destructor'((CustomShellHostTelemetry *)Context, 0);
  }
}
