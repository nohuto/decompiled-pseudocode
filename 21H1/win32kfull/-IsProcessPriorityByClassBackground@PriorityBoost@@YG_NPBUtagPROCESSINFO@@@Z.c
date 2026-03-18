/*
 * XREFs of ?IsProcessPriorityByClassBackground@PriorityBoost@@YG_NPBUtagPROCESSINFO@@@Z @ 0x18532F
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z @ 0x170B43 (-AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall PriorityBoost::IsProcessPriorityByClassBackground(_DWORD *ecx0)
{
  bool v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&`anonymous namespace'::boostLock, 0);
  v2 = (ecx0[116] & 0x60000) == 0;
  ExReleasePushLockSharedEx(&`anonymous namespace'::boostLock, 0);
  KeLeaveCriticalRegion();
  return v2;
}
