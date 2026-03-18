/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1C01C7158
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     EditionPointerWindowHitTest @ 0x1C01F6330 (EditionPointerWindowHitTest.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v17; // edx
  int v18; // eax
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  char v27; // [rsp+70h] [rbp-98h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      10,
      220,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0251538 )
    v18 = qword_1C0251538();
  else
    v18 = -1073741637;
  if ( v18 >= 0 )
  {
    v19 = (_OWORD *)EditionPointerWindowHitTest((unsigned int)&v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v20 = v19[1];
    *a1 = *v19;
    v21 = v19[2];
    a1[1] = v20;
    v22 = v19[3];
    a1[2] = v21;
    v23 = v19[4];
    a1[3] = v22;
    v24 = v19[5];
    a1[4] = v23;
    v25 = v19[6];
    a1[5] = v24;
    a1[6] = v25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      10,
      221,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return a1;
}
