/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C0056338
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01CA7C8 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C0251E68 )
    return qword_1C0251E68();
  else
    return 3221225659LL;
}
