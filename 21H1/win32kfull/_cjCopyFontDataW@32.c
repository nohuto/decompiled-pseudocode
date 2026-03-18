/*
 * XREFs of _cjCopyFontDataW@32 @ 0x8910A
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z @ 0x88F8C (-WriteEFE@EFSOBJ@@QAEXABU_EFENTRY@@AAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE (-bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?bValidFont@@YGHPAU_IFIMETRICS@@@Z @ 0x89708 (-bValidFont@@YGHPAU_IFIMETRICS@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QAEKXZ @ 0x89722 (-dpNtmi@PFEOBJ@@QAEKXZ.c)
 *     ?IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z @ 0x89762 (-IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x897A0 (-bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QBEEXZ @ 0x8999C (-lfOutPrecision@IFIOBJ@@QBEEXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ?vLookupScript@@YGXKPAGK@Z @ 0x89F72 (-vLookupScript@@YGXKPAGK@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall cjCopyFontDataW(_DWORD *a1, unsigned int a2, PFEOBJ *a3, int a4, wchar_t *Src, char a6, int a7, int a8)
{
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // esi
  int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  bool v17; // zf
  bool v18; // al
  int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v27; // edx
  _DWORD *v28; // edx
  unsigned int v29; // eax
  struct HLFONT__ *v30; // eax
  struct LFONT *v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // [esp-4h] [ebp-44h]
  struct _IFIMETRICS *v36; // [esp+0h] [ebp-40h]
  struct _IFIMETRICS *v37; // [esp+0h] [ebp-40h]
  unsigned int v38; // [esp+4h] [ebp-3Ch]
  unsigned int v39[3]; // [esp+Ch] [ebp-34h] BYREF
  int v40; // [esp+18h] [ebp-28h] BYREF
  int v41; // [esp+1Ch] [ebp-24h]
  int v42; // [esp+20h] [ebp-20h]
  _DWORD *v43; // [esp+24h] [ebp-1Ch]
  unsigned int v44; // [esp+28h] [ebp-18h]
  unsigned int v45; // [esp+2Ch] [ebp-14h]
  unsigned int v46; // [esp+30h] [ebp-10h]
  int v47; // [esp+34h] [ebp-Ch]
  int v48; // [esp+38h] [ebp-8h] BYREF
  unsigned int v49; // [esp+3Ch] [ebp-4h]

  v49 = a2;
  v8 = *(_DWORD *)a3;
  v9 = 1;
  v10 = *a1;
  v43 = a1;
  v11 = *(_DWORD *)(v8 + 20);
  v12 = *(_DWORD *)(v10 + 36);
  v47 = *(_DWORD *)(v8 + 8) & 1;
  v44 = *(_DWORD *)(v11 + 132);
  v13 = *(_DWORD *)(v11 + 128);
  v46 = v11;
  v39[0] = v11;
  v45 = v13;
  v48 = v12;
  if ( !v12 || !bValidFont(v36) )
    return 0;
  if ( v47 )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
      goto LABEL_5;
    v44 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v48);
    v45 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v48);
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
LABEL_5:
    if ( IFIOBJ::lfOutPrecision((IFIOBJ *)v39) == 8 )
    {
      v44 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v48);
      v45 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v48);
    }
    if ( !v47 )
    {
      ltoef_c(24, &v40);
      EFLOATEXT::operator/=(72);
      v14 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v48);
      EFLOATEXT::operator*=(v14);
      EFLOATEXT::operator/=(*(__int16 *)(v11 + 56));
      goto LABEL_9;
    }
    v30 = *(struct HLFONT__ **)(v12 + 896);
    if ( v30 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v48, v30, 0);
      v31 = (struct LFONT *)v48;
      if ( v48 )
      {
        v32 = *(_DWORD *)(v48 + 280);
        if ( v32 >= 0 )
        {
          ltoef_c(v32, &v40);
          v33 = *(__int16 *)(v46 + 60) + *(__int16 *)(v46 + 62);
        }
        else
        {
          ltoef_c(-v32, &v40);
          v33 = *(__int16 *)(v46 + 56);
        }
        EFLOATEXT::operator/=(v33);
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v31);
        v11 = v46;
        goto LABEL_9;
      }
    }
    return 0;
  }
LABEL_9:
  if ( !bIFIMetricsToLogFontW2(v43, v49 + 12, v11, v40, v41) )
    return 0;
  v42 = *(_DWORD *)(*(_DWORD *)a3 + 80);
  *(_DWORD *)v49 = v42;
  v15 = PFEOBJ::dpNtmi(a3);
  v16 = v49;
  v48 = 0;
  *(_DWORD *)(v49 + 4) = v15;
  v17 = (*(_DWORD *)(v11 + 48) & 0x4000) == 0;
  v46 = v15 + v16;
  if ( v17 )
  {
    v18 = IsVariableFont(v37);
    v16 = v49;
    if ( !v18 )
      goto LABEL_12;
  }
  if ( *(_DWORD *)(v11 + 4) <= 0xCu )
  {
LABEL_12:
    v19 = v48;
    v20 = 0;
    *(_DWORD *)(v16 + 360) = 134248036;
  }
  else
  {
    v28 = (_DWORD *)(v11 + *(_DWORD *)(v11 + 196));
    v29 = v28[1];
    v48 = v29;
    if ( v29 > 0x10 )
    {
      v29 = 16;
      v48 = 16;
    }
    memcpy((void *)(v16 + 360), v28, 4 * v29 + 8);
    v19 = v48;
    v16 = v49;
    v20 = v48;
  }
  *(_DWORD *)(v16 + 364) = v20;
  v21 = v46;
  v22 = (_DWORD *)(v46 + 108);
  if ( (*(_DWORD *)(v11 + 48) & 0x4000) != 0 && *(_DWORD *)(v11 + 4) > 0x10u )
  {
    memcpy((void *)(v46 + 108), (const void *)(v11 + *(_DWORD *)(v11 + 200)), 40 * v19 + 8);
    v21 = v46;
  }
  else
  {
    *(_DWORD *)(v46 + 112) = 0;
    *v22 = 134245473;
  }
  if ( !bIFIMetricsToTextMetricW2(v43, v21, a3, v47, v22, v44, v45, v40, v41) )
    return 0;
  v23 = v49;
  if ( a7 )
  {
    v27 = v46;
    *(_BYTE *)(v49 + 35) = a6;
    *(_BYTE *)(v27 + 64) = a6;
    vLookupScript(v23, (unsigned __int16 *)v37, v38);
    v23 = v49;
  }
  else
  {
    *(_WORD *)(v49 + 296) = 0;
  }
  if ( Src )
  {
    _wcsncpy_s((wchar_t *)(v23 + 40), 0x20u, Src, 0x1Fu);
  }
  else
  {
    if ( a4 != 5 )
    {
      v24 = v49;
      goto LABEL_22;
    }
    _wcsncpy_s((wchar_t *)(v23 + 40), 0x20u, (const wchar_t *)(v23 + 104), 0x1Fu);
  }
  v24 = v49;
  *(_WORD *)(v49 + 102) = 0;
LABEL_22:
  *(_DWORD *)(v24 + 8) = 0;
  v25 = *(_DWORD *)(v11 + 48);
  if ( (v25 & 1) != 0 )
  {
    if ( (*(_BYTE *)(v12 + 24) & 1) != 0
      || (*(_DWORD *)(v12 + 1468) & 0x2000) != 0
      || *(_DWORD *)(*(_DWORD *)(*v43 + 1020) + 228) != 1 )
    {
      v35 = 4;
    }
    else
    {
      v35 = 6;
    }
    v9 = v35;
  }
  else if ( (v25 & 2) == 0 )
  {
    v9 = 0;
    if ( v25 < 0 )
    {
      *(_DWORD *)(v24 + 8) = 2;
      v9 = 2;
    }
    goto LABEL_27;
  }
  *(_DWORD *)(v24 + 8) = v9;
LABEL_27:
  if ( v47 )
  {
    if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
      v34 = 2;
    else
      v34 = v9 | 2;
    *(_DWORD *)(v24 + 8) = v34;
    if ( *(_DWORD *)(v12 + 1424) == 2
      && (*(_DWORD *)(v12 + 1468) & 0x100) == 0
      && (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
    {
      *(_DWORD *)(v24 + 8) = v34 | 0x80000000;
    }
  }
  return v42;
}
