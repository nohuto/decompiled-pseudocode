/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C006A200
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C006A118 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01C70D4 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0253428 )
    return qword_1C0253428();
  else
    return 3221225659LL;
}
