/*
 * XREFs of CmpQuitNextActiveHive @ 0x14065C900
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1402001A8 (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 205);
}
