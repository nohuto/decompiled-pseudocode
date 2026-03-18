/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x140281560
 * Callers:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1405AFE80 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B01E4 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
