/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C00BFAD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C0250070 )
    return qword_1C0250070();
  else
    return 3221225659LL;
}
