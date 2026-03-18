/*
 * XREFs of ?vIFIMetricsToETM@@YGXPAU_EXTTEXTMETRIC@@AAVRFONTOBJ@@AAVDCOBJ@@PAU_IFIMETRICS@@@Z @ 0x206A4E
 * Callers:
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z @ 0x848CE (-vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge vIFIMetricsToETM(
        RFONTOBJ *a1@<edx>,
        _WORD *a2@<ecx>,
        struct _EXTTEXTMETRIC *a3,
        struct _IFIMETRICS *a4,
        struct DCOBJ *a5,
        struct _IFIMETRICS *a6)
{
  int v8; // eax
  _WORD *v9; // ebx
  int v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // kr08_8
  __int64 v17; // rax
  __int64 v18; // kr10_8
  __int64 v19; // rax
  __int16 v20; // ax
  _DWORD v21[3]; // [esp+Ch] [ebp-74h] BYREF
  struct _IFIMETRICS *v22; // [esp+18h] [ebp-68h]
  int v23; // [esp+1Ch] [ebp-64h] BYREF
  int v24; // [esp+20h] [ebp-60h]
  _BYTE v25[4]; // [esp+24h] [ebp-5Ch] BYREF
  RFONTOBJ *v26; // [esp+28h] [ebp-58h]
  struct _EXTTEXTMETRIC *v27; // [esp+2Ch] [ebp-54h] BYREF
  _DWORD v28[15]; // [esp+30h] [ebp-50h] BYREF
  int v29[2]; // [esp+6Ch] [ebp-14h] BYREF
  int v30[2]; // [esp+74h] [ebp-Ch] BYREF

  v27 = a3;
  v26 = a1;
  v22 = a4;
  IFIOBJR::IFIOBJR((IFIOBJR *)&v28[1], a4, a1, a3);
  *a2 = 52;
  v8 = *(_DWORD *)a1;
  v9 = (_WORD *)v28[1];
  v10 = (*(_DWORD *)(v8 + 328) + 8) >> 4;
  if ( (*(_DWORD *)(v28[1] + 48) & 0x3000010) != 0 )
  {
    v12 = *(_DWORD *)(v8 + 384);
    if ( v12 == 0x80000000 )
    {
      memset(v28, 0, sizeof(v28));
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v21, (struct MATRIX *)v28, 8u);
      RFONTOBJ::vSetNotionalToDevice(v26, (struct EXFORMOBJ *)v21);
      v13 = (__int16)v9[28];
      LODWORD(v14) = v29;
      ltoef_c(v14, 0, v29);
      LODWORD(v15) = v30;
      ltoef_c(v15, v13, v30);
      if ( (*(_BYTE *)(v21[0] + 56) & 2) == 0 )
        EXFORMOBJ::bXform((EXFORMOBJ *)v21, (struct VECTORFL *)v29, (struct VECTORFL *)v29, 1u);
      v23 = 0;
      v24 = 0;
      EFLOAT::eqLength(&v23, v25, v29);
      v11 = lCvt(v23, v24, 1);
    }
    else
    {
      v11 = v10 - v12;
    }
  }
  else
  {
    v11 = v10 - v28[11];
  }
  v27 = *(struct _EXTTEXTMETRIC **)(*(_DWORD *)v27 + 36);
  v26 = (RFONTOBJ *)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v27);
  v16 = (int)v26 / 2;
  v27 = (struct _EXTTEXTMETRIC *)HIDWORD(v16);
  v17 = 72LL * v11;
  v18 = v17 + v16;
  if ( (((unsigned __int64)(v17 + v16) >> 32) & 0x80000000) != 0LL
    || (v18 < 0) ^ __OFADD__(v17, (int)v26 / 2) | (HIDWORD(v18) == 0) && (unsigned int)v18 <= 0x7FFFFFFF )
  {
    LODWORD(v19) = (int)v18 / (int)v26;
  }
  else
  {
    v19 = v18 / (int)v26;
  }
  a2[1] = 20 * v19;
  a2[2] = 0;
  a2[3] = v9[28];
  a2[4] = v9[29];
  a2[5] = 0x4000;
  a2[6] = v9[28];
  a2[7] = v9[35];
  a2[8] = v9[41];
  a2[9] = v9[35];
  a2[10] = -v9[36];
  a2[11] = -v9[16];
  a2[12] = v9[49];
  a2[13] = v9[45];
  a2[14] = v9[47];
  a2[15] = v9[43];
  a2[16] = v9[51];
  a2[17] = v9[50];
  a2[18] = (__int16)v9[51] >> 1;
  a2[19] = v9[51];
  v20 = (__int16)v9[50] >> 1;
  a2[21] = v20;
  a2[20] = v20;
  a2[22] = v9[53];
  a2[23] = v9[52];
  a2[24] = v22->cKerningPairs;
  a2[25] = 0;
}
