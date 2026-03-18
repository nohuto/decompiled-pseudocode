/*
 * XREFs of CmpProtectPool @ 0x14035FF24
 * Callers:
 *     HvpFreeBin @ 0x1407105B4 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
