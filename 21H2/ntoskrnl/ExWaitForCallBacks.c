/*
 * XREFs of ExWaitForCallBacks @ 0x14094F1DC
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140506590 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140514370 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405B2E1C (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
