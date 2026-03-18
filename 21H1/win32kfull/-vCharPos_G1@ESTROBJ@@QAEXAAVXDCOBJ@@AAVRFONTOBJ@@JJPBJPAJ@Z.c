/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJPAJ@Z @ 0x2244C6
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

void __thiscall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        const int *a6,
        int *a7)
{
  _DWORD *v8; // esi
  int v9; // eax
  int *v10; // esi
  unsigned __int16 *v11; // eax
  struct _GLYPHPOS *v12; // esi
  int v13; // edi
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  char v17; // dl
  GLYPHDEF **p_pgdf; // eax
  int v19; // ebx
  GLYPHDEF *v20; // ecx
  GLYPHDEF v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  ESTROBJ *v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // [esp-8h] [ebp-48h]
  int v33; // [esp-8h] [ebp-48h]
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch] BYREF
  struct _GLYPHPOS *v36; // [esp+18h] [ebp-28h]
  int v37; // [esp+1Ch] [ebp-24h]
  int v38; // [esp+20h] [ebp-20h]
  int v39; // [esp+24h] [ebp-1Ch]
  int v40; // [esp+28h] [ebp-18h]
  ESTROBJ *v41; // [esp+2Ch] [ebp-14h]
  int v42; // [esp+30h] [ebp-10h]
  int v43; // [esp+34h] [ebp-Ch]
  int v44; // [esp+38h] [ebp-8h]
  int v45; // [esp+3Ch] [ebp-4h]

  v8 = *(_DWORD **)a3;
  v41 = this;
  v35 = 0;
  if ( !v8[160] )
  {
    v40 = v8[104];
    v9 = v8[105];
    v10 = v8 + 100;
    v39 = v9;
    v11 = (unsigned __int16 *)*((_DWORD *)this + 8);
    v42 = *v10++;
    v37 = 0;
    v35 = 0;
    v43 = *v10++;
    v44 = *v10;
    v45 = v10[1];
    v12 = (struct _GLYPHPOS *)*((_DWORD *)this + 12);
    v36 = v12;
    v12->ptl.x = a4;
    v12->ptl.y = a5;
    v13 = 0;
    v14 = 0;
    if ( RFONTOBJ::bGetGlyphMetricsPlus(a3, *(_DWORD *)this, v36, v11, &v35, a2, this) )
    {
      v15 = *((_DWORD *)this + 48);
      if ( v35 )
      {
        v16 = *((_DWORD *)this + 12);
        v15 |= 2u;
        *((_DWORD *)this + 48) = v15;
        *((_DWORD *)this + 7) = v16;
      }
      if ( (*(_BYTE *)(*(_DWORD *)a3 + 280) & 0x10) == 0 || (v15 & 0x1400) != 0 )
      {
        v17 = 0;
        v34 = 0;
      }
      else
      {
        v17 = 1;
        v34 = 1;
      }
      v38 = *(_DWORD *)this;
      p_pgdf = &v36->pgdf;
      v19 = 0;
      v35 = (int)&v36->pgdf;
      while ( 1 )
      {
        v20 = *p_pgdf;
        if ( v17 )
        {
          if ( v14 < v19 )
            v19 = v14;
          v21.pgb = v20[2].pgb;
        }
        else
        {
          if ( (int)v20[3].pgb + v14 < v19 )
            v19 = (int)v20[3].pgb + v14;
          v21.pgb = v20[4].pgb;
        }
        v22 = (int)v21.pgb + v14;
        if ( v22 > v13 )
          v13 = v22;
        v23 = *a6++ + v37;
        v37 = v23;
        if ( a7 )
          *a7++ = v23;
        v24 = lCvt(v40, v39, v23);
        v25 = v38-- == 1;
        v14 = v24;
        if ( v25 )
          break;
        v35 += 16;
        v26 = lCvt(v42, v43, v24);
        v32 = v45;
        *(_DWORD *)(v35 + 4) = a4 + v26;
        v27 = lCvt(v44, v32, v14);
        v28 = v35;
        v17 = v34;
        *(_DWORD *)(v35 + 8) = a5 + v27;
        p_pgdf = (GLYPHDEF **)v28;
      }
      v35 = v19;
      v29 = v41;
      if ( v24 > v13 )
        v13 = v24;
      v30 = lCvt(v42, v43, v24);
      v33 = v45;
      *((_DWORD *)v29 + 15) = v30;
      *((_DWORD *)v29 + 16) = lCvt(v44, v33, v14);
      *((_DWORD *)v29 + 19) = v35;
      *((_DWORD *)v29 + 21) = v13;
      *((_DWORD *)v29 + 20) = *(_DWORD *)(*(_DWORD *)a3 + 320);
      v31 = *(_DWORD *)(*(_DWORD *)a3 + 324);
      *((_DWORD *)v29 + 48) |= 4u;
      *((_DWORD *)v29 + 22) = v31;
    }
  }
}
