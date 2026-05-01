/*
 * XREFs of __security_check_cookie @ 0x1800440D0
 * Callers:
 *     sub_180001C5C @ 0x180001C5C (sub_180001C5C.c)
 *     sub_180002070 @ 0x180002070 (sub_180002070.c)
 *     sub_180002780 @ 0x180002780 (sub_180002780.c)
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     sub_180004674 @ 0x180004674 (sub_180004674.c)
 *     sub_180004820 @ 0x180004820 (sub_180004820.c)
 *     sub_180004984 @ 0x180004984 (sub_180004984.c)
 *     sub_180004CAC @ 0x180004CAC (sub_180004CAC.c)
 *     sub_180005C04 @ 0x180005C04 (sub_180005C04.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 *     sub_180006368 @ 0x180006368 (sub_180006368.c)
 *     sub_1800067C4 @ 0x1800067C4 (sub_1800067C4.c)
 *     sub_180007110 @ 0x180007110 (sub_180007110.c)
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 *     sub_180007A7C @ 0x180007A7C (sub_180007A7C.c)
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     DllGetActivationFactory @ 0x180009490 (DllGetActivationFactory.c)
 *     DllMain @ 0x1800097BC (DllMain.c)
 *     sub_180009DAC @ 0x180009DAC (sub_180009DAC.c)
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_180010F38 @ 0x180010F38 (sub_180010F38.c)
 *     sub_1800115A8 @ 0x1800115A8 (sub_1800115A8.c)
 *     sub_18001211C @ 0x18001211C (sub_18001211C.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_1800177BC @ 0x1800177BC (sub_1800177BC.c)
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 *     sub_18001BB18 @ 0x18001BB18 (sub_18001BB18.c)
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_180020820 @ 0x180020820 (sub_180020820.c)
 *     sub_180020B00 @ 0x180020B00 (sub_180020B00.c)
 *     sub_180021E10 @ 0x180021E10 (sub_180021E10.c)
 *     sub_1800230C0 @ 0x1800230C0 (sub_1800230C0.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_1800285F8 @ 0x1800285F8 (sub_1800285F8.c)
 *     sub_18002A5F4 @ 0x18002A5F4 (sub_18002A5F4.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 *     sub_18003902C @ 0x18003902C (sub_18003902C.c)
 *     sub_18003A258 @ 0x18003A258 (sub_18003A258.c)
 *     sub_18003BA14 @ 0x18003BA14 (sub_18003BA14.c)
 *     sub_18003CA90 @ 0x18003CA90 (sub_18003CA90.c)
 *     sub_18003DA50 @ 0x18003DA50 (sub_18003DA50.c)
 *     sub_18003DDD8 @ 0x18003DDD8 (sub_18003DDD8.c)
 *     sub_18003E160 @ 0x18003E160 (sub_18003E160.c)
 *     sub_18003EE0C @ 0x18003EE0C (sub_18003EE0C.c)
 *     sub_18003F04C @ 0x18003F04C (sub_18003F04C.c)
 *     sub_18003F4AC @ 0x18003F4AC (sub_18003F4AC.c)
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040240 @ 0x180040240 (sub_180040240.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 *     sub_180040C3C @ 0x180040C3C (sub_180040C3C.c)
 *     sub_180041648 @ 0x180041648 (sub_180041648.c)
 *     __GSHandlerCheckCommon @ 0x180045AA4 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
