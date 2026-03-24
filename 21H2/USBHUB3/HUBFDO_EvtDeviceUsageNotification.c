/*
 * XREFs of HUBFDO_EvtDeviceUsageNotification @ 0x1C000C740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_NotifyForwardProgress @ 0x1C00266C8 (HUBUCX_NotifyForwardProgress.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 *__fastcall HUBFDO_EvtDeviceUsageNotification(__int64 a1, int a2, char a3)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // edi
  int v9; // edi
  int v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]

  v12 = 0;
  v11 = 0LL;
  result = (volatile signed __int32 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                        WdfDriverGlobals,
                                        a1,
                                        off_1C0066170);
  v7 = result;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_8;
    if ( v9 != 2 )
      return result;
  }
  if ( !a3 )
    return result;
  _InterlockedOr(result + 10, 0x400000u);
  v12 = 257;
  *(_QWORD *)&v11 = 0x500000014LL;
  *((_QWORD *)&v11 + 1) = 0x100000001LL;
  result = (volatile signed __int32 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 376))(
                                        WdfDriverGlobals,
                                        a1,
                                        &v11);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (int)result;
    result = (volatile signed __int32 *)WPP_RECORDER_SF_d(
                                          *((_QWORD *)v7 + 315),
                                          2u,
                                          3u,
                                          0x1Du,
                                          (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
                                          v10);
  }
LABEL_8:
  if ( a3 && !*((_BYTE *)v7 + 2272) )
  {
    *((_BYTE *)v7 + 2272) = 1;
    result = (volatile signed __int32 *)HUBUCX_NotifyForwardProgress(v7);
    if ( !*((_BYTE *)v7 + 240) )
      return (volatile signed __int32 *)MmLockPagableDataSection(HUBFDO_EvtDeviceAdd);
  }
  return result;
}
