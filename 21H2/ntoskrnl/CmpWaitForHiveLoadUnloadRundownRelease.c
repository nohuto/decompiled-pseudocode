/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x14091CA34
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  ExRundownCompleted(&CmpHiveLoadUnloadRundown);
}
