/*
 * XREFs of ??0?$span@PEAVCBaseExpression@@$0?0@gsl@@QEAA@PEAPEAVCBaseExpression@@_J@Z @ 0x18016E578
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall gsl::span<CBaseExpression *,-1>::span<CBaseExpression *,-1>(__int64 *a1, __int64 a2, __int64 a3)
{
  *a1 = a3;
  if ( a3 < 0 || (a1[1] = a2) == 0 && a3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1;
}
