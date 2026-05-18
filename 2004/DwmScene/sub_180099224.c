/*
 * XREFs of sub_180099224 @ 0x180099224
 * Callers:
 *     sub_18009A7F0 @ 0x18009A7F0 (sub_18009A7F0.c)
 * Callees:
 *     sub_180099004 @ 0x180099004 (sub_180099004.c)
 */

unsigned __int64 __fastcall sub_180099224(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7)
{
  __int64 v7; // rbx
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r10d
  int v14; // r8d
  unsigned __int64 result; // rax

  v7 = a1[1];
  if ( a1[2] == v7 )
    return sub_180099004(a1, (char *)v7, a2, a3, a4, a5, a6, a7);
  v10 = *a7;
  v11 = *a3;
  v12 = *a4;
  v13 = *a6;
  v14 = *a5;
  result = *a2;
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  *(_DWORD *)(v7 + 20) = v14;
  *(_DWORD *)(v7 + 24) = v13;
  *(_DWORD *)(v7 + 28) = v10;
  a1[1] += 32LL;
  return result;
}
