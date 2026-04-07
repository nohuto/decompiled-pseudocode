/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CAXXZ @ 0x1800807D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18007DB50 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

void _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      wil::TraceLoggingProvider::`vector deleting destructor'((wil::TraceLoggingProvider *)Context, 0);
  }
}
