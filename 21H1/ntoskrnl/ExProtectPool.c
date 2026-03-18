/*
 * XREFs of ExProtectPool @ 0x1402DF9A4
 * Callers:
 *     HvpProtectBin @ 0x1406857A0 (HvpProtectBin.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x1402DF9C4 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
