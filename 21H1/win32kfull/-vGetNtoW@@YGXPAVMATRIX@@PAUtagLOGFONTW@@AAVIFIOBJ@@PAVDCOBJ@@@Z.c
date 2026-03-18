/*
 * XREFs of ?vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z @ 0x247A2E
 * Callers:
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

void __userpurge vGetNtoW(
        __int64 a1@<edx:eax>,
        _DWORD *a2@<ecx>,
        struct MATRIX *a3,
        struct tagLOGFONTW *a4,
        struct IFIOBJ *a5,
        struct DCOBJ *a6)
{
  struct tagLOGFONTW *v7; // esi
  struct MATRIX *v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // esi
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // edi
  int v18; // ecx
  __int64 v19; // rax
  EFLOAT *v20; // ecx
  unsigned int v21; // esi
  __int64 v22; // rax
  int v23; // eax
  _BYTE v24[12]; // [esp+10h] [ebp-38h] BYREF
  __int64 v25; // [esp+1Ch] [ebp-2Ch] BYREF
  __int64 v26; // [esp+24h] [ebp-24h] BYREF
  int v27; // [esp+2Ch] [ebp-1Ch] BYREF
  int v28; // [esp+30h] [ebp-18h]
  int v29; // [esp+34h] [ebp-14h] BYREF
  int v30; // [esp+38h] [ebp-10h]
  int v31; // [esp+3Ch] [ebp-Ch] BYREF
  int v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h]

  v7 = a4;
  v33 = HIDWORD(a1);
  LODWORD(a1) = *(_DWORD *)HIDWORD(a1);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( !(_DWORD)a1 )
    LODWORD(a1) = lGetDefaultWorldHeight((DC **)a4);
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v8 = a3;
  if ( (int)a1 <= 0 )
  {
    if ( (int)a1 < 0 )
    {
      LODWORD(a1) = -(int)a1;
      ltoef_c(a1, a1, (int *)&v26);
      LODWORD(v10) = *(__int16 *)(*(_DWORD *)v8 + 56);
      ltoef_c(v10, v10, &v27);
    }
  }
  else
  {
    ltoef_c(a1, a1, (int *)&v26);
    LODWORD(v9) = *(__int16 *)(*(_DWORD *)v8 + 60);
    ltoef_c(v9, v9 + *(__int16 *)(*(_DWORD *)v8 + 62), &v27);
  }
  divff3_c(&v29, (int *)&v26, &v27);
  v11 = *(_DWORD *)(v33 + 4);
  if ( v11 && (v12 = *(unsigned int *)v8, v27 = 0, v28 = 0, v26 = 0LL, *(__int16 *)(v12 + 76) >= 0) )
  {
    if ( v11 < 0 )
      v11 = -v11;
    LODWORD(v12) = &v27;
    ltoef_c(v12, v11, &v27);
    LODWORD(v13) = *(__int16 *)(*(_DWORD *)v8 + 76);
    ltoef_c(v13, v13, (int *)&v26);
    divff3_c(&v31, &v27, (int *)&v26);
  }
  else
  {
    v31 = v29;
    v32 = v30;
  }
  a3 = *(struct MATRIX **)(v7->lfHeight + 36);
  if ( a3 )
  {
    v14 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a3);
    if ( v14 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a3) )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a3);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a3);
    }
  }
  v15 = v33;
  v16 = a2 + 2;
  v17 = a2 + 4;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[6] = 0;
  a2[7] = 0;
  v18 = *(_DWORD *)(v15 + 12);
  if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) != 0 )
    v18 = 3600 - v18;
  LODWORD(v19) = lNormAngle(v18);
  if ( !(_DWORD)v19 )
  {
    v20 = (EFLOAT *)(a2 + 6);
    *a2 = v31;
    a2[1] = v32;
    a2[6] = v29;
    a2[7] = v30;
    if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) != 0 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (_DWORD)v19 == 900 )
  {
    *v16 = v31;
    a2[3] = v32;
    *v17 = v29;
    a2[5] = v30;
    if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) == 0 )
      EFLOAT::vNegate((EFLOAT *)(a2 + 2));
    v20 = (EFLOAT *)(a2 + 4);
  }
  else
  {
    if ( (_DWORD)v19 == 1800 )
    {
      *a2 = v31;
      a2[1] = v32;
      a2[6] = v29;
      a2[7] = v30;
      EFLOAT::vNegate((EFLOAT *)a2);
      if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) == 0 )
        goto LABEL_34;
    }
    else
    {
      if ( (_DWORD)v19 == 2700 )
      {
        *v16 = v31;
        a2[3] = v32;
        *v17 = v29;
        a2[5] = v30;
        if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) == 0 )
          goto LABEL_34;
        v20 = (EFLOAT *)(a2 + 2);
        goto LABEL_33;
      }
      ltoef_c(v19, v19, &v27);
      EFLOATEXT::operator/=(&v27, 10);
      v26 = efCos(v27, v28);
      v25 = efSin(v27, v28);
      mulff3_c(a2, &v31, &v26);
      mulff3_c(a2 + 6, &v29, &v26);
      mulff3_c(a2 + 2, &v31, &v25);
      mulff3_c(a2 + 4, &v29, &v25);
      EFLOAT::vNegate((EFLOAT *)(a2 + 4));
      if ( (*(_BYTE *)(*(_DWORD *)(a4->lfHeight + 1020) + 340) & 0x40) != 0 )
        goto LABEL_34;
      EFLOAT::vNegate((EFLOAT *)(a2 + 2));
    }
    v20 = (EFLOAT *)(a2 + 6);
  }
LABEL_33:
  EFLOAT::vNegate(v20);
LABEL_34:
  v21 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a3);
  if ( v21 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a3) )
  {
    LODWORD(v22) = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a3);
    ltoef_c(v22, v22, &v27);
    v23 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a3);
    EFLOATEXT::operator/=(&v27, v23);
    if ( *(_DWORD *)(v33 + 4) )
      divff3_c(a2 + 2, a2 + 2, &v27);
    else
      mulff3_c(a2, a2, &v27);
    mulff3_c(a2 + 4, a2 + 4, &v27);
  }
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v24, (struct MATRIX *)a2, 0);
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v24);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v24, 8u);
}
