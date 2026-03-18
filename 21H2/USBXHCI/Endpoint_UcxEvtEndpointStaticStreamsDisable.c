/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B0F0
 * Callers:
 *     <none>
 * Callees:
 *     TR_Enable_Internal @ 0x1C0001298 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C0004B8C (TR_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003725C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0037444 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C004703C (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *Pool2; // rax
  int StreamContextArray; // edi
  _QWORD *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  _OWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v18);
  v5 = *((_QWORD *)&v18[0] + 1);
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
      0x6Fu,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C0061090) = v7;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 152LL, 1229146200LL);
  *(_QWORD *)(v8 + 128) = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v8;
    *(_DWORD *)(*(_QWORD *)(v8 + 128) + 8LL) = 1;
    *(_DWORD *)(*(_QWORD *)(v8 + 128) + 12LL) = 1;
    StreamContextArray = XilEndpoint_AllocateStreamContextArray(*(_QWORD *)(v8 + 128));
    if ( StreamContextArray >= 0 )
    {
      v13 = *(_QWORD *)(v8 + 128);
      v14 = *(_QWORD *)(v8 + 88);
      *(_QWORD *)(v8 + 136) = v13;
      *(_QWORD *)(v13 + 48) = v14;
      StreamContextArray = TR_Enable_Internal(*(_QWORD **)(v8 + 88));
      if ( StreamContextArray >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(*(_QWORD *)(v8 + 88));
        StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v8 + 136));
        if ( StreamContextArray >= 0 )
          return UsbDevice_ReconfigureEndpoint(
                   *(_QWORD *)(v8 + 16),
                   v8,
                   Endpoint_EndpointStaticStreamsDisableCompletion,
                   a3);
        *(_DWORD *)(v5 + 4) = -2147481600;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = StreamContextArray;
          LODWORD(v16) = *(_DWORD *)(v8 + 144);
          LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(v8 + 80),
            2u,
            0xDu,
            0x70u,
            (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
            v15,
            v16,
            v17);
        }
        *(_DWORD *)(v5 + 4) = -1073737728;
      }
    }
  }
  else
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
  }
  v11 = *(_QWORD **)(v8 + 128);
  if ( v11 )
  {
    XilEndpoint_FreeStreamContextArray(v11);
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)StreamContextArray);
}
