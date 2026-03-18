/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C003725C
 * Callers:
 *     Endpoint_Enable @ 0x1C0004FA0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B0F0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003B3B0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0016368 (XilCommonBuffer_AcquireBufferEx.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C0030810 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C00308F0 (CommonBuffer_AcquireShadowBuffer.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C003783C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // r14d
  void *v7; // rbp
  int v8; // r10d
  char v9; // cl
  bool v10; // al
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
  if ( !*(_BYTE *)(*(_QWORD *)v1 + 553LL)
    || (*(_DWORD *)(*(_QWORD *)v1 + 556LL) != 2
      ? (v10 = 0, v5 = 2)
      : (v9 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 656LL), v10 = v9 == 0, v5 = 3 - (v9 != 0)),
        v10) )
  {
    v2 = XilCommonBuffer_AcquireBufferEx(v7, v8, v1, 0x31747045u, v5);
    if ( !v2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741670;
      v11 = 17;
LABEL_21:
      v16 = *(_DWORD *)(v1 + 144);
      v15 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
      goto LABEL_10;
    }
LABEL_14:
    *(_QWORD *)(a1 + 32) = v2;
    return 0;
  }
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      v2 = CommonBuffer_AcquireSecureBuffer(*(_QWORD *)(*(_QWORD *)v1 + 120LL), v8, v1, 829714501);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v11 = 16;
        goto LABEL_21;
      }
    }
    goto LABEL_14;
  }
  v2 = CommonBuffer_AcquireShadowBuffer(v8, v1, 829714501);
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
    goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 15;
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
    v16 = *(_DWORD *)(v1 + 144);
    v15 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
LABEL_10:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v1 + 80),
      v12,
      13,
      v11,
      (__int64)&WPP_c9b84b1160863fb1dfbb88ae491c1c73_Traceguids,
      v15,
      v16);
  }
  return (unsigned int)-1073741670;
}
