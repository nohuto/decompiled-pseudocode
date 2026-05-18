/*
 * XREFs of sub_1800494AC @ 0x1800494AC
 * Callers:
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 *     sub_18005B5DC @ 0x18005B5DC (sub_18005B5DC.c)
 *     sub_180062194 @ 0x180062194 (sub_180062194.c)
 *     sub_180064394 @ 0x180064394 (sub_180064394.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_1800A5F9C @ 0x1800A5F9C (sub_1800A5F9C.c)
 *     sub_1800F1A40 @ 0x1800F1A40 (sub_1800F1A40.c)
 *     sub_1800F2C38 @ 0x1800F2C38 (sub_1800F2C38.c)
 *     sub_1800F5438 @ 0x1800F5438 (sub_1800F5438.c)
 *     sub_1800F558C @ 0x1800F558C (sub_1800F558C.c)
 *     sub_1800F5A14 @ 0x1800F5A14 (sub_1800F5A14.c)
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 * Callees:
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 */

__int64 __fastcall sub_1800494AC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18005A894(a3, 0LL, a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
