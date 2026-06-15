/*
 * XREFs of sub_1800E7D50 @ 0x1800E7D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E7A9C @ 0x1800E7A9C (sub_1800E7A9C.c)
 */

__int64 __fastcall sub_1800E7D50(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF

  v4[1] = a2;
  v4[0] = off_1801555D8;
  v4[7] = v4;
  return sub_1800E7A9C(a1, (__int64)v4, a3);
}
