/*
 * XREFs of ExWaitForCallBacks @ 0x14094F00C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140506610 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140514130 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405B2BEC (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
