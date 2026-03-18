/*
 * XREFs of _cjIFIMetricsToOTMW@24 @ 0x89FBE
 * Callers:
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 * Callees:
 *     ?cjOTMAWSize@@YGIPAU_IFIMETRICS@@PAI@Z @ 0x87B80 (-cjOTMAWSize@@YGIPAU_IFIMETRICS@@PAI@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?bValidFont@@YGHPAU_IFIMETRICS@@@Z @ 0x89708 (-bValidFont@@YGHPAU_IFIMETRICS@@@Z.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ??8EFLOAT@@QAEHAAV0@@Z @ 0x8A5D6 (--8EFLOAT@@QAEHAAV0@@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 */

int __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        int a2,
        struct RFONTOBJ *a3,
        struct DCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  struct _IFIMETRICS *v6; // edi
  int v9; // eax
  int v10; // esi
  struct RFONTOBJ *v11; // esi
  int v12; // ecx
  struct _IFIMETRICS *v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // esi
  bool v20; // zf
  struct RFONTOBJ *v21; // edi
  unsigned int v22; // esi
  unsigned int v23; // esi
  _WORD *v24; // ecx
  int v26; // eax
  unsigned int v27; // esi
  struct RFONTOBJ *v28; // edx
  char *v29; // ecx
  __int16 v30; // ax
  int v31; // eax
  int v33; // eax
  struct tagTEXTMETRICW *v34; // [esp+0h] [ebp-68h]
  unsigned int v35; // [esp+0h] [ebp-68h]
  unsigned int v36; // [esp+0h] [ebp-68h]
  unsigned int v37; // [esp+0h] [ebp-68h]
  unsigned int v38; // [esp+0h] [ebp-68h]
  struct _IFIMETRICS *v39; // [esp+4h] [ebp-64h]
  const unsigned __int16 *v40; // [esp+4h] [ebp-64h]
  const unsigned __int16 *v41; // [esp+4h] [ebp-64h]
  const unsigned __int16 *v42; // [esp+4h] [ebp-64h]
  const unsigned __int16 *v43; // [esp+4h] [ebp-64h]
  struct RFONTOBJ *v44; // [esp+10h] [ebp-58h] BYREF
  unsigned __int16 v45; // [esp+22h] [ebp-46h]
  struct RFONTOBJ *v46; // [esp+48h] [ebp-20h] BYREF
  int v47; // [esp+4Ch] [ebp-1Ch]
  int v48; // [esp+50h] [ebp-18h] BYREF
  struct _IFIMETRICS *v49; // [esp+54h] [ebp-14h]
  int v50; // [esp+58h] [ebp-10h] BYREF
  int v51; // [esp+5Ch] [ebp-Ch]
  struct RFONTOBJ *v52; // [esp+60h] [ebp-8h] BYREF
  int v53; // [esp+64h] [ebp-4h]
  struct RFONTOBJ *v54; // [esp+70h] [ebp+8h]
  struct RFONTOBJ *v55; // [esp+70h] [ebp+8h]
  struct RFONTOBJ *v56; // [esp+70h] [ebp+8h]
  struct RFONTOBJ *v57; // [esp+70h] [ebp+8h]
  struct RFONTOBJ *v58; // [esp+70h] [ebp+8h]

  v6 = a5;
  IFIOBJR::IFIOBJR((IFIOBJR *)&v44, a5, a3, a4);
  if ( !bValidFont(v6) )
    return 0;
  vIFIMetricsToTextMetricWStrict(a4, a3, (struct RFONTOBJ *)(a2 + 4), v6, v34, v39);
  a1[4] = v6->chFirstChar;
  a1[5] = v6->chLastChar;
  a1[6] = v6->chDefaultChar;
  a1[7] = v6->chBreakChar;
  v9 = *(_DWORD *)a3;
  if ( *(_DWORD *)(*(_DWORD *)a3 + 204) )
  {
    v11 = v44;
    v55 = v44;
    *(_DWORD *)(a2 + 84) = *((_DWORD *)v44 + 35);
    *(_DWORD *)(a2 + 88) = *((_DWORD *)v11 + 34);
    *(_DWORD *)(a2 + 96) = *((__int16 *)v11 + 28);
    *(_DWORD *)(a2 + 100) = *((__int16 *)v11 + 35);
    *(_DWORD *)(a2 + 104) = *((__int16 *)v11 + 36);
    *(_DWORD *)(a2 + 108) = *((__int16 *)v11 + 37);
    *(_DWORD *)(a2 + 120) = *((_DWORD *)v11 + 36);
    *(_DWORD *)(a2 + 124) = *((_DWORD *)v11 + 37);
    *(_DWORD *)(a2 + 128) = *((_DWORD *)v11 + 38);
    *(_DWORD *)(a2 + 132) = *((_DWORD *)v11 + 39);
    *(_DWORD *)(a2 + 136) = *((__int16 *)v11 + 32);
    *(_DWORD *)(a2 + 140) = *((__int16 *)v11 + 33);
    *(_DWORD *)(a2 + 144) = *((__int16 *)v11 + 34);
    *(_DWORD *)(a2 + 152) = *((__int16 *)v11 + 42);
    *(_DWORD *)(a2 + 156) = *((__int16 *)v11 + 43);
    *(_DWORD *)(a2 + 160) = *((__int16 *)v11 + 44);
    *(_DWORD *)(a2 + 164) = *((__int16 *)v11 + 45);
    *(_DWORD *)(a2 + 168) = *((__int16 *)v11 + 46);
    *(_DWORD *)(a2 + 172) = *((__int16 *)v11 + 47);
    *(_DWORD *)(a2 + 176) = *((__int16 *)v11 + 48);
    *(_DWORD *)(a2 + 180) = *((__int16 *)v11 + 49);
    *(_DWORD *)(a2 + 184) = *((__int16 *)v11 + 52);
    *(_DWORD *)(a2 + 188) = *((__int16 *)v11 + 53);
    *(_DWORD *)(a2 + 192) = *((__int16 *)v11 + 50);
    *(_DWORD *)(a2 + 196) = *((__int16 *)v11 + 51);
    *(_DWORD *)(a2 + 116) = *((__int16 *)v11 + 41);
    v15 = *((__int16 *)v11 + 40);
  }
  else
  {
    v46 = *(struct RFONTOBJ **)(v9 + 188);
    v54 = v46;
    v47 = *(_DWORD *)(v9 + 192);
    v10 = *(_DWORD *)(v9 + 196);
    v48 = v10;
    a5 = *(struct _IFIMETRICS **)(v9 + 200);
    v49 = a5;
    v51 = v47;
    v53 = v10;
    if ( EFLOAT::operator==(&v48) )
    {
      v11 = v44;
      v12 = v53;
      v13 = a5;
      v55 = v44;
      *(_DWORD *)(a2 + 84) = *((_DWORD *)v44 + 35);
      v14 = *((_DWORD *)v11 + 34);
    }
    else if ( v10 || (v13 = a5) != 0 )
    {
      v52 = v54;
      v53 = v51;
      divff3_c(&v52, &v46, &v48);
      v11 = v44;
      v55 = v44;
      *(_DWORD *)(a2 + 84) = *((_DWORD *)v44 + 35);
      v14 = lCvt(v52, v53, *((_DWORD *)v11 + 34));
      v13 = v49;
      v12 = v48;
    }
    else
    {
      v11 = v44;
      v12 = v53;
      v55 = v44;
      *(_DWORD *)(a2 + 84) = *((_DWORD *)v44 + 35);
      v14 = *((_DWORD *)v11 + 34);
    }
    *(_DWORD *)(a2 + 88) = v14;
    *(_DWORD *)(a2 + 96) = *((__int16 *)v11 + 28);
    *(_DWORD *)(a2 + 100) = lCvt(v12, v13, *((__int16 *)v11 + 35));
    *(_DWORD *)(a2 + 104) = lCvt(v48, v49, *((__int16 *)v11 + 36));
    *(_DWORD *)(a2 + 108) = lCvt(v48, v49, *((__int16 *)v11 + 37));
    *(_DWORD *)(a2 + 124) = lCvt(v48, v49, *((_DWORD *)v11 + 37));
    *(_DWORD *)(a2 + 120) = lCvt(v46, v47, *((_DWORD *)v11 + 36));
    *(_DWORD *)(a2 + 132) = lCvt(v48, v49, *((_DWORD *)v11 + 39));
    *(_DWORD *)(a2 + 128) = lCvt(v46, v47, *((_DWORD *)v11 + 38));
    *(_DWORD *)(a2 + 136) = lCvt(v48, v49, *((__int16 *)v11 + 32));
    *(_DWORD *)(a2 + 140) = lCvt(v48, v49, *((__int16 *)v11 + 33));
    *(_DWORD *)(a2 + 144) = lCvt(v48, v49, *((__int16 *)v11 + 34));
    *(_DWORD *)(a2 + 152) = lCvt(v46, v47, *((__int16 *)v11 + 42));
    *(_DWORD *)(a2 + 156) = lCvt(v48, v49, *((__int16 *)v11 + 43));
    *(_DWORD *)(a2 + 160) = lCvt(v46, v47, *((__int16 *)v11 + 44));
    *(_DWORD *)(a2 + 164) = lCvt(v48, v49, *((__int16 *)v11 + 45));
    *(_DWORD *)(a2 + 168) = lCvt(v46, v47, *((__int16 *)v11 + 42));
    *(_DWORD *)(a2 + 172) = lCvt(v48, v49, *((__int16 *)v11 + 43));
    *(_DWORD *)(a2 + 176) = lCvt(v46, v47, *((__int16 *)v11 + 48));
    *(_DWORD *)(a2 + 180) = lCvt(v48, v49, *((__int16 *)v11 + 49));
    *(_DWORD *)(a2 + 184) = lCvt(v48, v49, *((__int16 *)v11 + 52));
    *(_DWORD *)(a2 + 188) = lCvt(v48, v49, *((__int16 *)v11 + 53));
    *(_DWORD *)(a2 + 192) = lCvt(v48, v49, *((__int16 *)v11 + 50));
    *(_DWORD *)(a2 + 196) = lCvt(v48, v49, *((__int16 *)v11 + 51));
    *(_DWORD *)(a2 + 116) = lCvt(v48, v49, *((__int16 *)v11 + 41));
    v15 = lCvt(v48, v49, *((__int16 *)v11 + 40));
  }
  *(_DWORD *)(a2 + 112) = v15;
  v16 = *((_DWORD *)v11 + 8);
  *(_DWORD *)(a2 + 92) = v16;
  if ( !v16 )
  {
    v17 = *((_DWORD *)v11 + 35);
    if ( v17 <= 0 || *((_DWORD *)v11 + 34) )
    {
      v46 = 0;
      v47 = 0;
      ltoef_c(v17, &v50);
      ltoef_c(-*((_DWORD *)v11 + 34), &v48);
      vArctan(&v46, &a5, v50, v51, v48, v49);
      v33 = lCvt(v46, v47, 10);
      *(_DWORD *)(a2 + 92) = v33;
      if ( v33 > 1800 )
        *(_DWORD *)(a2 + 92) = v33 - 3600;
    }
  }
  cjOTMAWSize(v6, (_DWORD *)a2);
  v18 = v45;
  v19 = (int)v11 + 172;
  v20 = a6 == 0;
  *(_DWORD *)(a2 + 65) = *(_DWORD *)v19;
  v19 += 4;
  *(_DWORD *)(a2 + 69) = *(_DWORD *)v19;
  *(_WORD *)(a2 + 73) = *(_WORD *)(v19 + 4);
  v21 = v55;
  *(_DWORD *)(a2 + 76) = v18;
  *(_DWORD *)(a2 + 80) = *((unsigned __int16 *)v55 + 27);
  *(_DWORD *)(a2 + 148) = *((__int16 *)v55 + 29);
  if ( v20 )
  {
    *(_DWORD *)(a2 + 200) = 0;
    *(_DWORD *)(a2 + 204) = 0;
    *(_DWORD *)(a2 + 208) = 0;
    *(_DWORD *)(a2 + 212) = 0;
    return 216;
  }
  else
  {
    v22 = *(_DWORD *)a2 - 216;
    *(_DWORD *)(a2 + 200) = 216;
    v23 = v22 >> 1;
    StringCchCopyW((size_t)v55 + *((_DWORD *)v55 + 2), v35, v40);
    v24 = (_WORD *)(a2 + 216);
    while ( *v24++ )
      ;
    v26 = (((int)v24 - a2 - 218) >> 1) + 1;
    v27 = v23 - v26;
    v56 = (struct RFONTOBJ *)(a2 + 216 + 2 * v26);
    *(_DWORD *)(a2 + 204) = 2 * v26 + 216;
    StringCchCopyW((size_t)v21 + *((_DWORD *)v21 + 4), v36, v41);
    v28 = v56;
    v29 = (char *)v56;
    v57 = (struct RFONTOBJ *)((char *)v56 + 2);
    do
    {
      v30 = *(_WORD *)v29;
      v29 += 2;
    }
    while ( v30 );
    v31 = ((v29 - (char *)v57) >> 1) + 1;
    v58 = (struct RFONTOBJ *)((char *)v28 + 2 * v31);
    a5 = (struct _IFIMETRICS *)(v27 - v31);
    *(_DWORD *)(a2 + 208) = (char *)v58 - a2;
    StringCchCopyW((size_t)v21 + *((_DWORD *)v21 + 3), v37, v42);
    *(_DWORD *)(a2 + 212) = (char *)v58 + 2 * wcslen((const unsigned __int16 *)v58) - a2 + 2;
    StringCchCopyW((size_t)v21 + *((_DWORD *)v21 + 5), v38, v43);
    return *(_DWORD *)a2;
  }
}
