/*
 * XREFs of _GreGetCharABCWidthsW@24 @ 0x866BE
 * Callers:
 *     _NtGdiGetCharABCWidthsW@24 @ 0x8636A (_NtGdiGetCharABCWidthsW@24.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z @ 0x881A8 (-vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, _DWORD *a6)
{
  int v6; // ebx
  unsigned int v7; // edi
  _DWORD *v8; // esi
  struct _GLYPHPOS *v9; // esi
  unsigned int v10; // edx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ecx
  unsigned __int16 *v13; // esi
  unsigned int v14; // eax
  int v15; // ecx
  struct _GLYPHPOS *v16; // eax
  _DWORD *v17; // ebx
  struct _GLYPHPOS *v18; // edi
  GLYPHDEF *pgdf; // esi
  int v20; // eax
  GLYPHDEF *v22; // esi
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  _DWORD *v26; // edx
  unsigned int v27; // [esp+Ch] [ebp-284h]
  struct _GLYPHPOS *v28; // [esp+Ch] [ebp-284h]
  int v29; // [esp+10h] [ebp-280h] BYREF
  unsigned __int16 v30[2]; // [esp+14h] [ebp-27Ch] BYREF
  _DWORD v31[2]; // [esp+18h] [ebp-278h] BYREF
  int v32; // [esp+20h] [ebp-270h] BYREF
  int v33; // [esp+24h] [ebp-26Ch]
  struct _GLYPHPOS *v34; // [esp+28h] [ebp-268h]
  unsigned __int16 *v35; // [esp+2Ch] [ebp-264h]
  int v36; // [esp+30h] [ebp-260h]
  _DWORD *v37; // [esp+34h] [ebp-25Ch]
  int v38; // [esp+38h] [ebp-258h]
  _DWORD v39[3]; // [esp+3Ch] [ebp-254h] BYREF
  struct _GLYPHPOS v40[32]; // [esp+48h] [ebp-248h] BYREF
  unsigned __int16 v41[34]; // [esp+248h] [ebp-48h] BYREF

  v6 = 0;
  v36 = a2;
  *(_DWORD *)v30 = a2;
  v35 = a4;
  v37 = a6;
  v32 = 0;
  v33 = 0;
  v38 = (int)a6;
  memset(v39, 0, sizeof(v39));
  XDCOBJ::vLock((XDCOBJ *)v39, a1);
  if ( v39[0] )
  {
    v7 = a3;
    if ( a3 )
    {
      v29 = 0;
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v29, (struct XDCOBJ *)v39, 0, 2 * ((a5 & 2) != 0) + 2) )
        GreAcquireSemaphore(*(_DWORD *)(v29 + 548));
      v8 = (_DWORD *)v29;
      if ( v29 )
      {
        if ( (*(_BYTE *)(v29 + 56) & 4) != 0 )
        {
          if ( v35 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v29, v35, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v29, v30, 1u);
            v36 = *(_DWORD *)v30;
          }
        }
        v32 = v8[168];
        v33 = v8[169];
        if ( (a5 & 3) != 1 || *(_DWORD *)(v8[17] + 2096) )
        {
          while ( 1 )
          {
            v9 = v40;
            v34 = v40;
            if ( v7 > 0x20 )
            {
              v10 = 32;
              *(_DWORD *)v30 = 32;
            }
            else
            {
              v10 = v7;
              *(_DWORD *)v30 = v7;
            }
            v11 = v35;
            v12 = 2 * v10;
            if ( v35 )
            {
              v35 = (unsigned __int16 *)((char *)v35 + v12);
            }
            else
            {
              v13 = v41;
              v27 = 0;
              v7 = a3;
              v14 = &v41[v12 / 2] < v41 ? 0 : v12 >> 1;
              if ( v14 )
              {
                v15 = v36;
                do
                {
                  *v13 = v15++;
                  ++v27;
                  ++v13;
                }
                while ( v27 < v14 );
                v36 = v15;
              }
              v9 = v34;
              v11 = v41;
            }
            if ( !RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v29, v10, v40, v11, (struct XDCOBJ *)v39, 0) )
              goto LABEL_28;
            v16 = &v40[*(_DWORD *)v30];
            v28 = v16;
            if ( (a5 & 1) != 0 )
              break;
            v31[0] = 0;
            v31[1] = 0;
            if ( v40 < v16 )
            {
              v17 = (_DWORD *)v38;
              v18 = &v40[*(_DWORD *)v30];
              do
              {
                pgdf = v9->pgdf;
                ((void (__stdcall *)(_DWORD, _DWORD))ltoef_c)((GLYPHDEF)pgdf[3].pgb, v31);
                mulff3_c(v31, v31, &v32);
                *v17 = eftof_c(v31);
                ltoef_c((char *)pgdf[4].pgb - (char *)pgdf[3].pgb, v31);
                mulff3_c(v31, v31, &v32);
                v17[1] = eftof_c(v31);
                ltoef_c((char *)pgdf[2].pgb - (char *)pgdf[4].pgb, v31);
                mulff3_c(v31, v31, &v32);
                v20 = eftof_c(v31);
                v9 = v34 + 1;
                v17[2] = v20;
                v17 += 3;
                v34 = v9;
              }
              while ( v9 < v18 );
              v38 = (int)v17;
LABEL_25:
              v7 = a3;
              v6 = 0;
            }
LABEL_26:
            v7 -= *(_DWORD *)v30;
            a3 = v7;
            if ( !v7 )
            {
              v6 = 1;
              goto LABEL_28;
            }
          }
          if ( v40 >= v16 )
            goto LABEL_26;
          do
          {
            v22 = v9->pgdf;
            v23 = ((_DWORD (__stdcall *)(_DWORD, _DWORD, _DWORD))lCvt)(v32, v33, (GLYPHDEF)v22[3].pgb);
            v24 = ((_DWORD (__stdcall *)(_DWORD, _DWORD, _DWORD))lCvt)(v32, v33, (GLYPHDEF)v22[4].pgb);
            v25 = ((_DWORD (__stdcall *)(_DWORD, _DWORD, _DWORD))lCvt)(v32, v33, (GLYPHDEF)v22[2].pgb);
            v26 = v37;
            v9 = v34 + 1;
            *v37 = v23;
            v26[1] = v24 - v23;
            v26[2] = v25 - v24;
            v37 = v26 + 3;
            v34 = v9;
          }
          while ( v9 < v28 );
          goto LABEL_25;
        }
      }
      else
      {
        EngSetLastError(6u);
      }
LABEL_28:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v39[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  return v6;
}
