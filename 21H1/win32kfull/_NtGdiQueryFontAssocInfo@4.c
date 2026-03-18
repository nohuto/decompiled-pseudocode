/*
 * XREFs of _NtGdiQueryFontAssocInfo@4 @ 0x84476
 * Callers:
 *     <none>
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

unsigned int __stdcall NtGdiQueryFontAssocInfo(HDC a1)
{
  int v2; // esi
  char v3; // al
  _DWORD v4[3]; // [esp+0h] [ebp-10h] BYREF
  struct LFONT *v5; // [esp+Ch] [ebp-4h] BYREF

  if ( !a1 )
    return fFontAssocStatus;
  v2 = 0;
  memset(v4, 0, sizeof(v4));
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    a1 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&a1, (struct XDCOBJ *)v4, 0, 2u) )
      GreAcquireSemaphore(*((_DWORD *)a1 + 137));
    if ( a1 )
    {
      v3 = *(_BYTE *)(*(_DWORD *)(*((_DWORD *)a1 + 20) + 20) + 44);
      if ( v3 == (char)0x80 || v3 == -127 || v3 == -120 || v3 == -122 )
      {
        v2 = 2;
      }
      else if ( !v3 && (fFontAssocStatus & 2) != 0
             || v3 == -1 && (fFontAssocStatus & 1) != 0
             || v3 == 2 && (fFontAssocStatus & 4) != 0 )
      {
        LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v5, *(struct HLFONT__ **)(v4[0] + 1552), 0);
        if ( v5 )
        {
          if ( (*((_BYTE *)v5 + 305) & 0x40) != 0 )
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5);
          }
          else
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v5);
            v2 = 1;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v4[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return v2;
}
