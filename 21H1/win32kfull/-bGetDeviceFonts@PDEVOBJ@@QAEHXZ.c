/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A
 * Callers:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 *     ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996 (-dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 */

int __thiscall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  volatile unsigned int *v3; // [esp+0h] [ebp-8h]
  struct PFT *v4; // [esp+4h] [ebp-4h] BYREF

  SETFLAG((volatile signed __int32 *)(*(_DWORD *)this + 24), 1, 64, v3, (unsigned int)v4);
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_DWORD *)this + 1400) )
  {
    v4 = gpPFTDevice;
    if ( !DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v4, this) )
      *(_DWORD *)(*(_DWORD *)this + 1400) = 0;
  }
  return 1;
}
