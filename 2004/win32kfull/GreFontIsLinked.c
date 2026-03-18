/*
 * XREFs of GreFontIsLinked @ 0x1C01080B8
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C01080A0 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00A1F38 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  char v4; // cl
  _QWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+88h] [rbp+18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( !v5[0] )
    return v1;
  v7 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v7, (struct XDCOBJ *)v5, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v7 + 504));
  if ( v7 )
  {
    v2 = *(_QWORD *)(v7 + 120);
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( !v2 || (*(_DWORD *)(v2 + 12) & 8) != 0 )
      goto LABEL_12;
    if ( *(_DWORD *)(v7 + 708) )
    {
      if ( !gbSystemDBCSFontEnabled )
        goto LABEL_12;
    }
    else if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
    {
      if ( !bFinallyInitializeFontAssocDefault
        || (IFIOBJR::IFIOBJR(
              (IFIOBJR *)v6,
              *(const struct _IFIMETRICS **)(v2 + 32),
              (struct RFONTOBJ *)&v7,
              (struct DCOBJ *)v5),
            v4 = *(_BYTE *)(v6[0] + 44LL),
            v4 == 1)
        || (unsigned __int8)(v4 - 3) <= 0xFBu
        || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v4 + 2) & 0xF) == 0 )
      {
        if ( *(_QWORD *)(v2 + 120) )
          v1 = 1;
        goto LABEL_12;
      }
    }
    v1 = 1;
LABEL_12:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v1;
}
