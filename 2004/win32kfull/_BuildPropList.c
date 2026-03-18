/*
 * XREFs of _BuildPropList @ 0x1C0109704
 * Callers:
 *     NtUserBuildPropList @ 0x1C01095E0 (NtUserBuildPropList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildPropList(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  int v9; // r11d
  unsigned int v10; // ebx
  int v11; // r8d
  __int64 v12; // rdx
  int i; // r9d
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx

  v4 = 0;
  v5 = 16LL * a3 + a2 - 16;
  v7 = *(_QWORD *)(a1 + 144);
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    v11 = *(_DWORD *)(v7 + 4);
    v12 = v7 + 8;
    for ( i = 0; v11; --v11 )
    {
      v14 = a2 + 16LL * v10;
      if ( v14 > v5 )
        i = -1073741789;
      v15 = 0;
      if ( v14 <= v5 )
        v15 = v10;
      v10 = v15;
      if ( (*(_BYTE *)(v12 + 10) & 1) == 0 )
      {
        v16 = 2LL * v15;
        v10 = v15 + 1;
        ++v9;
        *(_QWORD *)(a2 + 8 * v16) = *(_QWORD *)v12;
        *(_WORD *)(a2 + 8 * v16 + 8) = *(_WORD *)(v12 + 8);
      }
      v12 += 16LL;
    }
    v4 = i;
  }
  *a4 = v9;
  return v4;
}
