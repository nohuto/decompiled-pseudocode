/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C01F67FC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C0250130 )
    return qword_1C0250130();
  else
    return 3221225659LL;
}
