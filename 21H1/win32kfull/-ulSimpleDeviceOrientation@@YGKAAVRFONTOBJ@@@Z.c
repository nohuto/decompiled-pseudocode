/*
 * XREFs of ?ulSimpleDeviceOrientation@@YGKAAVRFONTOBJ@@@Z @ 0xCC924
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A (-lSignum@EFLOAT@@QAEJXZ.c)
 */

int __thiscall ulSimpleDeviceOrientation(void *this)
{
  int v1; // edx
  __int16 v2; // si
  int v3; // eax

  v2 = EFLOAT::lSignum((EFLOAT *)(*(_DWORD *)this + 400));
  v3 = EFLOAT::lSignum((EFLOAT *)(v1 + 408));
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)v3) & 1) != 0 )
    return v3 & 0x384 | v2 & 0x708 | -v3 & 0xA8C;
  else
    return 3601;
}
