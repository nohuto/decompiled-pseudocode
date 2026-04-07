/*
 * XREFs of ?RethrowCaughtException@wil@@YAXXZ @ 0x18007F0D0
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800066A0 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::RethrowCaughtException(wil *this)
{
  if ( wil::details::g_pfnRethrow )
    wil::details::g_pfnRethrow();
}
