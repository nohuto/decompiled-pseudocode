/*
 * XREFs of ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 *     _DEVLOCKOBJ_bDisposeTrgDcoWrap@4 @ 0x5A8B0 (_DEVLOCKOBJ_bDisposeTrgDcoWrap@4.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0 (_DEVLOCKOBJ_bPrepareTrgDcoWrap@8.c)
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 *     _GreResetDCInternal@20 @ 0x201023 (_GreResetDCInternal@20.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?vClearDpiScaling@DC@@QAEXXZ @ 0x8E326 (-vClearDpiScaling@DC@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0 (-vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z.c)
 */

void __thiscall DC::pSurface(DC *this, struct SURFACE *a2)
{
  DC *v2; // ecx

  *((_DWORD *)this + 126) = a2;
  if ( DC::bDpiScaledSurface(this) )
    DC::vSetDpiScaling(*((_DWORD *)a2 + 115), *((_DWORD *)a2 + 116), *((_DWORD *)a2 + 117), *((_DWORD *)a2 + 118));
  else
    DC::vClearDpiScaling(v2);
}
