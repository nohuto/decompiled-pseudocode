/*
 * XREFs of sub_1800F9664 @ 0x1800F9664
 * Callers:
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 */

_DWORD *__fastcall sub_1800F9664(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = sub_180055F40(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_180155720;
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
