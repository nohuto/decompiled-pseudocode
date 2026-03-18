/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x1402D2E60
 * Callers:
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1405B4100 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4464 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v1; // ett

  _m_prefetchw(a1);
  v1 = *a1 & 0x7FFFFFFF;
  return v1 == _InterlockedCompareExchange(a1, v1 + 1, v1);
}
