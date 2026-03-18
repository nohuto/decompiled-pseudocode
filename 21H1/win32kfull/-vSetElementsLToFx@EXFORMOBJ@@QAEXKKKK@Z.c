/*
 * XREFs of ?vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z @ 0x84912
 * Callers:
 *     ??0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z @ 0x842BE (--0RESETFCOBJ@@QAE@AAVDCOBJ@@AAVRFONTOBJ@@PAU_MAT2@@HK@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z @ 0x848CE (-vSetNotionalToDevice@RFONTOBJ@@QAEXAAVEXFORMOBJ@@@Z.c)
 *     ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8 (-bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z.c)
 *     ?bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z @ 0x1EB7D0 (-bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z.c)
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 */

void __thiscall EXFORMOBJ::vSetElementsLToFx(
        EXFORMOBJ *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *v6; // eax

  ftoef_c(a2, *(_DWORD *)this);
  ftoef_c(a3, *(_DWORD *)this + 8);
  ftoef_c(a4, *(_DWORD *)this + 16);
  ftoef_c(a5, *(_DWORD *)this + 24);
  v6 = *(_DWORD **)this;
  if ( **(_DWORD **)this )
  {
    v6[1] += 4;
    v6 = *(_DWORD **)this;
  }
  if ( v6[2] )
  {
    v6[3] += 4;
    v6 = *(_DWORD **)this;
  }
  if ( v6[4] )
  {
    v6[5] += 4;
    v6 = *(_DWORD **)this;
  }
  if ( v6[6] )
    v6[7] += 4;
}
