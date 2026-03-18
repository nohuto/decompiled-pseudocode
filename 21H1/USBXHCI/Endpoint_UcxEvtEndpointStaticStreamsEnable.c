/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003A630
 * Callers:
 *     <none>
 * Callees:
 *     TR_Enable_Internal @ 0x1C00055F4 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0007C48 (Endpoint_GetDequeuePointer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C0009A60 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003683C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0036D54 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003EA5C (TR_FreeSecureTransferSegments.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00462EC (UsbDevice_ReconfigureEndpoint.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  _UNKNOWN **result; // rax
  unsigned __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // esi
  __int64 DequeuePointer; // rax
  __int64 v15; // rdx
  unsigned int i; // r15d
  __int64 v17; // rsi
  __int64 v18; // r12
  _QWORD **v19; // rdx
  __int64 v20; // r12
  struct _MDL *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+78h] [rbp+Fh]

  v22 = 0LL;
  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v23);
  v5 = *((_QWORD *)&v23[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0060338);
  v7 = v6;
  v8 = *(_QWORD *)v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 16) + 135LL);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      v9,
      13,
      104,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v6 + 8));
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
    0LL,
    0LL);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char *, __int64 *))(WdfFunctions_01023
                                                                                                  + 1224))(
                          WdfDriverGlobals,
                          *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL),
                          (char *)&v22 + 4,
                          &v22);
  v11 = (unsigned int)v22;
  if ( v22 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      result = (_UNKNOWN **)WPP_RECORDER_SF_dddd(
                              *(_QWORD *)(v8 + 80),
                              v11,
                              13,
                              105,
                              (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
                              *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
                              *(_DWORD *)(v8 + 144),
                              SBYTE4(v22),
                              v22);
    }
    *(_DWORD *)(v5 + 4) = -2147482880;
    v12 = -1073741811;
    goto LABEL_22;
  }
  v11 = *(unsigned int *)(v7 + 8);
  if ( (_DWORD)v11 && (unsigned int)v11 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 112LL) )
  {
    *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 a3,
                 off_1C0060090) = v7;
    result = (_UNKNOWN **)XilEndpoint_AllocateStreamContextArray(v7);
    v12 = (int)result;
    if ( (int)result < 0 )
    {
LABEL_7:
      *(_DWORD *)(v5 + 4) = -1073737728;
      goto LABEL_22;
    }
    *(_QWORD *)(v8 + 136) = v7;
    v13 = 1;
    if ( *(_DWORD *)(v7 + 8) )
    {
      while ( 1 )
      {
        v12 = TR_Enable_Internal(*(_QWORD **)(104LL * (v13 - 1) + *(_QWORD *)(v8 + 136) + 48));
        if ( v12 < 0 )
          break;
        DequeuePointer = Endpoint_GetDequeuePointer(v8, v13);
        v15 = v13++;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 136) + 32LL) + 16LL) + 16 * v15) = DequeuePointer;
        if ( v13 > *(_DWORD *)(v7 + 8) )
          goto LABEL_11;
      }
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        result = (_UNKNOWN **)WPP_RECORDER_SF_dddd(
                                *(_QWORD *)(v8 + 80),
                                v11,
                                13,
                                107,
                                (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
                                *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
                                *(_DWORD *)(v8 + 144),
                                v13,
                                v12);
      }
      goto LABEL_7;
    }
LABEL_11:
    result = (_UNKNOWN **)XilEndpoint_CommitStreamContextArrayUpdates(v7);
    v12 = (int)result;
    if ( (int)result >= 0 )
      return (_UNKNOWN **)UsbDevice_ReconfigureEndpoint(
                            *(_QWORD *)(v8 + 16),
                            v8,
                            Endpoint_EndpointStaticStreamsEnableCompletion,
                            a3);
    *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_22:
    if ( v12 >= 0 )
      return result;
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v8 + 80),
      v11,
      13,
      106,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
      *(_DWORD *)(v8 + 144),
      *(_DWORD *)(v7 + 8));
  }
  *(_DWORD *)(v5 + 4) = -2147482880;
  v12 = -1073741811;
LABEL_23:
  for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
  {
    LOBYTE(v11) = 1;
    v17 = *(_QWORD *)(104LL * (i - 1) + v7 + 48);
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 120LL);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v17 + 32) + 40LL))(v17, v11);
    _InterlockedExchange((volatile __int32 *)(v17 + 108), 0);
    if ( *(_BYTE *)(v17 + 280) )
      TR_FreeSecureTransferSegments(v17);
    v19 = (_QWORD **)(v17 + 208);
    v20 = v18 + 88;
    if ( *v19 != v19 )
      XilCoreCommonBuffer_ReleaseBuffers(v20, v19);
    v11 = v17 + 224;
    if ( *(_QWORD *)v11 != v11 )
      XilCoreCommonBuffer_ReleaseBuffers(v20, (_QWORD **)v11);
    v21 = *(struct _MDL **)(v17 + 120);
    if ( v21 )
    {
      IoFreeMdl(v21);
      *(_QWORD *)(v17 + 120) = 0LL;
    }
  }
  *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
  XilEndpoint_FreeStreamContextArray((_QWORD *)v7);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
                        WdfDriverGlobals,
                        a3,
                        (unsigned int)v12);
}
