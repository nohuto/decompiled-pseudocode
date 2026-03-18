/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C0037D1C
 * Callers:
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B840 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003BB10 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C00165F0 (XilCommonBuffer_AcquireBufferEx.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019D40 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C0031230 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003132C (CommonBuffer_AcquireShadowBuffer.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C003830C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v4; // ecx
  bool v5; // dl
  unsigned int v6; // r14d
  void *v7; // rbp
  int v8; // r10d
  char v9; // cl
  int v10; // eax
  int v11; // r9d
  int v12; // edx
  int v13; // ebx
  char v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v18 = 0LL;
  v4 = *(_DWORD *)(a1 + 12);
  v17 = 0LL;
  v5 = 1;
  v6 = 1 << (v4 + 1);
  v7 = *(void **)(*(_QWORD *)v1 + 120LL);
  v8 = 16 * v6;
  if ( *(_BYTE *)(*(_QWORD *)v1 + 553LL) )
  {
    if ( *(_DWORD *)(*(_QWORD *)v1 + 556LL) == 2 )
    {
      v9 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 656LL);
      v5 = v9 == 0;
      v10 = 3 - (v9 != 0);
    }
    else
    {
      v5 = 0;
      v10 = 2;
    }
  }
  else
  {
    v10 = 1;
  }
  if ( v5 )
  {
    v2 = XilCommonBuffer_AcquireBufferEx(v7, v8, v1, 0x31747045u, v10);
    if ( !v2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741670;
      v11 = 17;
LABEL_22:
      v16 = *(_DWORD *)(v1 + 144);
      v15 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
      goto LABEL_11;
    }
LABEL_15:
    *(_QWORD *)(a1 + 32) = v2;
    return 0;
  }
  if ( v10 != 2 )
  {
    if ( v10 == 3 )
    {
      v2 = (__int64)CommonBuffer_AcquireSecureBuffer(*(__int64 **)(*(_QWORD *)v1 + 120LL), v8, v1, 829714501);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v11 = 16;
        goto LABEL_22;
      }
    }
    goto LABEL_15;
  }
  v2 = (__int64)CommonBuffer_AcquireShadowBuffer(v8, v1, 829714501);
  if ( v2 )
  {
    v13 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v1 + 1312, v6, &v18, &v17);
    if ( v13 < 0 )
    {
      CommonBuffer_ReleaseBuffer((__int64)v7, v2);
      return (unsigned int)v13;
    }
    *(_QWORD *)(v2 + 24) = v17;
    *(_QWORD *)(a1 + 40) = v18;
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 15;
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
    v16 = *(_DWORD *)(v1 + 144);
    v15 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
LABEL_11:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v1 + 80),
      v12,
      13,
      v11,
      (__int64)&WPP_ef657641772f3c5a4b119de1b27b7cfa_Traceguids,
      v15,
      v16);
  }
  return (unsigned int)-1073741670;
}
