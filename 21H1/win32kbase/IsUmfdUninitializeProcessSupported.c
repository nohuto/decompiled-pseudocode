/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C000A84C
 * Callers:
 *     GdiProcessCallout @ 0x1C000AC40 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C0257540 )
    return qword_1C0257540();
  else
    return 3221225659LL;
}
