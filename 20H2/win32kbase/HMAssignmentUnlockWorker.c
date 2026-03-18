/*
 * XREFs of HMAssignmentUnlockWorker @ 0x1C0054B18
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 */

__int64 __fastcall HMAssignmentUnlockWorker(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return HMUnlockObjectWorker(result);
  return result;
}
