/*
 * XREFs of SleepstudyHelper_AcquireComponentLock @ 0x14057ECF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_AcquireComponentLock(KSPIN_LOCK *a1, KIRQL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && a2 )
    *a2 = KeAcquireSpinLockRaiseToDpc(a1);
  else
    return (unsigned int)-1073741811;
  return v2;
}
