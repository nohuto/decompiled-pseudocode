/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x180138990
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ @ 0x180142460 (-_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ @ 0x1801425F0 (-_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ @ 0x1801A3900 (-_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7ab9639d2235ac39484be6f8e25fe51c_@@CAXXZ @ 0x180262B90 (-_lambda_invoker_cdecl_@_lambda_7ab9639d2235ac39484be6f8e25fe51c_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_b55becccc8b67eee49088d4c1be9735f_@@CAXXZ @ 0x180262BE0 (-_lambda_invoker_cdecl_@_lambda_b55becccc8b67eee49088d4c1be9735f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ @ 0x1802ADA90 (-_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ @ 0x1802CAB60 (-_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ @ 0x180356CD0 (-_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ @ 0x1803F2420 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ @ 0x18046B6C0 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801385B0 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
