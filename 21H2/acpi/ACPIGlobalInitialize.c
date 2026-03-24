/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00BC294
 * Callers:
 *     DriverEntry @ 0x1C00BB98C (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F770 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C0090E84 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  __int64 v0; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C0082AC0 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C0082ABC = 2;
  qword_1C0082AC8 = (__int64)ACPIEnableInitializeACPI;
  qword_1C0082AD0 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C0082AD8 = (__int64)ACPIWakeMarkHiberPhase;
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
          (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_067b6e12806a352c39fbc5798cfde2dc_Traceguids,
      v0);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v0;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
