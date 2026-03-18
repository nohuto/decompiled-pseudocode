/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306
 * Callers:
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     ?vIFIMetricsToTextMetricW@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@PAU_IFIMETRICS@@@Z @ 0x8A8DA (-vIFIMetricsToTextMetricW@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAU_TMW_INTERNAL@@PAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8 (-lOverhang@RFONTOBJ@@QAEJXZ.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?tmPitchAndFamily@IFIOBJ@@QBEEXZ @ 0x896B2 (-tmPitchAndFamily@IFIOBJ@@QBEEXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QBEFXZ @ 0x896E6 (-fwdExternalLeading@IFIOBJ@@QBEFXZ.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

void __userpurge vIFIMetricsToTextMetricWStrict(
        struct DCOBJ *a1@<edx>,
        struct RFONTOBJ *a2@<ecx>,
        struct RFONTOBJ *a3,
        struct _IFIMETRICS *a4,
        struct tagTEXTMETRICW *a5,
        struct _IFIMETRICS *a6)
{
  DC **v6; // esi
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // esi
  __int16 v14; // ax
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  char v23; // bl
  int v24; // eax
  unsigned __int8 v25; // cl
  int v26; // eax
  int v27; // esi
  int v28; // esi
  int v29; // eax
  int v31; // [esp+14h] [ebp-3Ch]
  int v32; // [esp+14h] [ebp-3Ch]
  _DWORD v33[4]; // [esp+18h] [ebp-38h] BYREF
  unsigned __int16 v34; // [esp+28h] [ebp-28h]
  char v35; // [esp+2Ah] [ebp-26h]
  int v36; // [esp+38h] [ebp-18h]
  int v37; // [esp+3Ch] [ebp-14h]
  int v38; // [esp+40h] [ebp-10h]
  int v39; // [esp+44h] [ebp-Ch]
  int v40; // [esp+48h] [ebp-8h]
  int v41; // [esp+4Ch] [ebp-4h]

  v6 = (DC **)a1;
  IFIOBJR::IFIOBJR((IFIOBJR *)v33, a4, a2, a1);
  v31 = *(_DWORD *)(*(_DWORD *)a2 + 328);
  if ( DC::bWorldToDeviceIdentity(*v6) )
  {
    *(_DWORD *)a3 = (v31 + 8) >> 4;
    *((_DWORD *)a3 + 1) = (*(_DWORD *)(*(_DWORD *)a2 + 320) + 8) >> 4;
    v9 = RFONTOBJ::lOverhang(a2);
  }
  else
  {
    *(_DWORD *)a3 = lCvt(*(_DWORD *)(v8 + 680), *(_DWORD *)(v8 + 684), v31);
    *((_DWORD *)a3 + 1) = lCvt(
                            *(_DWORD *)(*(_DWORD *)a2 + 680),
                            *(_DWORD *)(*(_DWORD *)a2 + 684),
                            *(_DWORD *)(*(_DWORD *)a2 + 320));
    v28 = *(_DWORD *)a2;
    v29 = RFONTOBJ::lOverhang(a2);
    v9 = lCvt(*(_DWORD *)(v28 + 672), *(_DWORD *)(v28 + 676), 16 * v29);
    v6 = (DC **)a1;
  }
  *((_DWORD *)a3 + 8) = v9;
  v32 = v33[0];
  if ( (*(_DWORD *)(v33[0] + 48) & 0x3000010) != 0 )
  {
    v10 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 384) == 0x80000000 )
      v11 = *(_DWORD *)a3 - lCvt(v10[49], v10[50], *(__int16 *)(v33[0] + 56));
    else
      v11 = lCvt(v10[170], v10[171], *(_DWORD *)(*(_DWORD *)a2 + 384));
    *((_DWORD *)a3 + 3) = v11;
    v12 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 380) == 0x80000000 )
    {
      v13 = v12[49];
      v14 = IFIOBJ::fwdExternalLeading((IFIOBJ *)v33);
      v16 = lCvt(v13, v15, v14);
    }
    else
    {
      v16 = lCvt(v12[170], v12[171], *(_DWORD *)(*(_DWORD *)a2 + 380));
    }
    *((_DWORD *)a3 + 4) = v16;
    v17 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 388) == 0x80000000 )
      v18 = lCvt(v17[47], v17[48], v36);
    else
      v18 = lCvt(v17[168], v17[169], *(_DWORD *)(*(_DWORD *)a2 + 388));
    *((_DWORD *)a3 + 6) = v18;
    v19 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 392) == 0x80000000 )
      v20 = lCvt(v19[47], v19[48], v37);
    else
      v20 = lCvt(v19[168], v19[169], *(_DWORD *)(*(_DWORD *)a2 + 392));
    v6 = (DC **)a1;
    *((_DWORD *)a3 + 5) = v20;
    goto LABEL_13;
  }
  if ( !DC::bWorldToDeviceIdentity(*v6) )
  {
    *((_DWORD *)a3 + 6) = lCvt(*(_DWORD *)(*(_DWORD *)a2 + 672), *(_DWORD *)(*(_DWORD *)a2 + 676), 16 * v36);
    *((_DWORD *)a3 + 5) = lCvt(*(_DWORD *)(*(_DWORD *)a2 + 672), *(_DWORD *)(*(_DWORD *)a2 + 676), 16 * v37);
    *((_DWORD *)a3 + 3) = lCvt(*(_DWORD *)(*(_DWORD *)a2 + 680), *(_DWORD *)(*(_DWORD *)a2 + 684), 16 * v38);
    *((_DWORD *)a3 + 4) = lCvt(*(_DWORD *)(*(_DWORD *)a2 + 680), *(_DWORD *)(*(_DWORD *)a2 + 684), 16 * v39);
LABEL_13:
    v21 = v32;
    goto LABEL_14;
  }
  *((_DWORD *)a3 + 6) = v36;
  *((_DWORD *)a3 + 5) = v37;
  *((_DWORD *)a3 + 3) = v38;
  *((_DWORD *)a3 + 4) = v39;
LABEL_14:
  *((_DWORD *)a3 + 2) = *(_DWORD *)a3 - *((_DWORD *)a3 + 1);
  *((_DWORD *)a3 + 7) = v34;
  *((_BYTE *)a3 + 52) = -((v35 & 1) != 0);
  *((_BYTE *)a3 + 53) = *(_BYTE *)(v21 + 52) & 2;
  *((_BYTE *)a3 + 54) = *(_BYTE *)(v21 + 52) & 0x10;
  v22 = *((_DWORD *)*v6 + 389);
  *((_BYTE *)a3 + 53) = -((v22 & 0x20) != 0);
  *((_BYTE *)a3 + 54) = -((v22 & 0x80u) != 0);
  *((_WORD *)a3 + 22) = *(_WORD *)(v21 + 112);
  *((_WORD *)a3 + 23) = *(_WORD *)(v21 + 114);
  *((_WORD *)a3 + 24) = *(_WORD *)(v21 + 116);
  *((_WORD *)a3 + 25) = *(_WORD *)(v21 + 118);
  *((_BYTE *)a3 + 56) = *(_BYTE *)(*((_DWORD *)*v6 + 255) + 6);
  if ( (*(_BYTE *)(v21 + 48) & 1) != 0 )
  {
    v23 = 0;
    v24 = *((_DWORD *)*v6 + 9);
    if ( (*(_BYTE *)(v24 + 24) & 1) == 0
      && (*(_DWORD *)(v24 + 1468) & 0x2000) == 0
      && *(_DWORD *)(*((_DWORD *)*v6 + 255) + 228) == 1
      && (!_gbDBCSCodePage || (int)GetAppCompatFlags(0) >= 0) )
    {
      v23 = 8;
    }
    v25 = IFIOBJ::tmPitchAndFamily((IFIOBJ *)v33);
  }
  else
  {
    v26 = *(_DWORD *)a2;
    v23 = 0;
    v27 = *(_DWORD *)(v26 + 64);
    if ( (a4->flInfo & 8) != 0 && (!_gbDBCSCodePage || (int)GetAppCompatFlags(0) >= 0) )
      v23 = 10;
    v25 = (v27 == 0 ? 0 : 8) | IFIOBJ::tmPitchAndFamily((IFIOBJ *)v33);
  }
  *((_BYTE *)a3 + 55) = v23 | v25;
  *((_DWORD *)a3 + 9) = v40;
  *((_DWORD *)a3 + 10) = v41;
}
