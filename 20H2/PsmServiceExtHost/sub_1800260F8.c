/*
 * XREFs of sub_1800260F8 @ 0x1800260F8
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800260F8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        void *a8)
{
  __int64 result; // rax

  memset(a8, 0, 0x58uLL);
  *((_BYTE *)a8 + 40) = 3;
  *((_QWORD *)a8 + 1) = a1;
  sub_18001E380();
  *((_QWORD *)a8 + 6) = sub_180026040(a2);
  *((_QWORD *)a8 + 7) = sub_180026040(a4);
  sub_18000F390();
  *((_QWORD *)a8 + 9) = a5;
  *((_DWORD *)a8 + 20) = a6;
  result = a7;
  *((_QWORD *)a8 + 8) = a3;
  *((_DWORD *)a8 + 21) = a7;
  return result;
}
