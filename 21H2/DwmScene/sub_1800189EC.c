/*
 * XREFs of sub_1800189EC @ 0x1800189EC
 * Callers:
 *     sub_18001727C @ 0x18001727C (sub_18001727C.c)
 * Callees:
 *     sub_1800163F8 @ 0x1800163F8 (sub_1800163F8.c)
 *     sub_1800186C4 @ 0x1800186C4 (sub_1800186C4.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800189EC(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        float *a8)
{
  char *v12; // rax

  v12 = (char *)operator new(0x6C8uLL);
  if ( v12 )
    v12 = (char *)sub_1800163F8((__int64)v12, a2, a3, a4, a5, a6, a7, a8);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v12 + 16;
  *(_QWORD *)(a1 + 8) = v12;
  sub_1800186C4(a1, (__int64)(v12 + 16));
  return a1;
}
