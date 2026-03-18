/*
 * XREFs of IsEditionRemoveFromMsdListSupported @ 0x1C01F7FF8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CA054 (ApiSetEditionRemoveFromMsdList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionRemoveFromMsdListSupported()
{
  if ( qword_1C0253168 )
    return qword_1C0253168();
  else
    return 3221225659LL;
}
