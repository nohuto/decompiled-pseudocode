/*
 * XREFs of Controller_UpdateIdleTimeout @ 0x1C0076BE0
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x1C0032AC0 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C006C4A4 (Controller_UpdateIdleTimeoutOnControllerFDOD0Entry.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0071A14 (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeout(__int64 *a1, int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v6; // edx
  _DWORD v7[10]; // [rsp+30h] [rbp-38h] BYREF

  v7[3] = a2;
  v7[0] = 36;
  v3 = *a1;
  v7[5] = 2;
  v7[6] = 2;
  v7[8] = 2;
  v7[1] = 2;
  v7[2] = 5;
  v7[4] = 2;
  v7[7] = 2;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 368))(
             WdfDriverGlobals,
             v3,
             v7);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 132) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_d(a1[9], v6, 4, 31, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, a2);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      result = WPP_RECORDER_SF_d(a1[9], v6, 4, 30, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, result);
    }
    *((_DWORD *)a1 + 116) = 2;
  }
  return result;
}
