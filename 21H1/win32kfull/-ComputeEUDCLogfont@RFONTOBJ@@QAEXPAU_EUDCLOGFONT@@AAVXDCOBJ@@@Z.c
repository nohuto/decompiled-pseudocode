/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5
 * Callers:
 *     ?bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z @ 0x2078D5 (-bInitSystemTT@RFONTOBJ@@QAEHAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

void __thiscall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, HDC **a3)
{
  RFONTOBJ *v3; // edi
  HDC *v4; // edx
  int v5; // esi
  HDC v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // esi
  int v11; // eax
  DC *v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int *v17; // eax
  int *v18; // ecx
  int v19; // eax
  int *v20; // edx
  int v21; // eax
  int v22; // eax
  signed int v23; // ecx
  struct HLFONT__ *v24; // edx
  int v25; // eax
  int v26; // eax
  int *v27; // edx
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // edx
  unsigned int v31; // ecx
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // [esp-4h] [ebp-6Ch]
  _DWORD v40[14]; // [esp+Ch] [ebp-5Ch] BYREF
  _DWORD v41[3]; // [esp+44h] [ebp-24h] BYREF
  int v42; // [esp+50h] [ebp-18h] BYREF
  RFONTOBJ *v43; // [esp+54h] [ebp-14h]
  int v44; // [esp+58h] [ebp-10h] BYREF
  struct HLFONT__ *v45; // [esp+5Ch] [ebp-Ch] BYREF
  int v46; // [esp+60h] [ebp-8h] BYREF
  int v47; // [esp+64h] [ebp-4h]
  struct _EUDCLOGFONT *v48; // [esp+70h] [ebp+8h]
  struct _EUDCLOGFONT *v49; // [esp+70h] [ebp+8h]

  v3 = this;
  v4 = *a3;
  v43 = this;
  v45 = (struct HLFONT__ *)v4[9];
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v46, (struct HLFONT__ *)v4[388], &v45);
  v45 = *(struct HLFONT__ **)v3;
  v5 = *((_DWORD *)v45 + 20);
  v6 = **a3;
  memset(v41, 0, sizeof(v41));
  XDCOBJ::vLock((XDCOBJ *)v41, v6);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v40,
    *(const struct _IFIMETRICS **)(v5 + 20),
    (struct RFONTOBJ *)&v45,
    (struct DCOBJ *)v41);
  v9 = v46;
  if ( !v46 )
    goto LABEL_61;
  v47 = v40[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v40[0] + 52);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_DWORD *)v3 + 12);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 292);
  ftoef_c(v8, v7, 1065353216, (int *)a2 + 7);
  v11 = *(_DWORD *)(v47 + 48) & 0x3000010;
  v46 = *(_DWORD *)(v47 + 48) & 0x401000;
  *((_DWORD *)a2 + 6) = v11;
  v12 = (DC *)*a3;
  if ( v11 )
  {
    v45 = *(struct HLFONT__ **)v3;
    v48 = (struct _EUDCLOGFONT *)*((_DWORD *)v45 + 82);
    if ( DC::bWorldToDeviceIdentity(v12) )
    {
      v21 = ((int)v48 + 8) >> 4;
    }
    else
    {
      v21 = lCvt(v20[170], v20[171], (int)v48);
      v20 = *(int **)v3;
      v45 = *(struct HLFONT__ **)v3;
    }
    v49 = (struct _EUDCLOGFONT *)v21;
    if ( v20[96] == 0x80000000 )
    {
      v22 = lCvt(*((_DWORD *)v45 + 49), *((_DWORD *)v45 + 50), *(__int16 *)(v47 + 56));
      v23 = (signed int)v49;
      v3 = v43;
      v24 = (struct _EUDCLOGFONT *)((char *)v49 - v22);
      v45 = (struct _EUDCLOGFONT *)((char *)v49 - v22);
      if ( !v46 || gbJpn98FixPitch )
        goto LABEL_34;
      v25 = lCvt(*(_DWORD *)(*(_DWORD *)v43 + 188), *(_DWORD *)(*(_DWORD *)v43 + 192), v40[9]);
    }
    else
    {
      v24 = (struct HLFONT__ *)lCvt(v20[170], v20[171], v20[96]);
      v45 = v24;
      if ( !v46 || gbJpn98FixPitch )
        goto LABEL_33;
      v25 = lCvt(*(_DWORD *)(*(_DWORD *)v3 + 672), *(_DWORD *)(*(_DWORD *)v3 + 676), *(_DWORD *)(*(_DWORD *)v3 + 392));
    }
    v24 = v45;
    *((_DWORD *)a2 + 2) = v25;
LABEL_33:
    v23 = (signed int)v49;
LABEL_34:
    if ( (int)v24 >= 0 )
      v26 = v23 - (_DWORD)v24;
    else
      v26 = (int)v24 + v23;
    v27 = (int *)((char *)a2 + 12);
    *((_DWORD *)a2 + 3) = v26;
    if ( v26 <= 13 )
    {
      if ( v26 == 11 )
      {
        v39 = 12;
        goto LABEL_42;
      }
      if ( v26 == 13 )
      {
        v39 = 15;
LABEL_42:
        if ( v23 >= v39 )
          *v27 = v39;
      }
    }
    if ( *(_DWORD *)(v9 + 284) && !v46 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v44 = 0;
      v45 = 0;
      ftoef_c(v23, (int)v27, *(_DWORD *)(*(_DWORD *)v3 + 88), &v44);
      v42 = 0;
      v43 = 0;
      ftoef_c(v29, v28, *(_DWORD *)(*(_DWORD *)v3 + 104), &v42);
      if ( !v42 && !v43 )
      {
        ftoef_c(v31, v30, *(_DWORD *)(*(_DWORD *)v3 + 92), &v44);
        ftoef_c(v33, v32, *(_DWORD *)(*(_DWORD *)v3 + 108), &v42);
      }
      divff3_c((_DWORD *)a2 + 7, &v44, &v42);
    }
    goto LABEL_50;
  }
  if ( !DC::bWorldToDeviceIdentity(v12) )
  {
    if ( v13 )
      *((_DWORD *)a2 + 2) = lCvt(
                              *(_DWORD *)(*(_DWORD *)v3 + 672),
                              *(_DWORD *)(*(_DWORD *)v3 + 676),
                              16 * *(__int16 *)(v47 + 76));
    v18 = *(int **)v3;
    if ( (ulFontLinkControl & 0x4000) != 0 )
      v19 = v18[82];
    else
      v19 = v18[80];
    v15 = lCvt(v18[170], v18[171], v19);
    goto LABEL_20;
  }
  v14 = v47;
  if ( v13 )
    *((_DWORD *)a2 + 2) = *(__int16 *)(v47 + 76);
  if ( __wcsicmp((const wchar_t *)(v14 + *(_DWORD *)(v14 + 16)), L"Ms Sans Serif") )
  {
    v17 = *(int **)v3;
    if ( (ulFontLinkControl & 0x4000) != 0 )
      v16 = v17[82];
    else
      v16 = v17[80];
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)v3 + 328) - 193) <= 0x4E )
    {
      v15 = 12;
      goto LABEL_20;
    }
    v16 = *(_DWORD *)(*(_DWORD *)v3 + 320);
  }
  v15 = (v16 + 8) >> 4;
LABEL_20:
  *((_DWORD *)a2 + 3) = v15;
  if ( v46 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_DWORD *)v3 + 648);
LABEL_50:
  v34 = *(_DWORD *)(v47 + 48);
  if ( (v34 & 0x10) == 0 )
  {
    if ( (v34 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v35 = lNormAngle(*((_DWORD *)a2 + 5));
        v36 = 900 * (v35 / 0x384);
        *((_DWORD *)a2 + 5) = v36;
        if ( ((_BYTE)(*a3)[255][85] & 0x40) != 0 )
        {
          if ( v35 % 0x384 )
            *((_DWORD *)a2 + 5) = lNormAngle(v36 + 900);
        }
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v37 = lNormAngle(*((_DWORD *)a2 + 4));
        v38 = 900 * (v37 / 900);
        *((_DWORD *)a2 + 4) = v38;
        if ( ((_BYTE)(*a3)[255][85] & 0x40) != 0 )
        {
          if ( v37 % 900 )
            *((_DWORD *)a2 + 4) = lNormAngle(v38 + 900);
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 5) = 0;
      *((_DWORD *)a2 + 4) = 0;
    }
  }
LABEL_61:
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  v45 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
