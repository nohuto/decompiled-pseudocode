/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14063F230
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x140243164 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14024319C (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  LARGE_INTEGER v7; // rbx

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  v7 = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6);
  return v7;
}
