/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C01FDB5C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C02580F0 )
    return qword_1C02580F0();
  else
    return 3221225659LL;
}
