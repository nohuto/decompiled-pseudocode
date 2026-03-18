/*
 * XREFs of ApiSetEditionKeepMachineUp @ 0x1C0061964
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKeepMachineUp(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ebx
  int v9; // eax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      52,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v8 = 0;
  if ( qword_1C0252E18 )
    v9 = qword_1C0252E18();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C0252E20 )
    v8 = qword_1C0252E20(a1, v6, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      53,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v8;
}
