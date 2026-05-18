/*
 * XREFs of ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180001D50
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800020D4 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ThrowResultException(wil *this, const struct wil::FailureInfo *a2)
{
  if ( wil::details::g_pfnThrowResultException )
    wil::details::g_pfnThrowResultException(this);
}
