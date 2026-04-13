/*
 * XREFs of ?ThrowResultException@wil@@YGXABUFailureInfo@1@@Z @ 0x10003CC2
 * Callers:
 *     ?ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z @ 0x10003D78 (-ReportFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

void __thiscall wil::ThrowResultException(const struct wil::FailureInfo *ecx0)
{
  if ( wil::details::g_pfnThrowResultException )
    wil::details::g_pfnThrowResultException(ecx0);
}
