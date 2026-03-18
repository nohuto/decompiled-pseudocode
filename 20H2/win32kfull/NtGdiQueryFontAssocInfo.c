/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C010A630
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0026E20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // ebx
  char v2; // cl
  _QWORD v4[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+10h] BYREF
  struct LFONT *v6; // [rsp+48h] [rbp+18h] BYREF

  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( !v4[0] )
  {
    EngSetLastError(6u);
    v1 = 0;
    goto LABEL_14;
  }
  v5 = 0LL;
  v1 = 2;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v5, (struct XDCOBJ *)v4, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v5 + 504));
  if ( v5 )
  {
    v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 120) + 32LL) + 44LL);
    if ( ((v2 + 0x80) & 0xF6) == 0 && v2 != -119 || v2 == -122 )
      goto LABEL_13;
    if ( !v2 && (fFontAssocStatus & 2) != 0
      || v2 == -1 && (fFontAssocStatus & 1) != 0
      || v2 == 2 && (fFontAssocStatus & 4) != 0 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(v4[0] + 1728LL), 0LL);
      if ( v6 )
      {
        if ( (*((_BYTE *)v6 + 301) & 0x40) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
          v1 = 1;
          goto LABEL_13;
        }
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
      }
    }
  }
  v1 = 0;
LABEL_13:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
LABEL_14:
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v1;
}
