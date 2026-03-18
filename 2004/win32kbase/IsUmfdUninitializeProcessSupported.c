/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C005F7E0
 * Callers:
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C0251580 )
    return qword_1C0251580();
  else
    return 3221225659LL;
}
