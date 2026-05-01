/*
 * XREFs of ??_EImmersiveIconsLogging@@UEAAPEAXI@Z @ 0x180186080
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ @ 0x1803D1EC0 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180114100 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ImmersiveIconsLogging *__fastcall ImmersiveIconsLogging::`vector deleting destructor'(
        ImmersiveIconsLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
