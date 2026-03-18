/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C0003DB0
 * Callers:
 *     <none>
 * Callees:
 *     Control_MapTransfer @ 0x1C0003FBC (Control_MapTransfer.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C00041A4 (Control_Transfer_CompleteCancelable.c)
 *     Control_TransferData_Initialize @ 0x1C00050E4 (Control_TransferData_Initialize.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C00051EC (WPP_RECORDER_SF_DDqDq.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // di
  __int64 v6; // r15
  int v7; // edx
  __int64 v8; // rsi
  int v9; // r8d
  KIRQL v10; // al
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r8
  _OWORD v15[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061388);
  v4 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(v3 + 40));
  v16 = 0LL;
  memset(v15, 0, sizeof(v15));
  v5 = 0;
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v15);
  v6 = *((_QWORD *)&v15[0] + 1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0061090);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL), v7, v9, *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL));
  Control_TransferData_Initialize(v3, a2, v6, v8);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 344) = v8;
  *(_BYTE *)(v3 + 104) = v10;
  v11 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 128) = 0LL;
  *(_DWORD *)(v8 + 112) = 1;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(WdfFunctions_01023 + 3144))(
          WdfDriverGlobals,
          v11,
          Control_WdfEvtRequestCancel);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(v3 + 48);
      v14 = *(_BYTE *)(v13 + 135);
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
        v13,
        14,
        38,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        v14,
        *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
        v12);
    }
    *(_DWORD *)(v8 + 112) = 3;
    Control_Transfer_CompleteCancelable(v3);
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
  }
  else
  {
    if ( *(_DWORD *)(v3 + 108) == 2 )
    {
      *(_DWORD *)(v3 + 108) = 3;
      v5 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
    if ( v5 )
      Control_MapTransfer(v3);
  }
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(v3 + 40));
  }
}
