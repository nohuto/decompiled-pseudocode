/*
 * XREFs of ApiSetEditionPointerSpeedHitTest @ 0x1C01C6FEC
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0191C24 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019B340 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     EditionPointerSpeedHitTest @ 0x1C01F625C (EditionPointerSpeedHitTest.c)
 */

_OWORD *__fastcall ApiSetEditionPointerSpeedHitTest(_OWORD *a1, int a2, int a3, int a4, _DWORD *a5, __int64 a6)
{
  int v10; // edx
  int v11; // eax
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  char v20; // [rsp+30h] [rbp-88h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( a5 )
    *a5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      216,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0251518 )
    v11 = qword_1C0251518();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v12 = (_OWORD *)EditionPointerSpeedHitTest((unsigned int)&v20, a2, a3, a4, (__int64)a5, a6);
    v13 = v12[1];
    *a1 = *v12;
    v14 = v12[2];
    a1[1] = v13;
    v15 = v12[3];
    a1[2] = v14;
    v16 = v12[4];
    a1[3] = v15;
    v17 = v12[5];
    a1[4] = v16;
    v18 = v12[6];
    a1[5] = v17;
    a1[6] = v18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      217,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return a1;
}
