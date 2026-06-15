/*
 * XREFs of sub_180140070 @ 0x180140070
 * Callers:
 *     sub_18013ED04 @ 0x18013ED04 (sub_18013ED04.c)
 * Callees:
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_180140070(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *i; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned int v13; // edx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_180064CCC((_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 52), 0x20uLL);
    if ( !v8 )
      sub_1800B8610(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = &v8[4 * (unsigned int)(v9 - 1) + 1]; --v9 >= 0; i -= 4 )
    {
      i[2] = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_1800B8610(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 16);
  *(_DWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = sub_1800CF858(a1, v12);
    sub_180139FC0(a1, v13);
  }
  return v11;
}
