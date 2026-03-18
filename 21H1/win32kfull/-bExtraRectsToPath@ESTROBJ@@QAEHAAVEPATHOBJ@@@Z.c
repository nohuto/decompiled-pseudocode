/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ??0PFFREFOBJ@@QAE@XZ @ 0xF8309 (--0PFFREFOBJ@@QAE@XZ.c)
 *     ?bLinkedGlyphs@ESTROBJ@@QBEHXZ @ 0x1F8626 (-bLinkedGlyphs@ESTROBJ@@QBEHXZ.c)
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QAEPAVRFONT@@JAAVRFONTOBJ@@@Z @ 0x223A80 (-GetLinkedRfontOnIndex@ESTROBJ@@QAEPAVRFONT@@JAAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YGHAAVEPATHOBJ@@JJJJJJ@Z @ 0x223D8E (-bAddPgmToPath@@YGHAAVEPATHOBJ@@JJJJJJ@Z.c)
 */

BOOL __thiscall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v11; // eax
  struct _GLYPHPOS *v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  struct _GLYPHPOS *v15; // edx
  int v16; // eax
  unsigned int i; // edi
  struct RFONT *LinkedRfontOnIndex; // eax
  RFONTOBJ *v19; // eax
  unsigned int GlyphData; // eax
  bool v21; // zf
  LONG x; // eax
  LONG y; // ecx
  int v24; // eax
  int v25; // [esp+0h] [ebp-64h]
  int v26; // [esp+4h] [ebp-60h]
  int v27; // [esp+Ch] [ebp-58h]
  int v28; // [esp+10h] [ebp-54h]
  unsigned int v29; // [esp+14h] [ebp-50h]
  int v30; // [esp+18h] [ebp-4Ch]
  int v31; // [esp+1Ch] [ebp-48h]
  int v32; // [esp+20h] [ebp-44h]
  int v33; // [esp+24h] [ebp-40h]
  int v34; // [esp+28h] [ebp-3Ch]
  int v35; // [esp+2Ch] [ebp-38h]
  int v36; // [esp+30h] [ebp-34h]
  int v37; // [esp+34h] [ebp-30h]
  int v38; // [esp+38h] [ebp-2Ch]
  int v39; // [esp+3Ch] [ebp-28h]
  int v40; // [esp+40h] [ebp-24h]
  int v41; // [esp+44h] [ebp-20h]
  RFONTOBJ *v42; // [esp+48h] [ebp-1Ch]
  struct RFONT *v43; // [esp+4Ch] [ebp-18h] BYREF
  int v44; // [esp+50h] [ebp-14h]
  int v45; // [esp+54h] [ebp-10h]
  unsigned int v46; // [esp+58h] [ebp-Ch]
  int *v47; // [esp+5Ch] [ebp-8h]
  struct _GLYPHPOS *v48; // [esp+60h] [ebp-4h]

  v3 = (_DWORD *)**((_DWORD **)this + 11);
  v37 = 16 * v3[71];
  v38 = 16 * v3[72];
  v39 = 16 * v3[75];
  v40 = 16 * v3[76];
  v4 = 16 * v3[73];
  v5 = 16 * v3[74];
  v6 = 16 * v3[77];
  v36 = 16 * v3[78];
  v7 = *((_DWORD *)this + 48);
  v30 = v4;
  v32 = v5;
  v35 = v6;
  if ( (v7 & 8) != 0 )
  {
    v11 = *((_DWORD *)this + 8);
    v48 = (struct _GLYPHPOS *)*((_DWORD *)this + 12);
    v41 = v11;
    PFFREFOBJ::PFFREFOBJ((PFFREFOBJ *)&v43);
    v28 = 0;
    v13 = 0;
    v42 = 0;
    v46 = *(_DWORD *)this;
    v14 = v46;
    if ( v46 )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)this + 192) & 2) == 0 )
        {
          if ( ESTROBJ::bLinkedGlyphs(this) )
          {
            if ( v13 )
            {
              v19 = v42;
            }
            else
            {
              v16 = *(_DWORD *)this - v46;
              for ( i = v16 + 1;
                    i < *(_DWORD *)this
                 && *(_DWORD *)(*((_DWORD *)this + 45) + 4 * i) == *(_DWORD *)(*((_DWORD *)this + 45) + 4 * v16);
                    ++i )
              {
                ;
              }
              v13 = i - v16;
              LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v16, *((struct RFONTOBJ **)this + 11));
              v15 = v48;
              v43 = LinkedRfontOnIndex;
              v19 = (RFONTOBJ *)&v43;
              v42 = (RFONTOBJ *)&v43;
            }
            GlyphData = RFONTOBJ::cGetGlyphData(v19, v13, v15);
            v14 = GlyphData;
            if ( !GlyphData )
              goto LABEL_34;
            v13 -= GlyphData;
          }
          else
          {
            v14 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 11), v46, v15);
            if ( !v14 )
              goto LABEL_34;
          }
          v12 = v48;
        }
        v29 = 0;
        v41 += 2 * v14;
        v47 = (int *)(**((_DWORD **)this + 11) + 400);
        if ( v14 )
          break;
LABEL_32:
        v46 -= v14;
        if ( !v46 )
          goto LABEL_33;
      }
      while ( 1 )
      {
        v21 = (*((_DWORD *)this + 48) & 0x100) == 0;
        x = v12->ptl.x;
        y = v12->ptl.y;
        v44 = x;
        v45 = y;
        if ( v21 )
        {
          v44 = 16 * x;
          v45 = 16 * y;
        }
        v31 = lCvt(*v47, v47[1], (int)v12->pgdf[3].pgb);
        v33 = lCvt(v47[2], v47[3], (int)v48->pgdf[3].pgb);
        v34 = lCvt(*v47, v47[1], (char *)v48->pgdf[4].pgb - (char *)v48->pgdf[3].pgb);
        v24 = lCvt(v47[2], v47[3], (char *)v48->pgdf[4].pgb - (char *)v48->pgdf[3].pgb);
        v27 = v24;
        if ( (*((_BYTE *)this + 192) & 0x20) != 0 )
        {
          if ( !bAddPgmToPath(v44 + v31 + v37, a2, (struct EPATHOBJ *)(v45 + v33 + v38), v34, v24, v39, v40, v25, v26) )
            break;
          v24 = v27;
        }
        if ( *((char *)this + 192) < 0
          && !bAddPgmToPath(v44 + v31 + v30, a2, (struct EPATHOBJ *)(v45 + v32 + v33), v34, v24, v35, v36, v25, v26) )
        {
          break;
        }
        v12 = v48 + 1;
        ++v29;
        ++v48;
        if ( v29 >= v14 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_33:
      v28 = 1;
    }
LABEL_34:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v43);
    return v28;
  }
  else
  {
    v8 = (*((_DWORD *)this + 13) + 8) & 0xFFFFFFF0;
    v9 = (*((_DWORD *)this + 14) + 8) & 0xFFFFFFF0;
    if ( (v7 & 0x20) != 0 )
    {
      if ( !bAddPgmToPath(
              v37 + v8,
              a2,
              (struct EPATHOBJ *)(v9 + v38),
              *((_DWORD *)this + 17),
              *((_DWORD *)this + 18),
              v39,
              v40,
              v25,
              v26) )
        return 0;
      v4 = v30;
      v5 = v32;
    }
    return *((char *)this + 192) >= 0
        || bAddPgmToPath(
             v8 + v4,
             a2,
             (struct EPATHOBJ *)(v9 + v5),
             *((_DWORD *)this + 17),
             *((_DWORD *)this + 18),
             v35,
             v36,
             v25,
             v26);
  }
}
