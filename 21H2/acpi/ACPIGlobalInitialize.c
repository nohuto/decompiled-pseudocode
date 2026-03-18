/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00BC3C4
 * Callers:
 *     DriverEntry @ 0x1C00BBAC8 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C00900C4 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  __int64 v0; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C0081CF0 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C0081CEC = 2;
  qword_1C0081CF8 = (__int64)ACPIEnableInitializeACPI;
  qword_1C0081D00 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C0081D08 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v0 )
  {
    v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xAu,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
      v0);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v0;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
