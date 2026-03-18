/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x1408727CC
 * Callers:
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 * Callees:
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
}
