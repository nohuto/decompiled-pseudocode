/*
 * XREFs of ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A895C
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C00E3C88 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00A1E3C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00DC92C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00DD304 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00E3C2C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C00FE1F4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bSetNewFDX(RFONTOBJ *this, struct XDCOBJ *a2, struct _FD_XFORM *a3, unsigned int a4)
{
  __int64 v7; // r10
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // esi
  int v11; // r14d
  __int64 v12; // r13
  struct LFONT *v13; // rbx
  __int64 v14; // rcx
  struct PFE *v16; // [rsp+60h] [rbp-29h]
  __int64 v17; // [rsp+68h] [rbp-21h] BYREF
  struct _POINTL v18; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v19[16]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v20; // [rsp+88h] [rbp-1h] BYREF
  int v21; // [rsp+98h] [rbp+Fh]
  unsigned int v22; // [rsp+F0h] [rbp+67h]
  __int64 v23; // [rsp+F8h] [rbp+6Fh] BYREF
  struct _FD_XFORM *v24; // [rsp+100h] [rbp+77h]
  unsigned int v25; // [rsp+108h] [rbp+7Fh]

  v25 = a4;
  v24 = a3;
  v23 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, a2, 516);
  v7 = *(_QWORD *)this;
  v22 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  v8 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0x3001E000;
  v18 = *(struct _POINTL *)(*(_QWORD *)this + 648LL);
  v16 = *(struct PFE **)(v7 + 120);
  if ( v7 )
    RFONTOBJ::vReleaseCache(this);
  v17 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = *(_QWORD *)this;
  v10 = 1;
  v11 = 0;
  v21 = 0;
  v12 = *(_QWORD *)(v9 + 128);
  v20 = v12;
  ++*(_DWORD *)(v12 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  *(_QWORD *)this = 0LL;
  if ( (unsigned int)RFONTOBJ::bFindRFONT(
                       this,
                       v24,
                       v8,
                       v22,
                       (struct PDEVOBJ *)&v23,
                       (struct EXFORMOBJ *)v19,
                       v16,
                       0,
                       *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL),
                       0,
                       a4) )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
  }
  else
  {
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v17,
      *(struct HLFONT__ **)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 296LL),
      (struct PDEVOBJ *)&v23);
    v13 = (struct LFONT *)v17;
    if ( v17
      && (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         (struct PDEVOBJ *)&v23,
                         (struct tagENUMLOGFONTEXDVW *)(v17 + 276),
                         v16,
                         v24,
                         &v18,
                         v8,
                         v22,
                         0,
                         0,
                         v25) )
    {
      v14 = *(_QWORD *)this;
      v11 = 1;
      v21 = 1;
      GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    }
    else
    {
      *(_QWORD *)this = 0LL;
      v10 = 0;
    }
    if ( v13 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
  }
  if ( v12 && !v11 )
    PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v20);
  return v10;
}
