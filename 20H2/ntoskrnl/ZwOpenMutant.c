/*
 * XREFs of ZwOpenMutant @ 0x1403FA610
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x140780B58 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
