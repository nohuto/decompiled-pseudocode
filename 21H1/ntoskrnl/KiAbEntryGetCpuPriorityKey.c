/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x1402DD91C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1402DD1D4 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402DD594 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402DDA58 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey(a1, a2, a3, a4);
  result = a1[-16 * a1[24] + 195];
  if ( result > 15 )
    return 15;
  return result;
}
