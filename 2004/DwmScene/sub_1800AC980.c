/*
 * XREFs of sub_1800AC980 @ 0x1800AC980
 * Callers:
 *     sub_1800FB840 @ 0x1800FB840 (sub_1800FB840.c)
 * Callees:
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 */

__int64 __fastcall sub_1800AC980(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_1800AC570(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_1800AC348(a1, v3);
  return sub_180063B28((_QWORD *)(a1 + 448));
}
