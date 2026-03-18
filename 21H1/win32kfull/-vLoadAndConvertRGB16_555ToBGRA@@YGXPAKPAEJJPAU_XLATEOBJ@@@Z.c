/*
 * XREFs of ?vLoadAndConvertRGB16_555ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C48D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvertRGB16_555ToBGRA(
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
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx
  char v13; // [esp+18h] [ebp+10h]
  int v14; // [esp+1Ch] [ebp+14h]

  v5 = a1;
  v6 = &a2[2 * a3];
  if ( ((unsigned __int8)v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2;
    *a1 = (v7 >> 2) & 7 | (2
                         * (v7 & 0x380 | (4
                                        * (v7 & 0x1F | (2
                                                      * (v7 & 0x7000 | (4
                                                                      * (v7 & 0x3E0 | (8 * (v7 & 0xFC00 | 0xFFFF8000))))))))));
    v5 = a1 + 1;
    v8 = a4 - 1;
  }
  else
  {
    v8 = a4;
  }
  v14 = 0;
  v13 = v8;
  v9 = &v6[2 * (v8 & 0xFFFFFFFE)] >= v6 ? (2 * (v8 & 0xFFFFFFFE)) >> 2 : 0;
  if ( v9 )
  {
    do
    {
      v10 = *(_DWORD *)v6;
      v11 = *(_DWORD *)v6 & 0x3E0;
      v12 = 8 * (*(_DWORD *)v6 & 0x7C00 | 0xFFFF8000);
      v6 += 4;
      *v5 = (v10 >> 2) & 7 | (2 * (v10 & 0x380 | (4 * (v10 & 0x1F | (2 * (v10 & 0x7000 | (4 * (v11 | v12))))))));
      v5[1] = ((v10 & 0xFC00007F | ((v10 & 0x3E00000 | ((v10 & 0x70000000 | ((v10 & 0x1F0000 | ((v10 & 0x3800000 | (v10 >> 3) & 0x38000) >> 2)) >> 1)) >> 2)) >> 3)) >> 7) | 0xFF000000;
      v5 += 2;
      ++v14;
    }
    while ( v14 != v9 );
  }
  if ( (v13 & 1) != 0 )
    *v5 = (*(unsigned __int16 *)v6 >> 2) & 7 | (2
                                              * (*(_WORD *)v6 & 0x380 | (4
                                                                       * (*(_WORD *)v6 & 0x1F | (2
                                                                                               * (*(_WORD *)v6 & 0x7000 | (4 * (*(_WORD *)v6 & 0x3E0 | (8 * (*(_WORD *)v6 & 0xFC00 | 0xFFFF8000))))))))));
}
