/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00B60F8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01C8448 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C024FE68 )
    return qword_1C024FE68();
  else
    return 3221225659LL;
}
