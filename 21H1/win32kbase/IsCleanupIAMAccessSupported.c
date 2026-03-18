/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C0051CA4
 * Callers:
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C0258030 )
    return qword_1C0258030();
  else
    return 3221225659LL;
}
