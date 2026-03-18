/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000FA9C (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     Controller_InUseByDebugger @ 0x1C001589C (Controller_InUseByDebugger.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C006DE50 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C006DFF8 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  NTSTATUS v6; // eax
  int v7; // edx
  __int64 v8; // rax
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
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v2, 4, 53, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v1);
  }
  if ( (unsigned __int8)Controller_InUseByDebugger(v3) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v4, 4, 54, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v1);
    }
    v6 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 544));
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v7, 4, 55, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v6);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlags(v3);
  if ( _bittest64((const signed __int64 *)(v3 + 336), 0x22u) )
  {
    v8 = CommonBuffer_AcquireBuffer(*(PVOID *)(v3 + 120), 512, v3, 829584451);
    *(_QWORD *)(v3 + 456) = v8;
    if ( !v8 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v9, 4, 56, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v1);
    }
  }
  return 0LL;
}
