/*
 * XREFs of Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C006A110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceEndpointAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v12; // edi
  char v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  _QWORD v17[10]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+98h] [rbp+27h]

  v17[0] = 96LL;
  v17[1] = Endpoint_UcxEvtEndpointPurge;
  v17[2] = Endpoint_UcxEvtEndpointStart;
  v17[3] = Endpoint_UcxEvtEndpointAbort;
  v17[4] = Endpoint_UcxEvtEndpointReset;
  v17[5] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v17[6] = Endpoint_UcxEvtEndpointStaticStreamsAdd;
  v17[7] = Endpoint_UcxEvtEndpointStaticStreamsEnable;
  v17[8] = Endpoint_UcxEvtEndpointStaticStreamsDisable;
  v17[9] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  v18 = 0LL;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C0061708)(UcxDriverGlobals, a6, v17);
  v9 = 0LL;
  if ( a5 && (*(_BYTE *)(a3 + 3) & 3) == 1 && (a5[3] & 0x80u) != 0 )
    v9 = (__int64)&a5[*a5];
  v10 = Endpoint_Create(a1, a2, a6, a3, (__int64)a5, v9);
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = *(unsigned __int8 *)(a3 + 2);
    v13 = *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       a2,
                       off_1C00602C0)
                   + 135);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C0060428);
    v15 = *(_BYTE *)(a3 + 2) & 0x7F;
    v16 = (v12 >> 7) + 2 * v15;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v14 + 72),
      v15,
      13,
      12,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      v13,
      v16,
      v10);
  }
  return (unsigned int)v10;
}
