/*
 * XREFs of ?SETFLAG@@YGXHACKK@Z @ 0x9DB80
 * Callers:
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     _vDisableSynchronize@4 @ 0xAD0E8 (_vDisableSynchronize@4.c)
 *     _vEnableSynchronize@4 @ 0xAD9DA (_vEnableSynchronize@4.c)
 *     _UpdateGammaRampOnDevice@8 @ 0xB00CE (_UpdateGammaRampOnDevice@8.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 *     _SimBitBlt@48 @ 0x1D49E6 (_SimBitBlt@48.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ @ 0x1E98A3 (-bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x20B9D7 (-UMPDDrvEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDE.c)
 * Callees:
 *     <none>
 */

void __userpurge SETFLAG(
        volatile signed __int32 *a1@<edx>,
        int a2@<ecx>,
        int a3,
        volatile unsigned int *a4,
        unsigned int a5)
{
  signed __int32 v6; // esi
  signed __int32 v7; // ecx

  do
  {
    v6 = *a1;
    if ( a2 )
      v7 = a3 | v6;
    else
      v7 = v6 & ~a3;
  }
  while ( _InterlockedCompareExchange(a1, v7, v6) != v6 );
}
