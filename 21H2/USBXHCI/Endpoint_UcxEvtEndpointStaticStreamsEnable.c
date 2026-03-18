/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003B3B0
 * Callers:
 *     <none>
 * Callees:
 *     TR_Enable_Internal @ 0x1C0001298 (TR_Enable_Internal.c)
 *     TR_Disable_Internal @ 0x1C0001578 (TR_Disable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003725C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037444 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C004703C (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // edx
  int StreamContextArray; // edi
  unsigned int v11; // r14d
  __int64 DequeuePointer; // rax
  __int64 v13; // rdx
  unsigned int i; // r14d
  __int64 v16; // [rsp+28h] [rbp-31h]
  __int64 v17; // [rsp+30h] [rbp-29h]
  __int64 v18; // [rsp+38h] [rbp-21h]
  int v19; // [rsp+50h] [rbp-9h] BYREF
  int v20; // [rsp+54h] [rbp-5h] BYREF
  _OWORD v21[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v22; // [rsp+78h] [rbp+1Fh]

  v20 = 0;
  v19 = 0;
  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v21);
  v5 = *((_QWORD *)&v21[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0061338);
  v7 = v6;
  v8 = *(_QWORD *)v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      4u,
      0xDu,
      0x69u,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, int *, int *))(WdfFunctions_01023 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
    &v20,
    &v19);
  if ( v20 || v19 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v20;
      LODWORD(v17) = *(_DWORD *)(v8 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v8 + 80),
        2u,
        0xDu,
        0x6Au,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v16,
        v17,
        v18,
        v19);
    }
    goto LABEL_21;
  }
  v9 = *(_DWORD *)(v7 + 8);
  if ( !v9 || v9 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 112LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = *(_DWORD *)(v7 + 8);
      LODWORD(v17) = *(_DWORD *)(v8 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v8 + 80),
        2u,
        0xDu,
        0x6Bu,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v16,
        v17,
        v18);
    }
LABEL_21:
    StreamContextArray = -1073741811;
    *(_DWORD *)(v5 + 4) = -2147482880;
    goto LABEL_22;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C0061090) = v7;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(v7);
  if ( StreamContextArray < 0 )
  {
LABEL_8:
    *(_DWORD *)(v5 + 4) = -1073737728;
    goto LABEL_22;
  }
  v11 = 1;
  *(_QWORD *)(v8 + 136) = v7;
  if ( *(_DWORD *)(v7 + 8) )
  {
    while ( 1 )
    {
      StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (v11 - 1) + *(_QWORD *)(v8 + 136) + 48));
      if ( StreamContextArray < 0 )
        break;
      DequeuePointer = Endpoint_GetDequeuePointer(v8, v11);
      v13 = v11++;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL) + 16LL) + 16 * v13) = DequeuePointer;
      if ( v11 > *(_DWORD *)(v7 + 8) )
        goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v11;
      LODWORD(v17) = *(_DWORD *)(v8 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v8 + 80),
        2u,
        0xDu,
        0x6Cu,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v16,
        v17,
        v18,
        StreamContextArray);
    }
    goto LABEL_8;
  }
LABEL_12:
  StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v7);
  if ( StreamContextArray >= 0 )
    return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v8 + 16), v8, Endpoint_EndpointStaticStreamsEnableCompletion, a3);
  *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_22:
  for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
    TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + v7 + 48), 1);
  *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
  XilEndpoint_FreeStreamContextArray((_QWORD *)v7);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)StreamContextArray);
}
