/*
 * XREFs of CmpProtectPool @ 0x1402513A4
 * Callers:
 *     HvpFreeBin @ 0x140621684 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4LL);
}
