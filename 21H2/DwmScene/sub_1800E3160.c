/*
 * XREFs of sub_1800E3160 @ 0x1800E3160
 * Callers:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall sub_1800E3160(_BYTE *a1)
{
  _QWORD *v2; // rax
  _BYTE *result; // rax

  memset(a1, 0, 0x78uLL);
  *((_QWORD *)a1 + 1) = 0LL;
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v2 = operator new(0xA8uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)a1 + 2) = v2;
  result = a1;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 29) = 0;
  return result;
}
