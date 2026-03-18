/*
 * XREFs of PopPlLockPowerPlane @ 0x140578A30
 * Callers:
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopPlLockPowerPlane(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
