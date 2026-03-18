/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x14087831C
 * Callers:
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 * Callees:
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
}
