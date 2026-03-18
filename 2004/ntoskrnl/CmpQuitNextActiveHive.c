/*
 * XREFs of CmpQuitNextActiveHive @ 0x140718860
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140369B9C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086B380 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
