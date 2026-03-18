/*
 * XREFs of ZwCreateMutant @ 0x1403F4C20
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140A70450 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
