/*
 * XREFs of ExProtectPool @ 0x140362BC8
 * Callers:
 *     HvpProtectBin @ 0x140724980 (HvpProtectBin.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140362BE8 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
