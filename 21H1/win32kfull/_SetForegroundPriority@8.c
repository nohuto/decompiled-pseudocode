/*
 * XREFs of _SetForegroundPriority@8 @ 0x18543F
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z @ 0x170B43 (-AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __stdcall SetForegroundPriority(int a1, int a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  anonymous_namespace_::RequestPriorityUpdate(a1, a2 == 0);
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  KeLeaveCriticalRegion();
}
