/*
 * XREFs of HMAssignmentUnlockWorker @ 0x1C0073448
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
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
