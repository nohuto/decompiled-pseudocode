/*
 * XREFs of CmpQuitNextActiveHive @ 0x14072A36C
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BEA8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E5DC (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
