/*
 * XREFs of _GreGetCharWidthW@24 @ 0xC0C72
 * Callers:
 *     _NtGdiGetCharWidthW@24 @ 0xC0B10 (_NtGdiGetCharWidthW@24.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z @ 0x881A8 (-vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z.c)
 *     ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8 (-lOverhang@RFONTOBJ@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _fxtoef_c@8 @ 0xEEE93 (_fxtoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __fastcall GreGetCharWidthW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned __int16 *v10; // ecx
  unsigned __int16 *v11; // ebx
  unsigned int v12; // eax
  signed int v13; // esi
  unsigned __int16 *v14; // eax
  signed int v15; // ebx
  GLYPHDEF **v16; // edi
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // edx
  _WORD *v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  signed int v24; // edi
  GLYPHDEF **p_pgdf; // ebx
  _DWORD *v26; // esi
  int v27; // [esp+Ch] [ebp-28Ch] BYREF
  int v28; // [esp+10h] [ebp-288h]
  unsigned __int16 v29[2]; // [esp+14h] [ebp-284h] BYREF
  _DWORD *v30; // [esp+18h] [ebp-280h]
  unsigned int v31; // [esp+1Ch] [ebp-27Ch]
  unsigned __int16 *v32; // [esp+20h] [ebp-278h]
  int v33; // [esp+24h] [ebp-274h] BYREF
  int v34; // [esp+28h] [ebp-270h]
  unsigned int v35; // [esp+2Ch] [ebp-26Ch]
  unsigned int v36; // [esp+30h] [ebp-268h]
  int v37; // [esp+34h] [ebp-264h]
  unsigned __int16 *v38; // [esp+38h] [ebp-260h]
  _DWORD v39[2]; // [esp+3Ch] [ebp-25Ch] BYREF
  _DWORD v40[3]; // [esp+44h] [ebp-254h] BYREF
  struct _GLYPHPOS v41; // [esp+50h] [ebp-248h] BYREF
  _BYTE v42[68]; // [esp+250h] [ebp-48h] BYREF

  v6 = 0;
  *(_DWORD *)v29 = a2;
  v38 = a4;
  v30 = a6;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  memset(v40, 0, sizeof(v40));
  XDCOBJ::vLock((XDCOBJ *)v40, a1);
  if ( v40[0] )
  {
    if ( a6 )
    {
      v27 = 0;
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v27, (struct XDCOBJ *)v40, 0, 2 * ((a5 & 8) != 0) + 2) )
        GreAcquireSemaphore(*(_DWORD *)(v27 + 548));
      v7 = v27;
      if ( v27 )
      {
        if ( (*(_BYTE *)(v27 + 56) & 4) != 0 )
        {
          if ( a4 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v27, a4, a3);
          else
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v27, v29, 1u);
        }
        v33 = *(_DWORD *)(v7 + 672);
        v34 = *(_DWORD *)(v7 + 676);
        v37 = 0;
        if ( (a5 & 1) != 0 )
          v37 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v27);
        v8 = *(_DWORD *)v29;
        if ( a4 )
        {
          v9 = 0;
        }
        else
        {
          v9 = *(_DWORD *)v29;
          v31 = *(_DWORD *)v29;
        }
        v10 = v38;
        v11 = a4 != 0 ? v38 : 0;
        v32 = v11;
        v36 = a3 - 1;
        while ( 1 )
        {
          if ( v10 )
          {
            v12 = v11 - v10;
            if ( v12 > v36 )
              goto LABEL_26;
            v13 = a3 - v12;
            v28 = a3 - v12;
            if ( a3 - v12 >= 0x20 )
            {
              v13 = 32;
              v28 = 32;
            }
            v14 = v11;
          }
          else
          {
            if ( v9 - v8 > v36 )
            {
LABEL_26:
              v6 = 1;
              goto LABEL_27;
            }
            v13 = a3 + v8 - v9;
            v28 = v13;
            if ( (unsigned int)v13 >= 0x20 )
            {
              v13 = 32;
              v28 = 32;
            }
            v35 = v13 + v9;
            v21 = v42;
            v22 = v9;
            if ( v9 < v13 + v9 )
            {
              v23 = v35;
              do
                *v21++ = v22++;
              while ( v22 < v23 );
            }
            v14 = (unsigned __int16 *)v42;
          }
          if ( !RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v27, v13, &v41, v14, (struct XDCOBJ *)v40, 0) )
            goto LABEL_27;
          if ( (a5 & 2) != 0 )
            break;
          v39[0] = 0;
          v39[1] = 0;
          if ( v13 > 0 )
          {
            v24 = v13;
            p_pgdf = &v41.pgdf;
            v26 = v30;
            do
            {
              ((void (__stdcall *)(_DWORD, _DWORD))fxtoef_c)((GLYPHDEF)(*p_pgdf)[2].pgb, v39);
              mulff3_c(v39, v39, &v33);
              *v26 = eftof_c(v39);
              p_pgdf += 4;
              ++v26;
              --v24;
            }
            while ( v24 );
            v30 = v26;
LABEL_22:
            v11 = v32;
            v6 = 0;
            v13 = v28;
          }
LABEL_23:
          v10 = v38;
          v9 = v31;
          if ( v38 )
          {
            v11 += (unsigned __int16)v13;
            v32 = v11;
          }
          else
          {
            v9 = v13 + v31;
            v31 += v13;
          }
          v8 = *(_DWORD *)v29;
        }
        if ( v13 <= 0 )
          goto LABEL_23;
        v15 = v13;
        v16 = &v41.pgdf;
        v17 = v37;
        do
        {
          v18 = lCvt(v33, v34, (char *)(*v16)[2].pgb + v17);
          v19 = v30;
          v16 += 4;
          *v30 = v18;
          v30 = v19 + 1;
          --v15;
        }
        while ( v15 );
        goto LABEL_22;
      }
      EngSetLastError(6u);
LABEL_27:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v40[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  return v6;
}
