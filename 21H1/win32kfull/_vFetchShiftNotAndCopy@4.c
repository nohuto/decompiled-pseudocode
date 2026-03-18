/*
 * XREFs of _vFetchShiftNotAndCopy@4 @ 0xEDCAD
 * Callers:
 *     ?vPatNotRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0x22E0EC (-vPatNotRect8@@YGXPAU_PATBLTFRAME@@@Z.c)
 *     ?vPatNotRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22E3F8 (-vPatNotRow8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall vFetchShiftNotAndCopy(int a1)
{
  _DWORD *v1; // edi
  int v2; // esi
  int v3; // ebx
  char v4; // cl
  unsigned int v5; // ebx
  char v6; // cl
  unsigned __int64 v7; // rax
  int v9; // ebx

  v1 = *(_DWORD **)a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 16);
LABEL_2:
  v4 = v3;
  v5 = v3 & 0xFFFFFFFC;
  v6 = 8 * (v4 & 3);
  for ( LODWORD(v7) = *(_DWORD *)(v2 + v5); ; LODWORD(v7) = HIDWORD(v7) )
  {
    HIDWORD(v7) = *(_DWORD *)(v2 + v5 + 4);
    LODWORD(v7) = ~(unsigned int)(v7 >> v6);
    *v1++ = v7;
    if ( (*(_DWORD *)(a1 + 24))-- == 1 )
      break;
    *(_DWORD *)(a1 + 8) += 4;
    v9 = *(_DWORD *)(a1 + 8);
    if ( v9 >= *(_DWORD *)(a1 + 12) )
    {
      v3 = v9 - *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 8) = v3;
      goto LABEL_2;
    }
    v5 = v9 & 0xFFFFFFFC;
  }
  return v7;
}
