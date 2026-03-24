/*
 * XREFs of Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C00309F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WnfHelper_PublishUsbXhciAudioOffloadState @ 0x1C0078194 (WnfHelper_PublishUsbXhciAudioOffloadState.c)
 */

__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  char v6; // di
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0060428);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 600), v3, v4, v5);
  v6 = *(_BYTE *)(v2 + 784);
  DynamicLock_Release(*(_QWORD *)(v2 + 600), v7, v8, v9);
  LOBYTE(v10) = v6;
  result = WnfHelper_PublishUsbXhciAudioOffloadState(v10);
  if ( (int)result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v2 + 72),
               v12,
               4,
               305,
               (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
               v6);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    return WPP_RECORDER_SF_dd(
             *(_QWORD *)(v2 + 72),
             v12,
             4,
             304,
             (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids,
             v6,
             result);
  }
  return result;
}
