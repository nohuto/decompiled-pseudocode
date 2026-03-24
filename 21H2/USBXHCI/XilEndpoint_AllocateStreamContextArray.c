/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C003701C
 * Callers:
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003ABD0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003AEA0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C0007C5C (Debug_FreAssertMsg.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C00165F0 (XilCommonBuffer_AcquireBufferEx.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019D40 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_IsVelocityForVSO41600751Enabled @ 0x1C001A0C0 (Controller_IsVelocityForVSO41600751Enabled.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C0030530 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003062C (CommonBuffer_AcquireShadowBuffer.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0037698 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ecx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  void *v6; // rbp
  __int64 v7; // r8
  char v8; // r9
  unsigned int v9; // r10d
  int v10; // r11d
  int v11; // edx
  int v12; // edx
  int v13; // ebx
  char v14; // cl
  BOOL v15; // edx
  int v16; // eax
  char v17; // cl
  int v18; // r9d
  int v19; // edx
  char v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v5 = 1 << (v3 + 1);
  v6 = *(void **)(*(_QWORD *)v1 + 120LL);
  if ( !Controller_IsVelocityForVSO41600751Enabled(*(_QWORD *)v1) )
  {
    if ( v8 )
    {
      if ( *(_DWORD *)(v7 + 556) == 2 )
      {
        v17 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 656LL);
        LOBYTE(v15) = v17 == 0;
        v16 = 3 - (v17 != 0);
      }
      else
      {
        LOBYTE(v15) = 0;
        v16 = 2;
      }
LABEL_16:
      if ( v15 )
      {
        v4 = XilCommonBuffer_AcquireBufferEx(v6, v9, v1, 0x31747045u, v16);
        if ( v4 )
          goto LABEL_25;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v18 = 17;
      }
      else
      {
        if ( v16 == 2 )
          goto LABEL_18;
        if ( v16 != 3 )
          goto LABEL_25;
        v4 = (__int64)CommonBuffer_AcquireSecureBuffer((__int64 *)v6, v9, v1, 829714501);
        if ( v4 )
          goto LABEL_25;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v18 = 16;
      }
      v22 = *(_DWORD *)(v1 + 144);
      v21 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
      goto LABEL_21;
    }
    goto LABEL_14;
  }
  if ( !v8 )
  {
LABEL_14:
    v16 = v10;
LABEL_15:
    LOBYTE(v15) = v10;
    goto LABEL_16;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 88) + 80LL) - v10;
  if ( !v11 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 16) + 656LL) )
      goto LABEL_18;
    v16 = 3;
    goto LABEL_15;
  }
  v12 = v11 - v10;
  if ( !v12 )
  {
    v14 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 656LL);
    v15 = v14 == 0;
    v16 = v10 + (v14 != 0);
    goto LABEL_16;
  }
  if ( v12 == 2 )
  {
LABEL_18:
    v4 = (__int64)CommonBuffer_AcquireShadowBuffer(v9, v1, 829714501);
    if ( !v4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741670;
      v18 = 15;
      v19 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 16) + 135LL);
      v22 = *(_DWORD *)(v1 + 144);
      v21 = *(_BYTE *)(*(_QWORD *)(v1 + 16) + 135LL);
LABEL_21:
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v1 + 80),
        v19,
        13,
        v18,
        (__int64)&WPP_539d53059a2e35bc1c6dc9c85d9f465f_Traceguids,
        v21,
        v22);
      return (unsigned int)-1073741670;
    }
    v13 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v1 + 1312, v5, &v24, &v23);
    if ( v13 < 0 )
    {
      CommonBuffer_ReleaseBuffer((__int64)v6, v4);
      return (unsigned int)v13;
    }
    *(_QWORD *)(v4 + 24) = v23;
    *(_QWORD *)(a1 + 40) = v24;
LABEL_25:
    *(_QWORD *)(a1 + 32) = v4;
    return 0;
  }
  Debug_FreAssertMsg(
    (__int64)"Unexpected VTIO method while allocating SCA",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
    557);
  return (unsigned int)-1073741808;
}
