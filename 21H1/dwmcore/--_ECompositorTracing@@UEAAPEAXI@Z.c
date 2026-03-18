/*
 * XREFs of ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x180159610
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CAXXZ @ 0x180253230 (-_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180159398 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CompositorTracing *__fastcall CompositorTracing::`vector deleting destructor'(CompositorTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
