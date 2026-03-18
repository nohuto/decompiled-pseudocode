/*
 * XREFs of ExWaitForCallBacks @ 0x14095183C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140504A90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405125F0 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405B11EC (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
