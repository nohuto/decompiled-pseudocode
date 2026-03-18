/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x140243CC0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x140242694 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140243DFC (KiAbOwnerComputeCpuPriorityKey.c)
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
