/*
 * XREFs of IsEditionHandleAltTabCancelSupported @ 0x1C00612D0
 * Callers:
 *     ApiSetEditionHandleAltTabCancel @ 0x1C00611E8 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01CD054 (ApiSetEditionClientCharToWchar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionHandleAltTabCancelSupported()
{
  if ( qword_1C02593E8 )
    return qword_1C02593E8();
  else
    return 3221225659LL;
}
