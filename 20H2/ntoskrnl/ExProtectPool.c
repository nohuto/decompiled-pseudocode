/*
 * XREFs of ExProtectPool @ 0x140203C94
 * Callers:
 *     HvpProtectBin @ 0x1405DA7D0 (HvpProtectBin.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
