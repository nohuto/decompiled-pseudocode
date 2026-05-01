/*
 * XREFs of sub_1800036B0 @ 0x1800036B0
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800036B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v9; // rcx
  __int64 result; // rax

  memset(a5, 0, 0x68uLL);
  *((_BYTE *)a5 + 40) = 4;
  *((_QWORD *)a5 + 1) = a1;
  sub_18001E380(v9);
  *((_QWORD *)a5 + 6) = sub_180026040(a2);
  *((_QWORD *)a5 + 7) = sub_180026040(a4);
  result = sub_18000F390();
  *((_QWORD *)a5 + 8) = a3;
  return result;
}
