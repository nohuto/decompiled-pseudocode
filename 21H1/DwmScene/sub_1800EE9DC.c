/*
 * XREFs of sub_1800EE9DC @ 0x1800EE9DC
 * Callers:
 *     sub_1800EE7E8 @ 0x1800EE7E8 (sub_1800EE7E8.c)
 * Callees:
 *     sub_180061D44 @ 0x180061D44 (sub_180061D44.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800EE9DC(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x28uLL);
  v9[7] = **a5;
  v9[8] = 0;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180061D44(a1, a2, a3, v9 + 7, v9);
  return a2;
}
