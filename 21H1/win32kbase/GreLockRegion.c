/*
 * XREFs of GreLockRegion @ 0x1C00D0030
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C00818B0 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLock(a1, 4) != 0;
}
