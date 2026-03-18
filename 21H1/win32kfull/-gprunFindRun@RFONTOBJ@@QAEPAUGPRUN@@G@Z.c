/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__thiscall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  int v2; // eax
  _DWORD *v3; // ebx
  int v4; // edi
  _DWORD *v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // ecx
  struct GPRUN *result; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [esp-4h] [ebp-10h]
  int v21; // [esp-4h] [ebp-10h]
  int v22; // [esp-4h] [ebp-10h]
  int v23; // [esp-4h] [ebp-10h]
  int v24; // [esp-4h] [ebp-10h]
  int v25; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD **)(*(_DWORD *)this + 536);
  v4 = *(_DWORD *)(*(_DWORD *)this + 612);
  v5 = v3 + 2;
  if ( v4 )
  {
    if ( (unsigned int)a2 >= *v5 )
    {
      v10 = *(_DWORD *)(v2 + 616);
      switch ( *(_DWORD *)(v2 + 620) )
      {
        case 1:
          goto LABEL_43;
        case 2:
          goto LABEL_39;
        case 3:
          goto LABEL_35;
        case 4:
          goto LABEL_31;
        case 5:
          goto LABEL_27;
        case 6:
          goto LABEL_23;
        case 7:
          goto LABEL_19;
        case 8:
          goto LABEL_15;
        case 9:
          goto LABEL_11;
        case 0xA:
          goto LABEL_75;
        case 0xB:
          goto LABEL_71;
        case 0xC:
          goto LABEL_67;
        case 0xD:
          goto LABEL_63;
        case 0xE:
          goto LABEL_59;
        case 0xF:
          goto LABEL_55;
        case 0x10:
          v10 = *(_DWORD *)(v2 + 616) + ((unsigned int)a2 < v5[3 * v10] ? -16384 : 0x4000);
LABEL_55:
          if ( v10 > v4 || (v14 = 0x2000, (unsigned int)a2 < v5[3 * v10]) )
            v14 = -8192;
          v10 += v14;
LABEL_59:
          if ( v10 > v4 || (v15 = 4096, (unsigned int)a2 < v5[3 * v10]) )
            v15 = -4096;
          v10 += v15;
LABEL_63:
          if ( v10 > v4 || (v16 = 2048, (unsigned int)a2 < v5[3 * v10]) )
            v16 = -2048;
          v10 += v16;
LABEL_67:
          if ( v10 > v4 || (v17 = 1024, (unsigned int)a2 < v5[3 * v10]) )
            v17 = -1024;
          v10 += v17;
LABEL_71:
          if ( v10 > v4 || (v18 = 512, (unsigned int)a2 < v5[3 * v10]) )
            v18 = -512;
          v10 += v18;
LABEL_75:
          if ( v10 > v4 || (v19 = 256, (unsigned int)a2 < v5[3 * v10]) )
            v19 = -256;
          v10 += v19;
LABEL_11:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v11 = 128;
          else
            v11 = -128;
          v10 += v11;
LABEL_15:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v20 = 64;
          else
            v20 = -64;
          v10 += v20;
LABEL_19:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v21 = 32;
          else
            v21 = -32;
          v10 += v21;
LABEL_23:
          if ( v10 > v4 || (unsigned int)a2 < v5[3 * v10] )
            v22 = -16;
          else
            v22 = 16;
          v10 += v22;
LABEL_27:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v23 = 8;
          else
            v23 = -8;
          v10 += v23;
LABEL_31:
          if ( v10 > v4 || (unsigned int)a2 < v5[3 * v10] )
            v24 = -4;
          else
            v24 = 4;
          v10 += v24;
LABEL_35:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v25 = 2;
          else
            v25 = -2;
          v10 += v25;
LABEL_39:
          if ( v10 > v4 || (unsigned int)a2 < v5[3 * v10] )
            v12 = -1;
          else
            v12 = 1;
          v10 += v12;
LABEL_43:
          if ( v10 <= v4 && (unsigned int)a2 >= v5[3 * v10] )
            v13 = 0;
          else
            v13 = -1;
          v10 += v13;
          break;
        default:
          break;
      }
      result = (struct GPRUN *)&v5[3 * v10];
      if ( (unsigned int)a2 - *(_DWORD *)result < *((_DWORD *)result + 1) )
        return result;
    }
    return (struct GPRUN *)(v3 + 2);
  }
  v6 = 3 * *v3;
  v7 = &v3[v6 - 1];
  if ( a2 > (unsigned int)(*v7 + v3[v6] - 1) )
    return (struct GPRUN *)(v3 + 2);
  v8 = v3 + 2;
  if ( v5 > v7 )
    return (struct GPRUN *)(v3 + 2);
  while ( (unsigned int)a2 - *v8 >= v8[1] )
  {
    v8 += 3;
    if ( v8 > v7 )
      return (struct GPRUN *)(v3 + 2);
  }
  return (struct GPRUN *)v8;
}
