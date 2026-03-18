/*
 * XREFs of ApiSetInputTransformOnInput @ 0x1C01CBE8C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     InputTransformOnInput @ 0x1C01F7F88 (InputTransformOnInput.c)
 */

__int64 __fastcall ApiSetInputTransformOnInput(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v14[7]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      230,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v6 = 0;
  if ( qword_1C0253588 )
    v7 = qword_1C0253588();
  else
    v7 = -1073741637;
  if ( v7 >= 0 )
  {
    v8 = a1[1];
    v14[0] = *a1;
    v14[2] = a1[2];
    v9 = a1[4];
    v14[1] = v8;
    v10 = a1[3];
    v14[4] = v9;
    v11 = a1[6];
    v14[3] = v10;
    v12 = a1[5];
    v14[6] = v11;
    v14[5] = v12;
    v6 = InputTransformOnInput(v14, v4, a3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      231,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v6;
}
