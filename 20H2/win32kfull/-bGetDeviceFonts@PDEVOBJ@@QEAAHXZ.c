/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0021028
 * Callers:
 *     GreEnumFonts @ 0x1C001E36C (GreEnumFonts.c)
 *     GreGetTextFaceW @ 0x1C005AF50 (GreGetTextFaceW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00620D4 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C009ED18 (GreGetCharSet.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028A654 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02721F4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v1; // r8
  signed __int32 v3; // ett
  struct PFT *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v3 = *(_DWORD *)(v1 + 40);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 40), v3 | 0x40, v3) );
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_QWORD *)this + 2104LL) )
  {
    v5 = gpPFTDevice;
    if ( !(unsigned int)DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v5, this) )
      *(_DWORD *)(*(_QWORD *)this + 2104LL) = 0;
  }
  return 1LL;
}
