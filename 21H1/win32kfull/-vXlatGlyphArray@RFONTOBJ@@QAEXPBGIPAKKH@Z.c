/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QAEHK@Z @ 0x846D4 (-bInitCache@RFONTOBJ@@QAEHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     _GreGetGlyphIndicesW@24 @ 0x8564C (_GreGetGlyphIndicesW@24.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     _xInsertMetricsRFONTOBJ@12 @ 0x8715C (_xInsertMetricsRFONTOBJ@12.c)
 *     ?DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z @ 0x1D700B (-DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x240FBD (-bInsertMetricsPlusPath@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ?pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ @ 0x857A0 (-pfdg@PFEOBJ@@QAEPAU_FD_GLYPHSET@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z @ 0xC1064 (-bIsLinkedGlyph@RFONTOBJ@@QAEHG@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z @ 0xC1144 (-bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z.c)
 */

void __thiscall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // edx
  struct _FD_GLYPHSET *v8; // esi
  ULONG cRuns; // eax
  int v10; // ebx
  int v11; // eax
  unsigned __int16 *v12; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  unsigned int *v17; // eax
  unsigned int v18; // eax
  bool v19; // zf
  HGLYPH *phg; // eax
  unsigned int v21; // eax
  unsigned int *v22; // edx
  int v23; // eax
  unsigned int *v24; // ecx
  int v25; // ecx
  struct _FD_GLYPHSET *v26; // eax
  unsigned int v27; // ecx
  unsigned int *v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // edi
  unsigned int *v36; // edx
  const unsigned __int16 *v37; // eax
  int v38; // edx
  int v39; // [esp-4h] [ebp-58h]
  int v40; // [esp-4h] [ebp-58h]
  int v41; // [esp-4h] [ebp-58h]
  int v42; // [esp-4h] [ebp-58h]
  int v43; // [esp-4h] [ebp-58h]
  int v44; // [esp-4h] [ebp-58h]
  const unsigned __int16 *v45; // [esp+34h] [ebp-20h]
  int v46; // [esp+38h] [ebp-1Ch]
  int v47; // [esp+40h] [ebp-14h]
  int v48; // [esp+44h] [ebp-10h]
  int v49; // [esp+48h] [ebp-Ch]
  int v51; // [esp+50h] [ebp-4h]

  v46 = 0;
  v45 = 0;
  v7 = *(_DWORD *)this;
  v8 = *(struct _FD_GLYPHSET **)(*(_DWORD *)this + 532);
  if ( a6 )
  {
    v25 = *(_DWORD *)(*(_DWORD *)(v7 + 80) + 4);
    if ( v25 )
    {
      if ( (v25 & 1) == 0 )
      {
        v45 = *(const unsigned __int16 **)(*(_DWORD *)(v7 + 84) + 4 * ((v25 - 1) & 0xFFFFFFFE) + 132);
        a6 = (unsigned int *)v45;
        if ( v45 )
        {
          v26 = PFEOBJ::pfdg((void ***)&a6);
          if ( v26 )
          {
            v46 = 1;
            v8 = v26;
          }
        }
      }
    }
  }
  cRuns = v8->cRuns;
  if ( cRuns )
  {
    v10 = cRuns - 1;
    v48 = cRuns - 1;
    if ( a5 == 1 )
      v49 = -1;
    else
      v49 = *(_DWORD *)(*(_DWORD *)this + 520);
    if ( v10 > 0xFFFF )
    {
      v10 = 0xFFFF;
      v48 = 0xFFFF;
    }
    if ( (v10 & 0xF000) != 0 )
    {
      v11 = *((unsigned __int8 *)&acBits + (unsigned __int8)(v10 >> 12)) + 12;
    }
    else if ( (v10 & 0xF00) != 0 )
    {
      v11 = *((unsigned __int8 *)&acBits + BYTE1(v10)) + 8;
    }
    else if ( (v10 & 0xF0) != 0 )
    {
      v11 = *((unsigned __int8 *)&acBits + (unsigned __int8)(v10 >> 4)) + 4;
    }
    else
    {
      v11 = *((unsigned __int8 *)&acBits + v10);
    }
    v47 = (int)(&aiStart)[v11];
    v51 = v11;
    if ( a3 )
    {
      v12 = a2;
      a6 = a4;
      while ( 1 )
      {
        a4 = (unsigned int *)*v12;
        if ( (unsigned __int16)a4 < v8->awcrun[0].wcLow )
          break;
        v13 = v47;
        v12 = (unsigned __int16 *)(unsigned __int16)a4;
        switch ( v11 )
        {
          case 1:
            goto LABEL_39;
          case 2:
            goto LABEL_35;
          case 3:
            goto LABEL_31;
          case 4:
            goto LABEL_27;
          case 5:
            goto LABEL_23;
          case 6:
            goto LABEL_19;
          case 7:
            goto LABEL_15;
          case 8:
            goto LABEL_61;
          case 9:
            goto LABEL_57;
          case 10:
            goto LABEL_108;
          case 11:
            goto LABEL_104;
          case 12:
            goto LABEL_100;
          case 13:
            goto LABEL_96;
          case 14:
            goto LABEL_92;
          case 15:
            goto LABEL_88;
          case 16:
            v13 = v47 + ((unsigned __int16)a4 < v8->awcrun[v47].wcLow ? -16384 : 0x4000);
LABEL_88:
            if ( v13 > v48 || (v29 = 0x2000, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v29 = -8192;
            v13 += v29;
LABEL_92:
            if ( v13 > v48 || (v30 = 4096, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v30 = -4096;
            v13 += v30;
LABEL_96:
            if ( v13 > v48 || (v31 = 2048, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v31 = -2048;
            v13 += v31;
LABEL_100:
            if ( v13 > v48 || (v32 = 1024, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v32 = -1024;
            v13 += v32;
LABEL_104:
            if ( v13 > v48 || (v33 = 512, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v33 = -512;
            v13 += v33;
LABEL_108:
            if ( v13 > v48 || (v34 = 256, (unsigned __int16)a4 < v8->awcrun[v13].wcLow) )
              v34 = -256;
            v13 += v34;
LABEL_57:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v23 = 128;
            else
              v23 = -128;
            v13 += v23;
LABEL_61:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v44 = 64;
            else
              v44 = -64;
            v13 += v44;
LABEL_15:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v39 = 32;
            else
              v39 = -32;
            v13 += v39;
LABEL_19:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v40 = 16;
            else
              v40 = -16;
            v13 += v40;
LABEL_23:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v41 = 8;
            else
              v41 = -8;
            v13 += v41;
LABEL_27:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v42 = 4;
            else
              v42 = -4;
            v13 += v42;
LABEL_31:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v43 = 2;
            else
              v43 = -2;
            v13 += v43;
LABEL_35:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v14 = 1;
            else
              v14 = -1;
            v13 += v14;
LABEL_39:
            if ( v13 <= v48 && (unsigned __int16)a4 >= v8->awcrun[v13].wcLow )
              v15 = 0;
            else
              v15 = -1;
            v13 += v15;
            v12 = a2;
            break;
          default:
            break;
        }
        v16 = (unsigned __int16)a4 - v8->awcrun[v13].wcLow;
        if ( v16 < v8->awcrun[v13].cGlyphs )
        {
          if ( v8->awcrun[v13].phg )
          {
            while ( 1 )
            {
              phg = v8->awcrun[v13].phg;
              a2 = ++v12;
              v21 = phg[v16];
              v22 = a6;
              *a6 = v21;
              v19 = a3-- == 1;
              a6 = v22 + 1;
              if ( v19 )
                break;
              v16 = *v12 - v8->awcrun[v13].wcLow;
              if ( v16 < 0 || v16 >= v8->awcrun[v13].cGlyphs )
                goto LABEL_54;
            }
          }
          else
          {
            LOWORD(v35) = (_WORD)a4;
            while ( 1 )
            {
              v36 = a6;
              *a6 = (unsigned __int16)v35;
              v37 = a2 + 1;
              a6 = v36 + 1;
              v19 = a3-- == 1;
              ++a2;
              if ( v19 )
                break;
              v35 = *v37;
              v38 = v35 - v8->awcrun[v13].wcLow;
              if ( v38 < 0 || v38 >= v8->awcrun[v13].cGlyphs )
              {
                v12 = a2;
                goto LABEL_54;
              }
            }
          }
          goto LABEL_48;
        }
        if ( a5 == 2 || RFONTOBJ::bIsLinkedGlyph(this, (unsigned __int16)a4) || RFONTOBJ::bIsSystemTTGlyph(this, *v12) )
          *(_DWORD *)(*(_DWORD *)this + 708) |= 0x40u;
        v17 = a6;
        a2 = ++v12;
        *a6 = v49;
        a6 = v17 + 1;
        v18 = --a3;
LABEL_47:
        v19 = v18 == 0;
        v11 = v51;
        if ( v19 )
          goto LABEL_48;
      }
      v24 = a6;
      while ( 1 )
      {
        ++v12;
        *v24++ = v49;
        v19 = a3-- == 1;
        a6 = v24;
        a2 = v12;
        if ( v19 )
          break;
        if ( *v12 >= v8->awcrun[0].wcLow )
        {
LABEL_54:
          v18 = a3;
          goto LABEL_47;
        }
      }
    }
LABEL_48:
    if ( v46 )
    {
      a2 = (unsigned __int16 *)v45;
      PFEOBJ::vFreepfdg((int **)&a2);
    }
  }
  else
  {
    v27 = a3;
    if ( a3 )
    {
      v28 = a4;
      do
      {
        *v28++ = *(_DWORD *)(*(_DWORD *)this + 520);
        --v27;
      }
      while ( v27 );
    }
  }
}
