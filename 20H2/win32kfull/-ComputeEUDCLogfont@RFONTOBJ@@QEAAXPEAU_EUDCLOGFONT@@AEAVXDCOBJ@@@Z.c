/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0023EE8
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A69A4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0026E20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C005D6E0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C012E68C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // rsi
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r13d
  bool v12; // zf
  __int64 v13; // rcx
  _DWORD *v14; // r14
  int v15; // esi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm2_4
  float v29; // xmm1_4
  __int64 v30; // rdx
  unsigned int v31; // r8d
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // [rsp+20h] [rbp-60h]
  _QWORD v37[3]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v38[5]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39; // [rsp+C0h] [rbp+40h] BYREF
  struct XDCOBJ *v40; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+58h] BYREF

  v40 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1728LL);
  v39 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v41, v6, (struct PDEVOBJ *)&v39);
  v7 = *(HDC **)v4;
  v39 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v39 + 120);
  DCOBJ::DCOBJ((DCOBJ *)v37, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v38,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v39,
    (struct DCOBJ *)v37);
  v9 = v41;
  if ( !v41 )
    goto LABEL_15;
  v10 = v38[0];
  v36 = v38[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v38[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48) & 0x401000;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  v13 = 2050LL;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
    {
      if ( v11 )
      {
        LODWORD(v40) = 0;
        bFToL(2050LL, &v40, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v40;
      }
      v27 = *(_QWORD *)this;
      LODWORD(v40) = 0;
      bFToL(v27, &v40, 0LL);
      *((_DWORD *)a2 + 3) = (_DWORD)v40;
      goto LABEL_37;
    }
    if ( v11 )
      *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
    v23 = _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif");
    v24 = *(_QWORD *)this;
    if ( v23 )
    {
      if ( (ulFontLinkControl & 0x4000) != 0 )
      {
        v26 = *(_DWORD *)(v24 + 324);
LABEL_32:
        v25 = (v26 + 8) >> 4;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v24 + 324) - 193) <= 0x4E )
    {
      v25 = 12;
LABEL_33:
      *((_DWORD *)a2 + 3) = v25;
LABEL_37:
      if ( v11 )
        *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
      goto LABEL_14;
    }
    v26 = *(_DWORD *)(v24 + 316);
    goto LABEL_32;
  }
  v14 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    v15 = (*(_DWORD *)(*(_QWORD *)this + 324LL) + 8) >> 4;
  }
  else
  {
    LODWORD(v39) = 0;
    bFToL(2050LL, &v39, 0LL);
    v15 = v39;
  }
  v16 = v14[95];
  LODWORD(v39) = 0;
  if ( v16 == 0x80000000 )
  {
    LODWORD(v41) = v14[54];
    bFToL(v13, &v39, 0LL);
    v19 = v15 - v39;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v18 )
    {
      LODWORD(v41) = v14[53];
LABEL_44:
      LODWORD(v39) = v18 & v39;
      bFToL(v17, &v39, v18);
      *((_DWORD *)a2 + 2) = v39;
    }
  }
  else
  {
    bFToL(v13, &v39, 0LL);
    v19 = v39;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v18 )
      goto LABEL_44;
  }
  v20 = v19 + v15;
  if ( v19 >= 0 )
    v20 = v15 - v19;
  *((_DWORD *)a2 + 3) = v20;
  if ( v20 > 13 )
    goto LABEL_12;
  if ( v20 != 11 )
  {
    if ( v20 != 13 )
      goto LABEL_12;
    v22 = 13;
    if ( v15 >= 15 )
      v22 = 15;
    goto LABEL_22;
  }
  v22 = 12;
  if ( v15 >= 12 )
LABEL_22:
    *((_DWORD *)a2 + 3) = v22;
LABEL_12:
  if ( *(_DWORD *)(v9 + 280) && !v11 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v28 = *(float *)(*(_QWORD *)this + 152LL);
    v29 = *(float *)(*(_QWORD *)this + 136LL);
    *(float *)&v39 = v28;
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v39) )
    {
      v29 = *(float *)(v30 + 140);
      v28 = *(float *)(v30 + 156);
    }
    *((float *)a2 + 7) = v29 / v28;
  }
  v4 = v40;
LABEL_14:
  v21 = *(_DWORD *)(v36 + 48);
  if ( (v21 & 0x10) == 0 )
  {
    if ( (v21 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v31 = ((__int64 (*)(void))lNormAngle)();
        v32 = 900 * (v31 / 0x384);
        *((_DWORD *)a2 + 5) = v32;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v31 != v32 )
          *((_DWORD *)a2 + 5) = lNormAngle(v32 + 900);
      }
      v33 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v33 )
      {
        v34 = lNormAngle(v33);
        v35 = 900 * (v34 / 900);
        *((_DWORD *)a2 + 4) = v35;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v34 != v35 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v35 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_15:
  if ( v37[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  v39 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v39);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
