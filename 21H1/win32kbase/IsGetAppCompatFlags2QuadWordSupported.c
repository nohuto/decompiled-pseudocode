/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C0067F50
 * Callers:
 *     UserThreadCallout @ 0x1C00672B0 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C02588D8 )
    return qword_1C02588D8();
  else
    return 3221225659LL;
}
