/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x14091CA5C
 * Callers:
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  ExRundownCompleted(&CmpShutdownRundown);
}
