/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x1408714D8
 * Callers:
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
}
