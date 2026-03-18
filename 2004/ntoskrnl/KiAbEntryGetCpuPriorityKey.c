/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x14032A6EC
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140329FA4 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14032A828 (KiAbOwnerComputeCpuPriorityKey.c)
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
