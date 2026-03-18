/*
 * XREFs of Is_PostMessageSupported @ 0x1C01F8100
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C0252230 )
    return qword_1C0252230();
  else
    return 3221225659LL;
}
