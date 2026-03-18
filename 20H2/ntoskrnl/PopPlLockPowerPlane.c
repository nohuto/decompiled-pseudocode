/*
 * XREFs of PopPlLockPowerPlane @ 0x14057CAA0
 * Callers:
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall PopPlLockPowerPlane(__int64 a1)
{
  KIRQL result; // al

  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
