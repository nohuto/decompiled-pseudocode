/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x1405AFF00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
