/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x1405B5430
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140303A34 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x140303B04 (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  __int64 v3; // r9
  char v7; // al
  LARGE_INTEGER v8; // rbx

  v7 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, Increment.QuadPart, (__int64)Lock, v3);
  v8 = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v7);
  return v8;
}
