/*
 * XREFs of Is_PostMessageSupported @ 0x1C01FDB30
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C02581F0 )
    return qword_1C02581F0();
  else
    return 3221225659LL;
}
