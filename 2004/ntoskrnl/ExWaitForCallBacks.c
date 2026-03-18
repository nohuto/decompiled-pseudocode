/*
 * XREFs of ExWaitForCallBacks @ 0x14094BA7C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1405011C0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14050ECC0 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405AD68C (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
