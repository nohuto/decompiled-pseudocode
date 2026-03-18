/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualDestruction @ 0x1C00430B0
 * Callers:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4HwndTargetPropVisualType@@@Z @ 0x1C0043030 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4HwndTargetPropVisualType@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      504,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0259A68 )
    v5 = qword_1C0259A68();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        505,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( qword_1C0259A70 )
      return (unsigned int)qword_1C0259A70(a1, v2);
    return v4;
  }
}
