/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00BFB00
 * Callers:
 *     GdiProcessCallout @ 0x1C0017450 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C024F580 )
    return qword_1C024F580();
  else
    return 3221225659LL;
}
