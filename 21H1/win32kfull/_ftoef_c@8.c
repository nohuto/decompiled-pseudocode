/*
 * XREFs of _ftoef_c@8 @ 0xEEEB1
 * Callers:
 *     ?vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z @ 0x84912 (-vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     _GreSetFontXform@12 @ 0x1EBDFB (_GreSetFontXform@12.c)
 *     _FLOATOBJ_AddFloat@8 @ 0x1F3001 (_FLOATOBJ_AddFloat@8.c)
 *     _FLOATOBJ_DivFloat@8 @ 0x1F3067 (_FLOATOBJ_DivFloat@8.c)
 *     _FLOATOBJ_MulFloat@8 @ 0x1F3219 (_FLOATOBJ_MulFloat@8.c)
 *     _FLOATOBJ_SetFloat@8 @ 0x1F3262 (_FLOATOBJ_SetFloat@8.c)
 *     _FLOATOBJ_SubFloat@8 @ 0x1F3294 (_FLOATOBJ_SubFloat@8.c)
 *     ?cjGetBrushOrPen@@YGJPAXH0@Z @ 0x1FD0B9 (-cjGetBrushOrPen@@YGJPAXH0@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     _GreSetMiterLimit@12 @ 0x211440 (_GreSetMiterLimit@12.c)
 *     ??0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234B5B (--0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?efNextStyleLength@STYLER@@IAE?AVEFLOAT@@XZ @ 0x23600C (-efNextStyleLength@STYLER@@IAE-AVEFLOAT@@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall ftoef_c(unsigned int a1, int a2, int a3, int *a4)
{
  int v4; // ecx
  int result; // eax

  v4 = (unsigned __int8)(__PAIR64__(a1, a3) >> 23);
  if ( v4 )
  {
    result = ((a3 >> 31) ^ (((a3 & 0x7FFFFF) << 7) | 0x40000000)) - (a3 >> 31);
    v4 -= 125;
  }
  else
  {
    result = 0;
  }
  *a4 = result;
  a4[1] = v4;
  return result;
}
