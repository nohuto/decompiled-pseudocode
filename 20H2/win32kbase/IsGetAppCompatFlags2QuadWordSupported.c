/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C004F120
 * Callers:
 *     UserThreadCallout @ 0x1C004EA50 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C0250918 )
    return qword_1C0250918();
  else
    return 3221225659LL;
}
