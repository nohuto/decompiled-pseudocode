/*
 * XREFs of _FastExpAA_CY @ 0x1C8D85
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 *     _Do1141 @ 0x1C6929 (_Do1141.c)
 *     _Do13 @ 0x1C6A4C (_Do13.c)
 *     _Do1319 @ 0x1C6AFC (_Do1319.c)
 *     _Do3121 @ 0x1C6BBB (_Do3121.c)
 *     _Do3263 @ 0x1C6CAE (_Do3263.c)
 *     _Do35 @ 0x1C6DD1 (_Do35.c)
 *     _Do5225 @ 0x1C6EA8 (_Do5225.c)
 *     _Do6251 @ 0x1C6FF5 (_Do6251.c)
 */

int __cdecl FastExpAA_CY(_DWORD *a1)
{
  bool v1; // zf
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  unsigned __int8 *v11; // esi
  int v12; // ecx
  int v13; // ebx
  unsigned __int8 *v14; // edi
  unsigned __int8 *v15; // eax
  int v16; // ebx
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // esi
  bool v19; // sf
  int v20; // eax
  unsigned __int16 *v21; // ecx
  int v22; // edx
  int v23; // ecx
  _BYTE *v24; // edi
  int v25; // eax
  int v26; // ecx
  unsigned __int8 *v27; // edx
  unsigned __int8 *v28; // edx
  __int16 v29; // ax
  unsigned __int8 *v30; // [esp-Ch] [ebp-1C0h]
  int v31; // [esp+Ch] [ebp-1A8h]
  int v32; // [esp+10h] [ebp-1A4h]
  int v33; // [esp+14h] [ebp-1A0h]
  int (__cdecl *v34)(int, int, int, int, int); // [esp+18h] [ebp-19Ch]
  int v35; // [esp+1Ch] [ebp-198h]
  size_t MaxCount; // [esp+20h] [ebp-194h]
  int v37; // [esp+24h] [ebp-190h]
  int v38; // [esp+28h] [ebp-18Ch]
  int v39; // [esp+2Ch] [ebp-188h]
  void (__cdecl *v40)(_DWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int); // [esp+30h] [ebp-184h]
  unsigned __int16 *v41; // [esp+34h] [ebp-180h]
  unsigned __int8 *v42; // [esp+38h] [ebp-17Ch]
  unsigned __int8 *v43; // [esp+3Ch] [ebp-178h]
  unsigned __int8 *v44; // [esp+40h] [ebp-174h]
  unsigned __int8 *v45; // [esp+44h] [ebp-170h]
  unsigned int v46; // [esp+48h] [ebp-16Ch]
  unsigned __int8 *v47; // [esp+48h] [ebp-16Ch]
  _DWORD v48[89]; // [esp+4Ch] [ebp-168h] BYREF

  v1 = a1[81] == 0;
  qmemcpy(v48, a1, sizeof(v48));
  if ( v1 )
    return v48[23];
  v3 = v48[47];
  v4 = v48[87];
  v35 = v48[88];
  v5 = *(_DWORD *)(v48[47] + 76);
  v6 = v48[86];
  **(_WORD **)(v48[47] + 72) += *(unsigned __int8 *)(v48[47] + 70);
  *(_WORD *)(v5 - 2) += *(unsigned __int8 *)(v3 + 71);
  v7 = v6 - v35 * *(unsigned __int8 *)(v3 + 70);
  v8 = v35 * *(unsigned __int8 *)(v3 + 71);
  v9 = v48[48];
  v32 = v7;
  v38 = v48[48];
  v41 = *(unsigned __int16 **)(v48[48] + 72);
  *(_WORD *)(*(_DWORD *)(v48[48] + 76) - 2) += *(unsigned __int8 *)(v48[48] + 71);
  v33 = v8 + v4;
  v10 = 2 * ((v48[2] & 4) == 0) + 1;
  MaxCount = v10;
  v11 = (unsigned __int8 *)(3 * v10 + *(_DWORD *)(v9 + 28));
  v12 = 6 * v10;
  v13 = 6 * v10 + v48[10];
  v14 = &v11[v13];
  v44 = &v11[v13 + v13];
  v43 = &v44[v13];
  v15 = &v44[v13 + v13];
  v16 = v13 - v12;
  v42 = v15;
  if ( (v48[2] & 4) != 0 )
  {
    v40 = (void (__cdecl *)(_DWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int))GraySharpenInput;
    v34 = GrayFastExpAA_CX;
  }
  else
  {
    v40 = (void (__cdecl *)(_DWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int))SharpenInput;
    v34 = (int (__cdecl *)(int, int, int, int, int))FastExpAA_CX;
  }
  v46 = *(unsigned __int8 *)(v38 + 68);
  GetFixupScan((int)v48, v43);
  if ( !v46 )
    v48[0] |= 0x20u;
  GetFixupScan((int)v48, v42);
  if ( v46 < 2 )
    v48[0] |= 0x20u;
  v48[81] += 9;
  v39 = -3;
  do
  {
    v45 = v44;
    v47 = v14;
    v17 = v42;
    v44 = v43;
    v43 = v42;
    v42 = v11;
    GetFixupScan((int)v48, v11);
    v30 = v11;
    v18 = v44;
    v40(0, v44, v44, v17, v30, v16);
    v19 = v39 + 1 < 0;
    v20 = ++v39;
    if ( !v19 )
    {
      v21 = v41++;
      v22 = *v21;
      v37 = v22;
      v23 = v22;
      if ( !v20 )
        v37 = *(unsigned __int8 *)(v38 + 70) + v22;
      v24 = (_BYTE *)v48[81];
      if ( v22 )
      {
        v25 = v48[23];
        while ( 1 )
        {
          v26 = v23 - 1;
          v31 = v26;
          if ( !v25 )
            return a1[23];
          switch ( v37 )
          {
            case 1:
              Do5225(v24, (int)v47, v45, v18, v16);
              break;
            case 2:
              if ( v26 == 1 )
                v18 = v47;
              Do13(v24, v18, v45, v16);
              break;
            case 3:
              if ( v26 != 1 )
              {
                if ( v26 == 2 )
                  v18 = v47;
LABEL_44:
                v28 = v18;
LABEL_45:
                Do35((unsigned int)v24, v28, v45, v16);
                break;
              }
              Do1141(v24, (int)v47, v45, v18, v16);
              break;
            case 4:
              switch ( v26 )
              {
                case 0:
                  goto LABEL_44;
                case 1:
                  Do3121((unsigned int)v24, v18, v45, v47, v16);
                  break;
                case 2:
                  Do3121((unsigned int)v24, v47, v45, v18, v16);
                  break;
                case 3:
                  v28 = v47;
                  goto LABEL_45;
              }
              break;
            case 5:
              switch ( v26 )
              {
                case 0:
                  v27 = v18;
                  goto LABEL_32;
                case 1:
                  Do6251((unsigned int)v24, v18, v45, v47, v16);
                  break;
                case 2:
                  Do3263(v24, (int)v47, v45, v18, v16);
                  break;
                case 3:
                  Do6251((unsigned int)v24, v47, v45, v18, v16);
                  break;
                case 4:
                  v27 = v47;
LABEL_32:
                  Do1319(v24, v27, v45, v16);
                  break;
              }
              break;
          }
          memcpy(&v24[-MaxCount], v24, MaxCount);
          memcpy(&v24[v16], &v24[v16 - MaxCount], MaxCount);
          v34(v48[47], (int)v24, v32, v33, v35);
          v29 = v48[0];
          if ( SLOBYTE(v48[0]) < 0 )
          {
            ((void (__cdecl *)(_DWORD *))v48[31])(v48);
            v29 = v48[0];
          }
          if ( (v29 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v48);
            LOBYTE(v29) = v48[0];
          }
          if ( (v29 & 0x10) != 0 )
          {
            MappingBGRF((unsigned __int8 *)v48[82], v48[83], v48[59], (unsigned __int8 *)v48[68]);
            v48[68] += v48[71];
            if ( v48[68] == v48[69] )
              v48[68] = v48[70];
          }
          ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v48[43])(
            v48,
            v48[84],
            v48[85],
            v48[21],
            v48[58],
            v48[61],
            v48[61] + v48[65],
            v48[66],
            v48[44]);
          v48[61] += v48[64];
          if ( v48[61] == v48[62] )
            v48[61] = v48[63];
          v48[21] += v48[25];
          v23 = v31;
          v25 = v48[23] - 1;
          v18 = v44;
          --v48[23];
          if ( !v31 )
            goto LABEL_62;
        }
      }
    }
    v25 = v48[23];
LABEL_62:
    v14 = v45;
    v11 = v47;
  }
  while ( v25 );
  return a1[23];
}
