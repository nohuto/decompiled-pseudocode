/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJVEFLOAT@@3@Z @ 0x22507D
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ?bIs16@EFLOAT@@QBEHXZ @ 0x21C813 (-bIs16@EFLOAT@@QBEHXZ.c)
 */

int __thiscall ESTROBJ::vCharPos_H4(
        unsigned int *this,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int16 *v11; // edx
  int result; // eax
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // ebx
  int v19; // edi
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // esi
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  POINTL *p_ptl; // [esp+Ch] [ebp-34h]
  LONG y; // [esp+10h] [ebp-30h]
  int v31; // [esp+10h] [ebp-30h]
  int v32; // [esp+14h] [ebp-2Ch]
  int v33; // [esp+18h] [ebp-28h] BYREF
  int v34; // [esp+1Ch] [ebp-24h]
  struct _GLYPHPOS *v35; // [esp+20h] [ebp-20h]
  int v36; // [esp+24h] [ebp-1Ch]
  int v37; // [esp+28h] [ebp-18h]
  int v38; // [esp+2Ch] [ebp-14h]
  int v39; // [esp+30h] [ebp-10h]
  unsigned int *v40; // [esp+34h] [ebp-Ch]
  BOOL v41; // [esp+38h] [ebp-8h]
  BOOL v42; // [esp+3Ch] [ebp-4h]
  int v43; // [esp+50h] [ebp+10h]

  v40 = this;
  v35 = (struct _GLYPHPOS *)this[12];
  v41 = EFLOAT::bIs16((EFLOAT *)&a7);
  v42 = EFLOAT::bIs16((EFLOAT *)&a9);
  v34 = 0;
  v33 = 0;
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, *this, v35, v11, &v33, a2, (struct ESTROBJ *)this);
  if ( result )
  {
    if ( v33 )
    {
      v13 = this[12];
      this[48] |= 2u;
      this[7] = v13;
    }
    v14 = *(_DWORD *)a3;
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 340) & 0x40) != 0 )
    {
      v36 = -*(_DWORD *)(v14 + 324);
      v15 = -*(_DWORD *)(v14 + 320);
    }
    else
    {
      v36 = *(_DWORD *)(v14 + 320);
      v15 = *(_DWORD *)(v14 + 324);
    }
    v16 = 0;
    v43 = a4 + 8;
    v37 = v15;
    v17 = 0;
    v18 = 0;
    p_ptl = &v35->ptl;
    v39 = a5 + 8;
    v19 = 0;
    v35->ptl.x = v43 >> 4;
    v33 = 0;
    v35->ptl.y = v39 >> 4;
    v38 = 0;
    v32 = 0;
    v20 = 0;
    v35 = (struct _GLYPHPOS *)*v40;
    while ( 1 )
    {
      y = p_ptl[-1].y;
      if ( v19 + *(_DWORD *)(y + 12) < v34 )
        v34 = v19 + *(_DWORD *)(y + 12);
      if ( v19 + *(_DWORD *)(y + 16) > v17 )
        v33 = v19 + *(_DWORD *)(y + 16);
      if ( v16 + v36 > v20 )
        v20 = v16 + v36;
      if ( v16 + v37 < v18 )
        v18 = v16 + v37;
      v21 = *a6 + v38;
      v22 = a6[1] + v32;
      v38 = v21;
      v32 = v22;
      a6 += 2;
      if ( v41 )
      {
        v19 = 16 * v21;
      }
      else
      {
        v23 = lCvt(a7, a8, v21);
        v22 = v32;
        v19 = v23;
      }
      v16 = v42 ? 16 * v22 : lCvt(a9, a10, v22);
      v35 = (struct _GLYPHPOS *)((char *)v35 - 1);
      if ( !v35 )
        break;
      p_ptl += 2;
      p_ptl->x = (v19 + v43) >> 4;
      p_ptl->y = (v39 - v16) >> 4;
      v17 = v33;
    }
    v24 = v33;
    v31 = v20;
    v25 = v40;
    if ( v19 > v33 )
      v24 = v19;
    v26 = v34;
    v40[21] = v24;
    v25[15] = v19;
    v25[16] = -v16;
    v25[19] = v26;
    result = *(_DWORD *)(*(_DWORD *)a2 + 1020);
    if ( (*(_BYTE *)(result + 340) & 0x40) != 0 )
    {
      v27 = -v31;
      v28 = -v18;
    }
    else
    {
      v27 = v18;
      v28 = v31;
    }
    v25[20] = v28;
    v25[22] = v27;
    v25[48] |= 4u;
  }
  return result;
}
