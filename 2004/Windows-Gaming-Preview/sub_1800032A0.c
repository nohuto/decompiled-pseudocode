/*
 * XREFs of sub_1800032A0 @ 0x1800032A0
 * Callers:
 *     sub_180003690 @ 0x180003690 (sub_180003690.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 *     sub_180040240 @ 0x180040240 (sub_180040240.c)
 * Callees:
 *     sub_180003198 @ 0x180003198 (sub_180003198.c)
 */

__int64 __fastcall sub_1800032A0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_180003198(a1, a2, a3, a4, v5, retaddr);
}
