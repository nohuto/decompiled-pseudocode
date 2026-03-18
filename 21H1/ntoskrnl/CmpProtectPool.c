/*
 * XREFs of CmpProtectPool @ 0x140322614
 * Callers:
 *     HvpFreeBin @ 0x1406ECAD4 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
