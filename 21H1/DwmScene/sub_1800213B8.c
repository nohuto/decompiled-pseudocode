/*
 * XREFs of sub_1800213B8 @ 0x1800213B8
 * Callers:
 *     sub_18001E2D4 @ 0x18001E2D4 (sub_18001E2D4.c)
 * Callees:
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 *     sub_18001DC8C @ 0x18001DC8C (sub_18001DC8C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800213B8(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x6D0uLL);
  if ( v8 )
    v8 = (char *)sub_18001DC8C((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 16;
  *(_QWORD *)(a1 + 8) = v8;
  sub_18001821C(a1, (__int64)(v8 + 16));
  return a1;
}
