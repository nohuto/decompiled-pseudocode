/*
 * XREFs of IsEditionRemoveFromMsdListSupported @ 0x1C01F66C8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01C7CD4 (ApiSetEditionRemoveFromMsdList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionRemoveFromMsdListSupported()
{
  if ( qword_1C0251168 )
    return qword_1C0251168();
  else
    return 3221225659LL;
}
