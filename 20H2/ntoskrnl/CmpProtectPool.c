/*
 * XREFs of CmpProtectPool @ 0x140330DB4
 * Callers:
 *     HvpFreeBin @ 0x1406E27F0 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
