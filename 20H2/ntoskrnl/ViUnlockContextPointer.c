/*
 * XREFs of ViUnlockContextPointer @ 0x1409CB61C
 * Callers:
 *     VfInsertContext @ 0x14059EE20 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059EFF0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
