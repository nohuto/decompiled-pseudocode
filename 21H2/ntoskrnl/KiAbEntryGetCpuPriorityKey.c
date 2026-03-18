/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x14035A6C8
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1403591D8 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14035A7F8 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[19] & 1) == 0 )
    return a1[48];
  if ( !a1[17] )
    return KiAbOwnerComputeCpuPriorityKey(a1);
  result = a1[-96 * a1[16] - 1501];
  if ( result > 30 )
    return 30;
  return result;
}
