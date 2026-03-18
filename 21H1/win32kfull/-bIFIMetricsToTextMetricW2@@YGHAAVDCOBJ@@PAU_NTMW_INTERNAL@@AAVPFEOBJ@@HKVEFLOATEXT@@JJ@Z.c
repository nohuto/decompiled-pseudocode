/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YGHAAVDCOBJ@@PAU_NTMW_INTERNAL@@AAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x893DE
 * Callers:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 * Callees:
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ?tmPitchAndFamily@IFIOBJ@@QBEEXZ @ 0x896B2 (-tmPitchAndFamily@IFIOBJ@@QBEEXZ.c)
 *     ?fwdExternalLeading@IFIOBJ@@QBEFXZ @ 0x896E6 (-fwdExternalLeading@IFIOBJ@@QBEFXZ.c)
 *     ?bValidFont@@YGHPAU_IFIMETRICS@@@Z @ 0x89708 (-bValidFont@@YGHPAU_IFIMETRICS@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

int __fastcall bIFIMetricsToTextMetricW2(
        struct XDCOBJ *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // ax
  int v15; // eax
  int v16; // ebx
  unsigned __int8 v17; // al
  __int16 v18; // dx
  __int16 v19; // cx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [esp-4h] [ebp-70h]
  int v33; // [esp-4h] [ebp-70h]
  int v34; // [esp-4h] [ebp-70h]
  int v35; // [esp-4h] [ebp-70h]
  int v36; // [esp-4h] [ebp-70h]
  struct _IFIMETRICS *v37; // [esp+0h] [ebp-6Ch]
  _BYTE v38[8]; // [esp+10h] [ebp-5Ch] BYREF
  _DWORD v39[3]; // [esp+18h] [ebp-54h] BYREF
  _DWORD v40[3]; // [esp+24h] [ebp-48h] BYREF
  int v41; // [esp+30h] [ebp-3Ch]
  int v42; // [esp+34h] [ebp-38h] BYREF
  int v43; // [esp+38h] [ebp-34h]
  int v44; // [esp+3Ch] [ebp-30h] BYREF
  int v45; // [esp+40h] [ebp-2Ch]
  _BYTE v46[8]; // [esp+44h] [ebp-28h] BYREF
  _BYTE v47[8]; // [esp+4Ch] [ebp-20h] BYREF
  _BYTE v48[8]; // [esp+54h] [ebp-18h] BYREF
  _BYTE v49[8]; // [esp+5Ch] [ebp-10h] BYREF

  v41 = a3;
  v11 = *(_DWORD *)(*(_DWORD *)a3 + 20);
  v39[0] = v11;
  if ( !bValidFont(v37) )
    return 0;
  v12 = *(__int16 *)(v11 + 62);
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
    v13 = lCvt(a8, a9, v12 + *(__int16 *)(v11 + 60));
    *(_DWORD *)(a2 + 8) = v13;
    ltoef_c(v13, &a8);
    EFLOATEXT::operator/=(&a8, *(__int16 *)(v11 + 62) + *(__int16 *)(v11 + 60));
    *(_DWORD *)(a2 + 12) = lCvt(a8, a9, *(__int16 *)(v11 + 60));
    *(_DWORD *)(a2 + 20) = lCvt(a8, a9, (__int16)(*(_WORD *)(v11 + 62) + *(_WORD *)(v11 + 60) - *(_WORD *)(v11 + 56)));
    v14 = IFIOBJ::fwdExternalLeading((IFIOBJ *)v39);
    *(_DWORD *)(a2 + 24) = lCvt(a8, a9, v14);
    *(_DWORD *)(a2 + 28) = lCvt(a8, a9, *(__int16 *)(v11 + 76));
    v15 = lCvt(a8, a9, *(__int16 *)(v11 + 78));
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v12 + *(__int16 *)(v11 + 60);
    *(_DWORD *)(a2 + 12) = *(__int16 *)(v11 + 60);
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v11 + 62) + *(_WORD *)(v11 + 60) - *(_WORD *)(v11 + 56));
    *(_DWORD *)(a2 + 24) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v39);
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v11 + 76);
    v15 = *(__int16 *)(v11 + 78);
  }
  *(_DWORD *)(a2 + 32) = v15;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v40, a1, 0x402u);
  v16 = 0;
  if ( v40[0] )
  {
    if ( (*(_BYTE *)(v40[0] + 56) & 2) == 0 )
    {
      ltoef_c(1, v48);
      ltoef_c(0, v49);
      if ( (*(_BYTE *)(v40[0] + 56) & 2) == 0
        && !EXFORMOBJ::bXform((EXFORMOBJ *)v40, (struct VECTORFL *)v48, (struct VECTORFL *)v48, 1u) )
      {
        return v16;
      }
      EFLOAT::eqLength(&v42, v38, v48);
      ltoef_c(0, v46);
      ltoef_c(1, v47);
      if ( (*(_BYTE *)(v40[0] + 56) & 2) == 0
        && !EXFORMOBJ::bXform((EXFORMOBJ *)v40, (struct VECTORFL *)v46, (struct VECTORFL *)v46, 1u) )
      {
        return v16;
      }
      EFLOAT::eqLength(&v44, v38, v46);
      v27 = lCvt(v44, v45, *(_DWORD *)(a2 + 8));
      v32 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v27;
      v28 = lCvt(v44, v45, v32);
      v33 = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a2 + 12) = v28;
      v29 = lCvt(v42, v43, v33);
      v34 = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 28) = v29;
      v30 = lCvt(v42, v43, v34);
      v35 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(a2 + 32) = v30;
      v31 = lCvt(v44, v45, v35);
      v36 = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 20) = v31;
      *(_DWORD *)(a2 + 24) = lCvt(v44, v45, v36);
    }
    *(_DWORD *)(a2 + 44) = a6;
    *(_DWORD *)(a2 + 48) = a7;
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v11 + 46);
    *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v11 + 52) & 1) != 0);
    *(_BYTE *)(a2 + 61) = *(_BYTE *)(v11 + 52) & 2;
    *(_BYTE *)(a2 + 62) = *(_BYTE *)(v11 + 52) & 0x10;
    *(_WORD *)(a2 + 52) = *(_WORD *)(v11 + 112);
    *(_WORD *)(a2 + 54) = *(_WORD *)(v11 + 114);
    *(_WORD *)(a2 + 56) = *(_WORD *)(v11 + 116);
    *(_WORD *)(a2 + 58) = *(_WORD *)(v11 + 118);
    *(_BYTE *)(a2 + 64) = *(_BYTE *)(v11 + 44);
    v17 = IFIOBJ::tmPitchAndFamily((IFIOBJ *)v39);
    LOBYTE(v19) = *(_DWORD *)(v11 + 48) & 8;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 68) = 0;
    *(_BYTE *)(a2 + 63) = (a4 == 0 ? 0 : 8) | ((_BYTE)v19 != 0 ? 0xA : 0) | v17;
    v18 = *(_WORD *)(v11 + 52);
    LOBYTE(v19) = v18;
    if ( (v18 & 0x21) != 0 )
    {
      v20 = 0;
      if ( (v18 & 1) != 0 )
      {
        v20 = 1;
        *(_DWORD *)(a2 + 68) = 1;
        v19 = *(_WORD *)(v11 + 52);
      }
      if ( (v19 & 0x20) == 0 )
        goto LABEL_9;
      v20 |= 0x20u;
    }
    else
    {
      v20 = 64;
    }
    *(_DWORD *)(a2 + 68) = v20;
LABEL_9:
    v21 = *(_DWORD *)(v11 + 48);
    if ( (v21 & 0x20000000) != 0 )
    {
      v20 |= 0x10000u;
      *(_DWORD *)(a2 + 68) = v20;
      v21 = *(_DWORD *)(v11 + 48);
    }
    if ( v21 < 0 )
    {
      if ( (v21 & 0x4000) != 0 )
      {
        v20 |= (unsigned int)&loc_80000;
        *(_DWORD *)(a2 + 68) = v20;
        v21 = *(_DWORD *)(v11 + 48);
      }
      if ( (v21 & 0x4000000) != 0 )
        v20 |= (unsigned int)&loc_20000;
      else
        v20 |= 0x100000u;
      *(_DWORD *)(a2 + 68) = v20;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x40000) != 0 )
    {
      v22 = ((unsigned int)&loc_1FFFFC + 4) | v20;
      *(_DWORD *)(a2 + 68) = v22;
      if ( (*(_BYTE *)(v11 + 48) & 1) != 0 )
        *(_DWORD *)(a2 + 68) = v22 | 0x40000;
    }
    *(_DWORD *)(a2 + 72) = *(__int16 *)(v11 + 56);
    *(_DWORD *)(a2 + 76) = *(__int16 *)(v11 + 60) + *(__int16 *)(v11 + 62);
    v23 = 0;
    *(_DWORD *)(a2 + 80) = *(__int16 *)(v11 + 76);
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(v11 + 108);
    *(_BYTE *)(a2 + 5) = *(_BYTE *)(v11 + 109);
    *(_BYTE *)(a2 + 6) = *(_BYTE *)(v11 + 110);
    *(_BYTE *)(a2 + 7) = *(_BYTE *)(v11 + 111);
    v24 = *(_DWORD *)(*(_DWORD *)v41 + 20);
    if ( *(_DWORD *)(v24 + 4) > 4u )
      v23 = *(_DWORD *)(v24 + 188);
    v25 = (_DWORD *)(a2 + 84);
    if ( v23 )
    {
      qmemcpy(v25, (const void *)(v23 + v11), 0x18u);
    }
    else
    {
      *v25 = 0;
      *(_DWORD *)(a2 + 88) = 0;
      *(_DWORD *)(a2 + 92) = 0;
      *(_DWORD *)(a2 + 96) = 0;
      *(_DWORD *)(a2 + 100) = 0;
      *(_DWORD *)(a2 + 104) = 0;
    }
    return 1;
  }
  return v16;
}
