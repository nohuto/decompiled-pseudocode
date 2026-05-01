/*
 * XREFs of sub_180065124 @ 0x180065124
 * Callers:
 *     sub_180064A68 @ 0x180064A68 (sub_180064A68.c)
 *     sub_180065124 @ 0x180065124 (sub_180065124.c)
 * Callees:
 *     sub_180065124 @ 0x180065124 (sub_180065124.c)
 */

char __fastcall sub_180065124(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rdi
  char *v14; // rdi
  _BYTE *v15; // r8
  rsize_t v16; // rcx
  rsize_t v17; // rbx

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_180065124(a1, *(_QWORD *)(a2 + 16), a3, a4);
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_1800B3660);
      if ( !*(_DWORD *)(a1 + 72) )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 16);
      }
      v10 = &a3[a4];
      *(_OWORD *)(a1 + 96) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(v9 + 16);
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v10 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_BYTE **)(v9 + 8);
        do
          ++v11;
        while ( v15[v11] );
        v16 = v10 - v14;
        v17 = v11 + 1;
        if ( v17 >= v16 )
          v17 = v16;
        memcpy_s(v14, v16, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
