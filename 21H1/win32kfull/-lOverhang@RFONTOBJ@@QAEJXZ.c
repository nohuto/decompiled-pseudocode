/*
 * XREFs of ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8
 * Callers:
 *     ?bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z @ 0x881C4 (-bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810 (-bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z @ 0x848CE (-vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ @ 0x8A758 (-pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // edx
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v6; // ecx
  struct _POINTL *v7; // eax
  LONG y; // esi
  int v9; // eax
  _DWORD v10[3]; // [esp+10h] [ebp-78h] BYREF
  _BYTE v11[4]; // [esp+1Ch] [ebp-6Ch] BYREF
  RFONTOBJ *v12; // [esp+20h] [ebp-68h]
  _DWORD v13[3]; // [esp+24h] [ebp-64h] BYREF
  int v14; // [esp+30h] [ebp-58h] BYREF
  int v15; // [esp+34h] [ebp-54h]
  _BYTE v16[60]; // [esp+38h] [ebp-50h] BYREF
  _BYTE v17[8]; // [esp+74h] [ebp-14h] BYREF
  _BYTE v18[8]; // [esp+7Ch] [ebp-Ch] BYREF

  v12 = this;
  v1 = *(_DWORD **)this;
  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 80) + 20);
  if ( (*(_BYTE *)(v4 + 48) & 6) == 0 || v1[16] )
    return v3;
  v6 = v1[3];
  if ( (v6 & 0x4000) != 0 )
    v3 = (v1[90] - 1) / 2;
  if ( (v6 & 0x2000) == 0 )
    return v3;
  v10[0] = v4;
  if ( (*(_BYTE *)(v4 + 48) & 4) == 0 )
    return ++v3;
  memset(v16, 0, sizeof(v16));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v13, (struct MATRIX *)v16, 8u);
  if ( v13[0] )
  {
    RFONTOBJ::vSetNotionalToDevice(v12, (struct EXFORMOBJ *)v13);
    v7 = IFIOBJ::pptlBaseline((IFIOBJ *)v10);
    y = v7->y;
    ltoef_c(v7->x, v17);
    ltoef_c(y, v18);
    if ( (*(_BYTE *)(v13[0] + 56) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct VECTORFL *)v17, (struct VECTORFL *)v17, 1u) )
    {
      v14 = 0;
      v15 = 0;
      EFLOAT::eqLength(&v14, v11, v17);
      v9 = lCvt(v14, v15, 1);
      if ( !v9 )
        v9 = 1;
      v3 += v9;
      return v3;
    }
    return 1;
  }
  return v2;
}
