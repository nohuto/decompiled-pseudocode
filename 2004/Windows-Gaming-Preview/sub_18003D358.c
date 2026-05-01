/*
 * XREFs of sub_18003D358 @ 0x18003D358
 * Callers:
 *     sub_18003C760 @ 0x18003C760 (sub_18003C760.c)
 *     sub_18003D630 @ 0x18003D630 (sub_18003D630.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall sub_18003D358(_QWORD *a1, void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_18004DA60;
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
