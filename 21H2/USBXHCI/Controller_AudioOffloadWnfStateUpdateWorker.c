/*
 * XREFs of Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0030CA0
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WnfHelper_PublishUsbXhciAudioOffloadState @ 0x1C00795B0 (WnfHelper_PublishUsbXhciAudioOffloadState.c)
 */

__int64 __fastcall Controller_AudioOffloadWnfStateUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0061428);
  DynamicLock_Acquire(*(_QWORD *)(v2 + 600));
  v3 = *(_BYTE *)(v2 + 784);
  DynamicLock_Release(*(_QWORD *)(v2 + 600));
  LOBYTE(v4) = v3;
  result = WnfHelper_PublishUsbXhciAudioOffloadState(v4);
  if ( (int)result >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v2 + 72),
               v6,
               4,
               311,
               (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
               v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_DD(
             *(_QWORD *)(v2 + 72),
             v6,
             4,
             310,
             (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
             v3,
             result);
  }
  return result;
}
