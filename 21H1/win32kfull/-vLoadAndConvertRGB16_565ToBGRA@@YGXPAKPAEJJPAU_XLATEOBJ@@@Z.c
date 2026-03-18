/*
 * XREFs of ?vLoadAndConvertRGB16_565ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C626
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvertRGB16_565ToBGRA(
        unsigned int *a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        struct _XLATEOBJ *a5)
{
  unsigned int *v5; // esi
  unsigned __int8 *v6; // ebx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // edx
  unsigned int *v13; // [esp+10h] [ebp+8h]
  int v14; // [esp+18h] [ebp+10h]
  int v15; // [esp+1Ch] [ebp+14h]

  v5 = a1;
  v6 = &a2[2 * a3];
  if ( ((unsigned __int8)v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2;
    *a1 = ((v7 & 0x600 | (v7 >> 1) & 0xE) >> 1) | (8
                                                 * (v7 & 0xE01F | (4 * (v7 & 0x7E0 | (8 * (v7 & 0xF800 | 0xFFFF0000))))));
    v5 = a1 + 1;
    v8 = a4 - 1;
  }
  else
  {
    v8 = a4;
  }
  v15 = 0;
  v13 = v5;
  v14 = &v6[2 * (v8 & 0xFFFFFFFE)] >= v6 ? (2 * (v8 & 0xFFFFFFFE)) >> 2 : 0;
  if ( v14 )
  {
    do
    {
      v9 = *(_DWORD *)v6;
      v10 = (*(_DWORD *)v6 >> 1) & 0xE;
      v11 = (*(_DWORD *)v6 >> 1) & 0xE0000;
      v12 = *(_DWORD *)v6 & 0xE01F | (4 * (*(_DWORD *)v6 & 0x7E0 | (8 * (*(_DWORD *)v6 & 0xF800 | 0xFFFF0000))));
      v6 += 4;
      *v13 = ((v9 & 0x600 | (unsigned int)v10) >> 1) | (8 * v12);
      v13[1] = ((v9 & 0xF80000FF | ((v9 & 0x7E00000 | ((v9 & 0xE01F1FFF | ((v9 & 0x6000000 | (unsigned int)v11) >> 4)) >> 2)) >> 3)) >> 8) | 0xFF000000;
      v5 = v13 + 2;
      v13 += 2;
      ++v15;
    }
    while ( v15 != v14 );
  }
  if ( (v8 & 1) != 0 )
    *v5 = ((*(_WORD *)v6 & 0x600 | (*(unsigned __int16 *)v6 >> 1) & 0xEu) >> 1) | (8
                                                                                 * (*(_WORD *)v6 & 0xE01F | (4 * (*(_WORD *)v6 & 0x7E0 | (8 * (*(_WORD *)v6 & 0xF800 | 0xFFFF0000))))));
}
