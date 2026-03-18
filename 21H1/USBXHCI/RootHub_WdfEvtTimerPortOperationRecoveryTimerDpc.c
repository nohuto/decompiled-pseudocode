/*
 * XREFs of RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C003DAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 */

void __fastcall RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbx
  int v4; // [rsp+28h] [rbp-20h]

  v1 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0060400);
  v2 = *v1;
  v3 = **v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *((_DWORD *)v2 + 2);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      (_DWORD)v2,
      11,
      211,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v4);
  }
  Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4133, 0LL, 0LL, 0LL, 0LL);
}
