/*
 * XREFs of ExProtectPool @ 0x1402F7EF8
 * Callers:
 *     HvpProtectBin @ 0x1406FC97C (HvpProtectBin.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402F7F18 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
