/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000E440 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     Controller_InUseByDebugger @ 0x1C0015798 (Controller_InUseByDebugger.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006D074 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006D470 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006D5F0 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rax
  int v6; // edx
  NTSTATUS v8; // eax
  int v9; // edx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  *(_BYTE *)(v3 + 16) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v2, 4, 53, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v1);
  }
  if ( (unsigned __int8)Controller_InUseByDebugger(v3) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v4, 4, 54, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v1);
    }
    v8 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 544));
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v9, 4, 55, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v8);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlags(v3);
  if ( (*(_QWORD *)(v3 + 336) & 0x400000000LL) != 0 )
  {
    v5 = CommonBuffer_AcquireBuffer(*(PVOID *)(v3 + 120), 512, v3, 829584451);
    *(_QWORD *)(v3 + 456) = v5;
    if ( !v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v6, 4, 56, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v1);
    }
  }
  return 0LL;
}
