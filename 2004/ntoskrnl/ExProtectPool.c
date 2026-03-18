/*
 * XREFs of ExProtectPool @ 0x14027031C
 * Callers:
 *     HvpProtectBin @ 0x140637BD0 (HvpProtectBin.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14027033C (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
