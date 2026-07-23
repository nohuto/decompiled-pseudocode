/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x14038D024
 * Callers:
 *     ExDisownFastResource @ 0x14038CD60 (ExDisownFastResource.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x14051BE90 (KeAbCrossThreadDeleteDpcRoutine.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 */

unsigned __int8 __fastcall KeAbMarkCrossThreadReleasable(__int64 a1, _KLOCK_ENTRY *a2)
{
  _KLOCK_ENTRY *v2; // rbx
  volatile unsigned __int8 result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = &KeGetCurrentThread()->LockEntries[(unsigned __int8)((unsigned __int64)a2 >> 1)];
  if ( (__int64)v2->LockState.LockState >= 0 )
    KiAbForceProcessLockEntry(&v2->TreeNode);
  result = v2->CrossThreadReleasableAndBusyByte | 1;
  v2->CrossThreadReleasableAndBusyByte = result;
  return result;
}
