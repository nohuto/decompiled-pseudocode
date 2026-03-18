/*
 * XREFs of _FLOATOBJ_MulLong@8 @ 0xCC9C8
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

void __stdcall FLOATOBJ_MulLong(PFLOATOBJ pf, LONG l)
{
  _DWORD v2[2]; // [esp+0h] [ebp-8h] BYREF

  v2[0] = 0;
  v2[1] = 0;
  ltoef_c(l, v2);
  mulff3_c(pf, pf, v2);
}
