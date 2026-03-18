/*
 * XREFs of Endpoint_OnResetEndpointConfigure @ 0x1C00384B8
 * Callers:
 *     ESM_ReconfiguringEndpointOnReset @ 0x1C004EEC0 (ESM_ReconfiguringEndpointOnReset.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00057C4 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0007C48 (Endpoint_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     Endpoint_InitializeTransferRing @ 0x1C000F840 (Endpoint_InitializeTransferRing.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0014EA4 (XilEndpoint_AcquireBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003980C (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigure(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  char v8; // dl
  __int64 DeviceContextBufferVA; // rax
  int v10; // r8d
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  __int64 DequeuePointer; // rax
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[34];
  v3 = *(_QWORD *)(*a1 + 144LL);
  v4 = *(_QWORD *)(*a1 + 88LL);
  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0060090);
  v6 = a1[2];
  v7 = v5;
  v8 = *(_BYTE *)(v6 + 658);
  if ( (*(_DWORD *)(v4 + 100) & 4) != 0 )
  {
    if ( v8 )
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v6);
      v11 = DeviceContextBufferVA + (((unsigned int)(v10 - 1) + 1LL) << 6);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 2112;
  }
  else
  {
    if ( v8 )
    {
      v13 = XilUsbDevice_GetDeviceContextBufferVA(v6);
      v11 = v13 + 32 * ((unsigned int)(v14 - 1) + 1LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 1056;
  }
  v15 = XilEndpoint_AcquireBuffer(a1, v12, (int)a1, 846491717);
  *(_QWORD *)(v7 + 8) = v15;
  if ( v15 )
  {
    if ( *((_BYTE *)a1 + 37) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_dd(
          a1[10],
          v16,
          13,
          48,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          *(_BYTE *)(a1[2] + 135LL),
          *((_DWORD *)a1 + 36));
      }
      v17 = v7 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v7,
        *(_QWORD *)(v7 + 8),
        v11,
        0LL,
        (void *)(v7 + 16));
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_dd(
          a1[10],
          v16,
          13,
          49,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          *(_BYTE *)(a1[2] + 135LL),
          *((_DWORD *)a1 + 36));
      }
      v17 = v7 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v7,
        *(_QWORD *)(v7 + 8),
        v11,
        (__int64)&v19,
        (void *)(v7 + 16));
      Endpoint_InitializeTransferRing(a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, 0);
      *(_QWORD *)(v19 + 8) = DequeuePointer;
    }
    Command_SendCommand(v3, v17);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dd(
        a1[10],
        v16,
        13,
        47,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(a1[2] + 135LL),
        *((_DWORD *)a1 + 36));
    }
    *((_DWORD *)a1 + 70) = -1073741670;
    ESM_AddEvent(a1 + 36, 102);
  }
}
