/*
 * XREFs of ??_ECustomShellHostTelemetry@@UEAAPEAXI@Z @ 0x180099180
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ @ 0x180178330 (-_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ @ 0x1802285E0 (-_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CAXXZ @ 0x18022D2A0 (-_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180138750 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CustomShellHostTelemetry *__fastcall CustomShellHostTelemetry::`vector deleting destructor'(
        CustomShellHostTelemetry *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
