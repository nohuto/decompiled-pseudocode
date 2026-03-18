/*
 * XREFs of IsEditionRemoveFromMsdListSupported @ 0x1C01FDA28
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CFFD4 (ApiSetEditionRemoveFromMsdList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionRemoveFromMsdListSupported()
{
  if ( qword_1C0259128 )
    return qword_1C0259128();
  else
    return 3221225659LL;
}
