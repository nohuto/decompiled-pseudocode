/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C01F812C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C0252130 )
    return qword_1C0252130();
  else
    return 3221225659LL;
}
