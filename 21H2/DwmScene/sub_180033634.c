/*
 * XREFs of sub_180033634 @ 0x180033634
 * Callers:
 *     sub_180032F30 @ 0x180032F30 (sub_180032F30.c)
 *     sub_180033110 @ 0x180033110 (sub_180033110.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 * Callees:
 *     sub_18009ED70 @ 0x18009ED70 (sub_18009ED70.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180033634(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = sub_18009ED70((_DWORD)v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
