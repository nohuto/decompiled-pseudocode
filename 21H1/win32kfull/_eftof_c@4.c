/*
 * XREFs of _eftof_c@4 @ 0xEEF63
 * Callers:
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     _FLOATOBJ_GetFloat@4 @ 0x1F312A (_FLOATOBJ_GetFloat@4.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QAEXAAVXDCOBJ@@JJPAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x23786C (-vWidenSetupForFrameRgn@EPATHOBJ@@QAEXAAVXDCOBJ@@JJPAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772 (-bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall eftof_c(int *a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  bool v5; // of
  int v6; // edx

  result = 0;
  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( *a1 < 0 )
    {
      result = 0x80000000;
      v2 = -v2;
    }
    v4 = __CFSHR__(v2 & 0x3FFFFFFF, 7) + ((v2 & 0x3FFFFFFFu) >> 7);
    if ( (v4 & 0x800000) != 0 )
    {
      v4 = 0;
      v5 = __OFADD__(1, v3++);
      if ( v5 )
        return 0x7FFFFFFF;
    }
    v5 = __OFADD__(125, v3);
    v6 = v3 + 125;
    if ( v5 )
      return 0x7FFFFFFF;
    else
      return (v6 << 23) | v4 | result;
  }
  return result;
}
