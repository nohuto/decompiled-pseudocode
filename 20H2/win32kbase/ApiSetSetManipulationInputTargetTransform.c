/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C01CB010
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01973B4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     SetManipulationInputTargetTransform @ 0x1C01F691C (SetManipulationInputTargetTransform.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(_OWORD *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r14d
  unsigned int v9; // ebx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v17[7]; // [rsp+30h] [rbp-88h] BYREF

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      246,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v9 = 0;
  if ( qword_1C0251608 )
    v10 = qword_1C0251608();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    v11 = a1[1];
    v17[0] = *a1;
    v17[2] = a1[2];
    v12 = a1[4];
    v17[1] = v11;
    v13 = a1[3];
    v17[4] = v12;
    v14 = a1[6];
    v17[3] = v13;
    v15 = a1[5];
    v17[6] = v14;
    v17[5] = v15;
    v9 = SetManipulationInputTargetTransform((unsigned int)v17, v7, a3, a4, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      247,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v9;
}
