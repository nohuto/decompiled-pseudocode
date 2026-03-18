/*
 * XREFs of GreUnlockSprite @ 0x1C0075E20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockSprite(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, a3);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    return PsLeavePriorityRegion(v4);
  }
  return result;
}
