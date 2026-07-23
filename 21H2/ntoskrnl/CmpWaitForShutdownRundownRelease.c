/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140875D68
 * Callers:
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
}
