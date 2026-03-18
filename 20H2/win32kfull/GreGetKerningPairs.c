/*
 * XREFs of GreGetKerningPairs @ 0x1C0134784
 * Callers:
 *     NtGdiGetKerningPairs @ 0x1C0134690 (NtGdiGetKerningPairs.c)
 *     GreGetCharacterPlacementW @ 0x1C02BAC10 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00646D8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01349A0 (-bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0134C50 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 */

__int64 __fastcall GreGetKerningPairs(HDC a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // r14
  char v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // r9
  struct _FD_KERNINGPAIR *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // [rsp+20h] [rbp-68h] BYREF
  float v17; // [rsp+28h] [rbp-60h] BYREF
  int v18; // [rsp+2Ch] [rbp-5Ch]
  struct _FD_KERNINGPAIR *v19; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( !v22[0] )
    goto LABEL_27;
  v5 = 0;
  v17 = 0.0;
  v16 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v22, 0, 2u) )
    GreAcquireSemaphore(v16[63]);
  if ( !v16
    || (v20[0] = v16[15],
        !bGetNtoWScale((struct EFLOAT *)&v17, (struct DCOBJ *)v22, (struct RFONTOBJ *)&v16, (struct PFEOBJ *)v20)) )
  {
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
LABEL_27:
    DCOBJ::~DCOBJ((DCOBJ *)v22);
    return 0LL;
  }
  v6 = (_QWORD *)v16[15];
  v7 = v16[16];
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 88) + 40LL) & 0x8000) != 0 )
  {
    v20[0] = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v5 = 1;
    ++*(_DWORD *)(v7 + 68);
    SEMOBJ::vUnlock((SEMOBJ *)v20);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
  v20[0] = v6;
  if ( (_DWORD)v4 && a3 )
  {
    v19 = 0LL;
    v9 = PFEOBJ::cKernPairs((PFEOBJ *)v20, &v19);
    if ( v9 < (unsigned int)v4 )
      v4 = v9;
    v10 = a3 + 8 * v4;
    while ( a3 < v10 )
    {
      v11 = v19;
      *(_WORD *)a3 = v19->wcFirst;
      *(_WORD *)(a3 + 2) = v11->wcSecond;
      LODWORD(v12) = 0;
      *(float *)&v16 = (float)v11->fwdKern * v17;
      v21 = 0LL;
      v13 = (unsigned __int8)((int)v16 >> 23) - 118;
      v18 = v13;
      if ( v13 <= 40 )
      {
        v14 = (unsigned int)v16 & 0x7FFFFF | 0x800000LL;
        v21 = v14;
        if ( v13 < 0 )
          v15 = v14 >> (118 - (unsigned __int8)((int)v16 >> 23));
        else
          v15 = v14 << v13;
        v21 = v15 + 0x80000000LL;
        v12 = (v15 + 0x80000000LL) >> 32;
        v18 = v12;
        if ( (int)v16 < 0 )
          LODWORD(v12) = -(int)v12;
      }
      *(_DWORD *)(a3 + 4) = v12;
      ++v19;
      a3 += 8LL;
      v22[2] = a3;
    }
  }
  else
  {
    LODWORD(v4) = *(_DWORD *)(v6[4] + 164LL);
  }
  if ( v5 )
  {
    v20[0] = *v6;
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v20);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return (unsigned int)v4;
}
