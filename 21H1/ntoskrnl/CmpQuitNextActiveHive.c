/*
 * XREFs of CmpQuitNextActiveHive @ 0x1407164D0
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1403691DC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086A030 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 204);
}
