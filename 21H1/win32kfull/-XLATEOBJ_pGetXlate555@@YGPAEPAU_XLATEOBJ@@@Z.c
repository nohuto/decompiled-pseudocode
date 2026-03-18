/*
 * XREFs of ?XLATEOBJ_pGetXlate555@@YGPAEPAU_XLATEOBJ@@@Z @ 0x225AD1
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BCF1 (-vConvertAndSaveBGRATo4@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BDBD (-vConvertAndSaveBGRATo8@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x230289 (-vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x23043F (-vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x23064A (-vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vFillGRectDIB1@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23AF80 (-vFillGRectDIB1@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB4@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23C05C (-vFillGRectDIB4@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB8@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23C3B4 (-vFillGRectDIB8@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vGradientFill1@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23CE1C (-vGradientFill1@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z.c)
 *     ?vGradientFill4@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23DB4C (-vGradientFill4@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z.c)
 *     ?vGradientFill8@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23DDDF (-vGradientFill8@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?pGetRGBXlate@XEPALOBJ@@QAEPAEXZ @ 0x222F44 (-pGetRGBXlate@XEPALOBJ@@QAEPAEXZ.c)
 */

unsigned __int8 *__usercall XLATEOBJ_pGetXlate555@<eax>(int a1@<ecx>, unsigned int *a2@<ebx>)
{
  unsigned __int8 *result; // eax
  int v3; // ecx
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  result = 0;
  if ( !a1 || (*(_BYTE *)(a1 + 4) & 7) != 0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 44);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 )
      return result;
    v4 = v3;
  }
  return XEPALOBJ::pGetRGBXlate((XEPALOBJ *)&v4, a2);
}
