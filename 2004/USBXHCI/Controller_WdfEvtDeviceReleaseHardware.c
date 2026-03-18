/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075A40
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0008D84 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0036154 (XilDeviceSlot_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x1C003C55C (Register_UnmapSecureMmio.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C00479BC (Etw_ReportControllerHealthWithPortInfo.c)
 *     Command_ReleaseHardware @ 0x1C0074354 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseHardware @ 0x1C0076560 (Interrupter_ReleaseHardware.c)
 *     RootHub_ReleaseHardware @ 0x1C00768E8 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  void *v6; // r8

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v2, 4, 51, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 368));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 760));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 504));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 640));
  v4 = *(_QWORD *)(v3 + 776);
  if ( v4 )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v3 + 776) = 0LL;
  }
  if ( *(_BYTE *)(v3 + 472) )
  {
    Etw_ReportControllerHealthWithPortInfo(v4, v3, 0, 0LL, 0);
    *(_BYTE *)(v3 + 472) = 0;
  }
  RootHub_ReleaseHardware(*(_QWORD *)(v3 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v3 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v3 + 136));
  Interrupter_ReleaseHardware(*(_QWORD *)(v3 + 128));
  v5 = *(_QWORD *)(v3 + 88);
  if ( *(_QWORD *)(v5 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v5 + 8)) )
    {
      Register_UnmapSecureMmio(v5);
      v6 = *(void **)(v5 + 24);
    }
    MmUnmapIoSpace(v6, *(unsigned int *)(v5 + 20));
    *(_BYTE *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v3 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 8));
  return 0LL;
}
