/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x1C00413F0
 * Callers:
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJW4HwndTargetPropVisualType@@PEAUCompositionObject@@@Z @ 0x1C0041370 (-SetSystemVisual@CHwndTargetProp@@QEAAJW4HwndTargetPropVisualType@@PEAUCompositionObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualCreation(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int v7; // eax

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      502,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0259A58 )
    v7 = qword_1C0259A58();
  else
    v7 = -1073741637;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        503,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( qword_1C0259A60 )
      return (unsigned int)qword_1C0259A60(a1, v4, a3);
    return v6;
  }
}
