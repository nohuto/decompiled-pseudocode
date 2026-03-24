/*
 * XREFs of CmpProtectPool @ 0x140363DB0
 * Callers:
 *     HvpFreeBin @ 0x140725BD0 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
