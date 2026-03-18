/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0064C84
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C005F280 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0065004 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetEditionForegroundQAccessibleToMouseProducer(PDEVICE_OBJECT a1, __int64 a2, unsigned int a3)
{
  PDEVICE_OBJECT v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax

  v4 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        180,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( LODWORD(v4->DriverObject) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = 0;
  if ( qword_1C02590C8 )
    v6 = qword_1C02590C8();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C02590D0 )
    v5 = qword_1C02590D0(*(_QWORD *)&v4->Type, 1LL, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      181,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v5;
}
