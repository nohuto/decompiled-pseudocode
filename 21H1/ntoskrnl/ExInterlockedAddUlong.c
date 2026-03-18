/*
 * XREFs of ExInterlockedAddUlong @ 0x140376BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x1402F3F84 (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x1402F4054 (ExpAcquireSpinLockDisabled.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  __int64 v3; // r9
  char v7; // al
  ULONG v8; // ebx

  v7 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock, *(__int64 *)&Increment, (__int64)Lock, v3);
  v8 = *Addend;
  *Addend += Increment;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v7);
  return v8;
}
