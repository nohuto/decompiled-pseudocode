/*
 * XREFs of ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C
 * Callers:
 *     ?InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x15754D (-InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION.c)
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1565EB (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x156681 (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$_ea_156681.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x1566DC (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCF.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x15672E (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV-$Square.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AVCFixPred@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x156793 (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AVCFixPred@0@ABV-$Vector@VCFixPred@Prediction@@$02.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1567E6 (--$-GVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x156843 (--$-HVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1568A0 (--$-HVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV10@0@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1568F3 (--$-TVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV-$.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x156959 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV.c)
 *     ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEAAV01@ABV01@@Z @ 0x156A64 (--4-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEAAV01@ABV01@@Z.c)
 *     ??4?$Vector@VCFixPred@Prediction@@$02@Prediction@@QAEAAV01@ABV01@@Z @ 0x156AA5 (--4-$Vector@VCFixPred@Prediction@@$02@Prediction@@QAEAAV01@ABV01@@Z.c)
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 *     ??KPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AFF (--KPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 *     ?boundff@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@@Z @ 0x158CB5 (-boundff@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@@Z.c)
 *     ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEXABVCFixPred@2@@Z @ 0x158D12 (-diag@-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEXABVCFixPred@2@@Z.c)
 */

_DWORD *__thiscall Prediction::tagRlsFilter::Filter(
        char *this,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7)
{
  char *v7; // ebx
  char *v8; // edi
  _DWORD *v9; // ecx
  int v10; // esi
  BOOL v11; // eax
  unsigned int j; // ecx
  int v13; // esi
  int v14; // ebx
  bool v15; // zf
  char *v16; // esi
  int v17; // ecx
  int v18; // eax
  char *v19; // eax
  _DWORD *v20; // eax
  char *v21; // eax
  char *v22; // esi
  char *v23; // eax
  _DWORD *v24; // eax
  char *v25; // eax
  unsigned int v26; // edx
  int v27; // esi
  int v28; // eax
  bool v29; // cf
  _DWORD *v30; // eax
  int v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  int v35; // ecx
  __int64 *v36; // eax
  __int64 *v37; // eax
  _QWORD *v38; // esi
  char *v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // eax
  _BYTE *v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  _BYTE *v45; // eax
  _DWORD *v46; // eax
  int v47; // ecx
  int v48; // ecx
  _DWORD *v49; // eax
  _BYTE *v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  _DWORD *result; // eax
  _BYTE *v54; // [esp-1Ch] [ebp-3F4h]
  _DWORD *v55; // [esp-14h] [ebp-3ECh]
  __int64 v56; // [esp-8h] [ebp-3E0h] BYREF
  char v57; // [esp+10h] [ebp-3C8h] BYREF
  char v58; // [esp+18h] [ebp-3C0h] BYREF
  char v59; // [esp+20h] [ebp-3B8h] BYREF
  char v60; // [esp+28h] [ebp-3B0h] BYREF
  char v61; // [esp+30h] [ebp-3A8h] BYREF
  char v62; // [esp+38h] [ebp-3A0h] BYREF
  char v63; // [esp+40h] [ebp-398h] BYREF
  char v64; // [esp+48h] [ebp-390h] BYREF
  int v65; // [esp+54h] [ebp-384h]
  int v66; // [esp+5Ch] [ebp-37Ch]
  int v67; // [esp+60h] [ebp-378h]
  int v68; // [esp+64h] [ebp-374h]
  _DWORD *i; // [esp+68h] [ebp-370h]
  _DWORD *v70; // [esp+6Ch] [ebp-36Ch]
  __int64 v71; // [esp+70h] [ebp-368h] BYREF
  int v72; // [esp+7Ch] [ebp-35Ch]
  int v73; // [esp+80h] [ebp-358h]
  void *v74; // [esp+84h] [ebp-354h]
  __int64 v75; // [esp+88h] [ebp-350h] BYREF
  int v76; // [esp+90h] [ebp-348h] BYREF
  int v77; // [esp+94h] [ebp-344h]
  int v78; // [esp+98h] [ebp-340h]
  int v79; // [esp+9Ch] [ebp-33Ch]
  char v80[72]; // [esp+A0h] [ebp-338h] BYREF
  int v81[18]; // [esp+E8h] [ebp-2F0h] BYREF
  int v82[18]; // [esp+130h] [ebp-2A8h] BYREF
  char v83[72]; // [esp+178h] [ebp-260h] BYREF
  _DWORD v84[18]; // [esp+1C0h] [ebp-218h] BYREF
  _BYTE v85[72]; // [esp+208h] [ebp-1D0h] BYREF
  _DWORD v86[18]; // [esp+250h] [ebp-188h] BYREF
  _DWORD v87[18]; // [esp+298h] [ebp-140h] BYREF
  _BYTE v88[72]; // [esp+2E0h] [ebp-F8h] BYREF
  _DWORD v89[18]; // [esp+328h] [ebp-B0h] BYREF
  int v90[6]; // [esp+370h] [ebp-68h] BYREF
  char v91[24]; // [esp+388h] [ebp-50h] BYREF
  _DWORD v92[6]; // [esp+3A0h] [ebp-38h] BYREF
  _DWORD v93[7]; // [esp+3B8h] [ebp-20h] BYREF

  v70 = a2;
  v7 = this;
  v74 = this;
  *a3 = 0;
  for ( i = a3; ; *i = 1 )
  {
    v8 = v7 + 24;
    v9 = v7 + 32;
    v78 = *((_DWORD *)v7 + 4);
    v79 = *((_DWORD *)v7 + 5);
    v10 = 2;
    do
    {
      *(v9 - 4) = *(v9 - 6);
      *(v9 - 3) = *(v9 - 5);
      v9[2] = *v9;
      v9[3] = v9[1];
      v9 -= 2;
      --v10;
    }
    while ( v10 );
    if ( v7 != (char *)&a4 )
    {
      *(_DWORD *)v7 = a4;
      *((_DWORD *)v7 + 1) = a5;
    }
    if ( v8 != &v57 )
    {
      *(_DWORD *)v8 = v78;
      *((_DWORD *)v7 + 7) = v79;
    }
    v11 = 1;
    for ( j = 0; j < 3; ++j )
      v11 = v11
         && (v13 = *(_DWORD *)&v7[8 * j + 4], *(_QWORD *)&v7[8 * j])
         && (v14 = *(_DWORD *)&v8[8 * j + 4],
             v79 = *(_DWORD *)&v8[8 * j],
             v15 = (v14 | v79) == 0,
             v78 = v14,
             v7 = (char *)v74,
             !v15)
         && (v65 = v78 ^ v13, (v78 ^ v13) < 0);
    if ( !v11 )
      break;
    v16 = v7 + 400;
    v79 = *((_DWORD *)v7 + 106);
    v78 = *((_DWORD *)v7 + 107);
    v73 = *((_DWORD *)v7 + 100);
    v72 = *((_DWORD *)v7 + 101);
    v17 = *((_DWORD *)v7 + 102);
    v67 = *((_DWORD *)v7 + 103);
    HIDWORD(v56) = 432;
    v66 = v17;
    v18 = *((_DWORD *)v7 + 105);
    v68 = *((_DWORD *)v7 + 104);
    v65 = v18;
    memset(v7, 0, 0x1B0u);
    if ( v7 + 424 != &v58 )
    {
      *((_DWORD *)v7 + 106) = v79;
      *((_DWORD *)v7 + 107) = v78;
    }
    if ( v16 != &v59 )
    {
      *(_DWORD *)v16 = v73;
      *((_DWORD *)v7 + 101) = v72;
    }
    if ( v7 + 408 != &v60 )
    {
      *((_DWORD *)v7 + 102) = v66;
      *((_DWORD *)v7 + 103) = v67;
    }
    if ( v7 + 416 != &v61 )
    {
      *((_DWORD *)v7 + 104) = v68;
      *((_DWORD *)v7 + 105) = v65;
    }
    if ( v7 + 384 != v16 )
    {
      *((_DWORD *)v7 + 96) = *(_DWORD *)v16;
      *((_DWORD *)v7 + 97) = *((_DWORD *)v7 + 101);
    }
    v71 = 0x100000000LL;
    v19 = (char *)Prediction::operator/(&v75, &v71, (_DWORD *)v7 + 96);
    if ( v7 + 392 != v19 )
    {
      *((_DWORD *)v7 + 98) = *(_DWORD *)v19;
      *((_DWORD *)v7 + 99) = *((_DWORD *)v19 + 1);
    }
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(v7 + 424);
    v76 = 0;
    v77 = 1;
    Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(&v76);
  }
  v20 = Prediction::operator*<Prediction::CFixPred,3>(v93, (int)(v7 + 144), (int)v7);
  Prediction::Vector<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 24, (int)v20);
  v21 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v75, (int)v7, (int)(v7 + 96));
  v22 = v7 + 360;
  if ( v7 + 360 != v21 )
  {
    *(_DWORD *)v22 = *(_DWORD *)v21;
    *((_DWORD *)v7 + 91) = *((_DWORD *)v21 + 1);
  }
  if ( v22 != &v64 )
    *(_QWORD *)v22 += *((_QWORD *)v7 + 48);
  v76 = 0;
  v77 = 1;
  v23 = (char *)Prediction::operator/(&v75, &v76, (_DWORD *)v7 + 90);
  if ( v22 != v23 )
  {
    *(_DWORD *)v22 = *(_DWORD *)v23;
    *((_DWORD *)v7 + 91) = *((_DWORD *)v23 + 1);
  }
  v24 = Prediction::operator*<Prediction::CFixPred,3>(v93, (int)(v7 + 360));
  Prediction::Vector<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 18, (int)v24);
  v25 = Prediction::operator*<Prediction::CFixPred,3>((char *)&v75, (int)(v7 + 48), (int)v7);
  if ( v7 + 368 == v25 )
  {
    v26 = *((_DWORD *)v7 + 92);
    v27 = *((_DWORD *)v7 + 93);
  }
  else
  {
    v26 = *(_DWORD *)v25;
    v27 = *((_DWORD *)v25 + 1);
    *((_DWORD *)v7 + 92) = *(_DWORD *)v25;
    *((_DWORD *)v7 + 93) = v27;
  }
  if ( v7 + 376 != &v63 )
  {
    v28 = a7;
    v29 = a6 < v26;
    *((_DWORD *)v7 + 94) = a6 - v26;
    *((_DWORD *)v7 + 95) = v28 - (v29 + v27);
  }
  v30 = Prediction::operator*<Prediction::CFixPred,3>(v93, (int)(v7 + 376));
  v31 = Prediction::operator+<Prediction::CFixPred,3>((int)v92, (int)(v7 + 48), (int)v30);
  Prediction::Vector<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 12, v31);
  v32 = Prediction::operator^<Prediction::CFixPred,3>(v84, (int)(v7 + 72), (int)(v7 + 96));
  Prediction::operator-<Prediction::CFixPred,3>(v85, (int)(v7 + 144), (int)v32);
  v33 = Prediction::operator*<Prediction::CFixPred,3>(v86, (int)(v7 + 392));
  v34 = Prediction::Tri<Prediction::CFixPred,3>(v87, (int)v33);
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 36, (int)v34);
  HIDWORD(v56) = v35;
  LODWORD(v56) = v35;
  v36 = (__int64 *)Prediction::operator*<Prediction::CFixPred,3>((char *)&v75, (int)(v7 + 120), (int)v7);
  Prediction::operator*(&v56, v36, (__int64 *)v7 + 47);
  v37 = (__int64 *)Prediction::tagRlsFilter::boundff(v7, &v76, v56, HIDWORD(v56));
  v38 = Prediction::operator*(&v71, (__int64 *)v7 + 52, v37);
  if ( v7 + 384 != &v62 )
    *((_QWORD *)v7 + 48) += *v38;
  v76 = 0;
  v77 = 1;
  v39 = (char *)Prediction::operator/(&v75, &v76, (_DWORD *)v7 + 96);
  if ( v7 + 392 != v39 )
  {
    *((_DWORD *)v7 + 98) = *(_DWORD *)v39;
    *((_DWORD *)v7 + 99) = *((_DWORD *)v39 + 1);
  }
  HIDWORD(v56) = v7 + 392;
  LODWORD(v56) = v39;
  v55 = Prediction::operator^<Prediction::CFixPred,3>(v87, (int)(v7 + 72), (int)(v7 + 72));
  v40 = Prediction::operator^<Prediction::CFixPred,3>(v86, (int)v7, (int)(v7 + 72));
  v54 = Prediction::operator-<Prediction::CFixPred,3>(v85, (int)(v7 + 288), (int)v40);
  v41 = Prediction::operator^<Prediction::CFixPred,3>(v84, (int)(v7 + 72), (int)v7);
  v42 = Prediction::operator-<Prediction::CFixPred,3>(v80, (int)(v7 + 288), (int)v41);
  v43 = Prediction::operator*<Prediction::CFixPred,3>(v81, (int)v42, (int)(v7 + 216));
  v44 = Prediction::operator*<Prediction::CFixPred,3>(v82, (int)v43, (int)v54);
  v45 = Prediction::operator+<Prediction::CFixPred,3>(v83, (int)v44, (int)v55);
  Prediction::operator-<Prediction::CFixPred,3>(v88, (int)v45, (int)(v7 + 144));
  v46 = Prediction::operator*<Prediction::CFixPred,3>(v89, SHIDWORD(v56));
  Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 54, (int)v46);
  HIDWORD(v56) = v7 + 376;
  LODWORD(v56) = v47;
  Prediction::operator*<Prediction::CFixPred,3>(v92, (int)(v7 + 216), (int)v7);
  HIDWORD(v56) = Prediction::operator*<Prediction::CFixPred,3>(v93, SHIDWORD(v56));
  LODWORD(v56) = v48;
  v49 = Prediction::operator^<Prediction::CFixPred,3>(v89, (int)(v7 + 72), (int)v7);
  v50 = Prediction::operator-<Prediction::CFixPred,3>(v88, (int)(v7 + 288), (int)v49);
  v51 = Prediction::operator*<Prediction::CFixPred,3>(v90, (int)v50, (int)(v7 + 120));
  v52 = Prediction::operator+<Prediction::CFixPred,3>((int)v91, (int)v51, SHIDWORD(v56));
  Prediction::Vector<Prediction::CFixPred,3>::operator=((_DWORD *)v7 + 30, v52);
  result = v70;
  *v70 = *((_DWORD *)v7 + 92);
  result[1] = *((_DWORD *)v7 + 93);
  return result;
}
