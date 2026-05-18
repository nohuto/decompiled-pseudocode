/*
 * XREFs of sub_1800DD890 @ 0x1800DD890
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 * Callees:
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall sub_1800DD890(_BYTE *a1)
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
