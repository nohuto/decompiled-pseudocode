/*
 * XREFs of _GreMarkDeletableFont@4 @ 0xDAFD8
 * Callers:
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C (-SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _UserSetFont@16 @ 0xDAD12 (_UserSetFont@16.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 *     ?ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z @ 0xDB07A (-ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x154F27 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YGXPAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z @ 0x15501A (-EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 */

void __thiscall GreMarkDeletableFont(struct HLFONT__ *this)
{
  int v2; // edx
  struct LFONT *v3; // esi
  int v4; // [esp+8h] [ebp-4h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v4, this, 0);
  v3 = (struct LFONT *)v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 20) & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(this, v2);
    }
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
