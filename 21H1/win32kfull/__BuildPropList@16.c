/*
 * XREFs of __BuildPropList@16 @ 0xCA16A
 * Callers:
 *     _NtUserBuildPropList@16 @ 0xCA094 (_NtUserBuildPropList@16.c)
 * Callees:
 *     <none>
 */

int __fastcall _BuildPropList(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // edx
  int v7; // edi
  int v8; // ecx
  int i; // ebx
  unsigned int v10; // eax
  int result; // eax
  int v12; // [esp+Ch] [ebp-8h]
  unsigned int v14; // [esp+1Ch] [ebp+8h]

  v4 = *(_DWORD *)(a1 + 80);
  v5 = 0;
  v14 = a2 + 8 * (a3 - 1);
  v6 = 0;
  v7 = 0;
  if ( v4 )
  {
    v8 = v4 + 8;
    v12 = 0;
    for ( i = *(_DWORD *)(v4 + 4); i; --i )
    {
      v10 = a2 + 8 * v7;
      if ( v14 < v10 )
      {
        v6 = -1073741789;
        v12 = -1073741789;
      }
      v7 = v14 < v10 ? 0 : v7;
      if ( (*(_BYTE *)(v8 + 6) & 1) == 0 )
      {
        *(_DWORD *)(a2 + 8 * v7) = *(_DWORD *)v8;
        *(_WORD *)(a2 + 8 * v7++ + 4) = *(_WORD *)(v8 + 4);
        v6 = v12;
        ++v5;
      }
      v8 += 8;
    }
  }
  result = v6;
  *a4 = v5;
  return result;
}
