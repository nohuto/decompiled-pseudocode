/*
 * XREFs of Is_PostMessageSupported @ 0x1C01F67D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C0250230 )
    return qword_1C0250230();
  else
    return 3221225659LL;
}
