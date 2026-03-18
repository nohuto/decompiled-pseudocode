/*
 * XREFs of ViUnlockContextPointer @ 0x1409C55EC
 * Callers:
 *     VfInsertContext @ 0x14059AC90 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059AE60 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
