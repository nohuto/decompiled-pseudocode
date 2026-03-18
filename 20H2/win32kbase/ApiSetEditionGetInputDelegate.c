/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x1C01C5C5C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018B50C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0193B2C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     EditionGetInputDelegate @ 0x1C01F6080 (EditionGetInputDelegate.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(_OWORD *a1)
{
  __int64 InputDelegate; // rdi
  int v3; // eax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[7]; // [rsp+30h] [rbp-78h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      228,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  InputDelegate = 0LL;
  if ( qword_1C0251578 )
    v3 = qword_1C0251578();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
  {
    v4 = a1[1];
    v10[0] = *a1;
    v10[2] = a1[2];
    v5 = a1[4];
    v10[1] = v4;
    v6 = a1[3];
    v10[4] = v5;
    v7 = a1[6];
    v10[3] = v6;
    v8 = a1[5];
    v10[6] = v7;
    v10[5] = v8;
    InputDelegate = EditionGetInputDelegate(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      229,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return InputDelegate;
}
