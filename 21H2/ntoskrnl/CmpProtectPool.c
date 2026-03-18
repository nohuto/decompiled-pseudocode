/*
 * XREFs of CmpProtectPool @ 0x14024DE3C
 * Callers:
 *     HvpFreeBin @ 0x1406D16F8 (HvpFreeBin.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140367008 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
