/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C0072F60
 * Callers:
 *     UserThreadCallout @ 0x1C0072890 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C0252918 )
    return qword_1C0252918();
  else
    return 3221225659LL;
}
