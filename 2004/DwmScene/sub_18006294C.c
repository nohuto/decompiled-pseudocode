/*
 * XREFs of sub_18006294C @ 0x18006294C
 * Callers:
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_180062F8C @ 0x180062F8C (sub_180062F8C.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 *     sub_180073C38 @ 0x180073C38 (sub_180073C38.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_180090F40 @ 0x180090F40 (sub_180090F40.c)
 *     sub_180091018 @ 0x180091018 (sub_180091018.c)
 *     sub_1800910F0 @ 0x1800910F0 (sub_1800910F0.c)
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180093148 @ 0x180093148 (sub_180093148.c)
 *     sub_180093254 @ 0x180093254 (sub_180093254.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 *     sub_18009A09C @ 0x18009A09C (sub_18009A09C.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C89FC @ 0x1800C89FC (sub_1800C89FC.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     sub_1800CB4FC @ 0x1800CB4FC (sub_1800CB4FC.c)
 *     sub_1800CB604 @ 0x1800CB604 (sub_1800CB604.c)
 *     sub_1800CB68C @ 0x1800CB68C (sub_1800CB68C.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006294C(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
