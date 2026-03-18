/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C0048810
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01D0748 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C0257E28 )
    return qword_1C0257E28();
  else
    return 3221225659LL;
}
