/*
 * XREFs of RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C003DA40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0011170 (RootHub_DetectAndAcknowledgePortResume.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RootHub_WdfEvtTimerPortOperationPendingTimerDpc(__int64 a1)
{
  _QWORD ***v1; // rax
  int v2; // edx
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  unsigned int v5; // edi

  v1 = (_QWORD ***)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0060400);
  v3 = *v1;
  v4 = **v1;
  v5 = *((_DWORD *)*v1 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4[1] + 72LL),
      v2,
      11,
      212,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v5);
  }
  *((_BYTE *)v3 + 18) = 0;
  return RootHub_DetectAndAcknowledgePortResume(v4, v5, 0);
}
