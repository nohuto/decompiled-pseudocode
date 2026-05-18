/*
 * XREFs of sub_180026D88 @ 0x180026D88
 * Callers:
 *     sub_180024034 @ 0x180024034 (sub_180024034.c)
 * Callees:
 *     sub_1800186C4 @ 0x1800186C4 (sub_1800186C4.c)
 *     sub_18002368C @ 0x18002368C (sub_18002368C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180026D88(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x6B0uLL);
  if ( v8 )
    v8 = (char *)sub_18002368C((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 16;
  *(_QWORD *)(a1 + 8) = v8;
  sub_1800186C4(a1, (__int64)(v8 + 16));
  return a1;
}
