/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C002D570
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C002D488 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01C4D54 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C0251428 )
    return qword_1C0251428();
  else
    return 3221225659LL;
}
