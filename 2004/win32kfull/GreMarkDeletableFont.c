/*
 * XREFs of GreMarkDeletableFont @ 0x1C000CEA4
 * Callers:
 *     DeleteMetricsFont @ 0x1C000AF90 (DeleteMetricsFont.c)
 *     SetIconMetrics @ 0x1C000AFC0 (SetIconMetrics.c)
 *     UserSetFont @ 0x1C000B7BC (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1C000B838 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C000B988 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D70EC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00A1E3C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v4, a1, 0LL);
  v3 = (struct LFONT *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 28) & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(a1, v2);
    }
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
