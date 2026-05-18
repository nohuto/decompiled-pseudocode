/*
 * XREFs of sub_180021438 @ 0x180021438
 * Callers:
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 * Callees:
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 *     sub_18001DD24 @ 0x18001DD24 (sub_18001DD24.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180021438(__int64 a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x250uLL);
  if ( v8 )
    v8 = (char *)sub_18001DD24((__int64)v8, a2, a3, a4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v8 + 16;
  *(_QWORD *)(a1 + 8) = v8;
  sub_18001821C(a1, (__int64)(v8 + 16));
  return a1;
}
