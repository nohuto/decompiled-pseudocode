/*
 * XREFs of ExWaitForCallBacks @ 0x14094A6DC
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140500B70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14050E670 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1405ACF6C (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
