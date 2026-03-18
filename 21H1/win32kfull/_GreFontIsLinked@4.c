/*
 * XREFs of _GreFontIsLinked@4 @ 0x84558
 * Callers:
 *     _NtGdiFontIsLinked@4 @ 0x84546 (_NtGdiFontIsLinked@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 */

int __thiscall GreFontIsLinked(HDC this)
{
  int v1; // edi
  int v2; // esi
  bool v3; // zf
  char v5; // al
  _DWORD *v6; // [esp+10h] [ebp-48h] BYREF
  _DWORD v7[3]; // [esp+14h] [ebp-44h] BYREF
  _DWORD v8[14]; // [esp+20h] [ebp-38h] BYREF

  v1 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, this);
  if ( !v7[0] )
    return v1;
  v6 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v7, 0, 2u) )
    GreAcquireSemaphore(v6[137]);
  if ( v6 )
  {
    v2 = v6[20];
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( !v2 || (*(_BYTE *)(v2 + 8) & 8) != 0 )
      goto LABEL_14;
    if ( v6[176] )
    {
      v3 = gbSystemDBCSFontEnabled == 0;
    }
    else
    {
      if ( gappfeSysEUDC || dword_27569C )
        goto LABEL_13;
      if ( bFinallyInitializeFontAssocDefault )
      {
        IFIOBJR::IFIOBJR(
          (IFIOBJR *)v8,
          *(const struct _IFIMETRICS **)(v2 + 20),
          (struct RFONTOBJ *)&v6,
          (struct DCOBJ *)v7);
        v5 = *(_BYTE *)(v8[0] + 44);
        if ( (!v5 || v5 == -1 || v5 == 2) && ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v5 + 2) & 0xF) != 0 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(v2 + 76) == 0;
    }
    if ( v3 )
    {
LABEL_14:
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
      goto LABEL_15;
    }
LABEL_13:
    v1 = 1;
    goto LABEL_14;
  }
LABEL_15:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v1;
}
