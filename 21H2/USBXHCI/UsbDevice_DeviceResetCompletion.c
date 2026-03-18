/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x1C0046070
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     UsbDevice_GetEndpointState @ 0x1C000C034 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dLL @ 0x1C0047A10 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x1C0047D34 (WPP_RECORDER_SF_dqLL.c)
 */

void __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int128 *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // bp
  __int64 *v8; // rsi
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        a2 + 9,
        0x3Eu,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(unsigned __int8 *)(v4 + 135),
        *(_QWORD *)v4);
    v8 = (__int64 *)(v4 + 184);
    v9 = 30LL;
    do
    {
      if ( *v8 )
        Endpoint_Disable(*v8, 0LL);
      ++v8;
      --v9;
    }
    while ( v9 );
LABEL_19:
    *(_DWORD *)(v4 + 152) = 3;
    v14 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      v14,
      0LL);
    return;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xCu,
        0x3Fu,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids);
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 61),
        v10,
        v11,
        v15,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    }
    v12 = (__int64 *)(v4 + 184);
    v13 = 30LL;
    do
    {
      if ( *v12 )
        Endpoint_Disable(*v12, 0LL);
      ++v12;
      --v13;
    }
    while ( v13 );
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), (_DWORD)a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)(v4 + 8),
    *(_QWORD *)v4,
    0,
    0x200000LL,
    "Reset Device Command failed",
    (__int128 *)(a1 + 24),
    a3);
  Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4121, 0LL, 0LL, 0LL, 0LL);
}
