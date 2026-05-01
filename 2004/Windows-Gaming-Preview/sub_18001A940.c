/*
 * XREFs of sub_18001A940 @ 0x18001A940
 * Callers:
 *     sub_18001610C @ 0x18001610C (sub_18001610C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_18001A940(__int64 *a1, __int64 a2)
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_180049B10;
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = (__int64)result;
  }
  catch ( ... )
  {
    sub_1800161E4((__int64)off_180049B10, a2);
    throw;
  }
  return result;
}
