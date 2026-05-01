/*
 * XREFs of sub_180003C44 @ 0x180003C44
 * Callers:
 *     sub_180003C44 @ 0x180003C44 (sub_180003C44.c)
 *     sub_180003D50 @ 0x180003D50 (sub_180003D50.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_180003C44 @ 0x180003C44 (sub_180003C44.c)
 */

char __fastcall sub_180003C44(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // r10
  __int64 v12; // rax
  _BYTE *v13; // rbx
  char *v14; // rbx
  _BYTE *v15; // r8
  unsigned __int64 v16; // rcx
  size_t v17; // r10
  size_t v18; // rdi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_180003C44(a1, *(_QWORD *)(a2 + 16));
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(dword_18005A424);
      if ( !*(_DWORD *)(a1 + 72) )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 16);
      }
      v10 = -1LL;
      v11 = &a3[a4];
      v12 = -1LL;
      *(_OWORD *)(a1 + 96) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(v9 + 16);
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v11 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_BYTE **)(v9 + 8);
        do
          ++v10;
        while ( v15[v10] );
        v16 = v10 + 1;
        v17 = v11 - v14;
        v18 = v17;
        if ( v16 < v17 )
          v18 = v16;
        if ( v18 )
          sub_1800018E0(v14, v17, v15, v18);
        v14[v18 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
