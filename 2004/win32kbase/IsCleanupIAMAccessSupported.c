/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C005F7B4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C0252070 )
    return qword_1C0252070();
  else
    return 3221225659LL;
}
