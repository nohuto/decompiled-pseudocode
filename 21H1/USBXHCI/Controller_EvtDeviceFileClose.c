/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1C0030DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00135F0 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C00326C0 (Controller_StopTimeTrackingForHandle.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // edx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00603B0);
  if ( *(_BYTE *)(result + 40) )
  {
    v3 = *(_QWORD *)(result + 32);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               v4,
               4,
               279,
               (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
               a1,
               result);
    }
  }
  return result;
}
