/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14063D2C0
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x140609510 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

char __fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
