/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140875C08
 * Callers:
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 * Callees:
 *     ExRundownCompleted @ 0x140251F40 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 */

void CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
}
