/*
 * XREFs of ??_GISMTracing@@UEAAPEAXI@Z @ 0x180064860
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CAXXZ @ 0x180068A70 (-_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CAXXZ @ 0x180086C50 (-_lambda_invoker_cdecl_@_lambda_ffe5d831185bf77c783480ebf240a46d_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CAXXZ @ 0x18008EC50 (-_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CAXXZ @ 0x180090900 (-_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_169e34f0547c812b04d058e5b6da2245_@@CAXXZ @ 0x1800C41B0 (-_lambda_invoker_cdecl_@_lambda_169e34f0547c812b04d058e5b6da2245_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_0bcba54505780f78856f588866e18ac8_@@CAXXZ @ 0x1800CC560 (-_lambda_invoker_cdecl_@_lambda_0bcba54505780f78856f588866e18ac8_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_9dbe22df4b880a8e911c86b950d68f95_@@CAXXZ @ 0x18014DC50 (-_lambda_invoker_cdecl_@_lambda_9dbe22df4b880a8e911c86b950d68f95_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fbd0f72fdb52924b760b88d2d8805198_@@CAXXZ @ 0x18014DCA0 (-_lambda_invoker_cdecl_@_lambda_fbd0f72fdb52924b760b88d2d8805198_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18006458C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ISMTracing *__fastcall ISMTracing::`scalar deleting destructor'(ISMTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
