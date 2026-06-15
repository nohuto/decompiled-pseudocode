/*
 * XREFs of sub_1800046D4 @ 0x1800046D4
 * Callers:
 *     sub_1800046D4 @ 0x1800046D4 (sub_1800046D4.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_1800046D4 @ 0x1800046D4 (sub_1800046D4.c)
 */

char __fastcall sub_1800046D4(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // r10
  __int64 v12; // rax
  _BYTE *v13; // rdi
  char *v14; // rdi
  _BYTE *v15; // r8
  size_t v16; // rcx
  size_t v17; // rbx

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_1800046D4(a1, *(_QWORD *)(a2 + 16));
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_18004F574);
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
        if ( v16 < v11 - v14 )
          v17 = v16;
        sub_180001FD0(v14, v11 - v14, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
