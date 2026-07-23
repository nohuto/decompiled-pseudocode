/*
 * XREFs of CmpQuitNextActiveHive @ 0x14072A81C
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036C058 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E73C (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 204);
}
