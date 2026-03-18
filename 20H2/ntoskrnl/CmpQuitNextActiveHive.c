/*
 * XREFs of CmpQuitNextActiveHive @ 0x140726820
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036BB7C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140870DD4 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
