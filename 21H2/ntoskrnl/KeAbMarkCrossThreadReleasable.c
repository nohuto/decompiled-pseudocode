/*
 * XREFs of KeAbMarkCrossThreadReleasable @ 0x14039C41C
 * Callers:
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     KeAbCrossThreadDeleteDpcRoutine @ 0x140575C90 (KeAbCrossThreadDeleteDpcRoutine.c)
 * Callees:
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 */

char __fastcall KeAbMarkCrossThreadReleasable(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al

  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v2 = (__int64 *)(&KeGetCurrentThread()[1].Process + 12 * (unsigned __int8)((unsigned __int64)a2 >> 1));
  if ( *v2 >= 0 )
    KiAbForceProcessLockEntry(v2);
  result = *(_BYTE *)v2 | 1;
  *(_BYTE *)v2 = result;
  return result;
}
