/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C004F8C0 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C000154C (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C001625C (XilEndpoint_AcquireBuffer.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003A428 (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigure(_DWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rax

  v2 = a1[36];
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *((_QWORD *)a1 + 10),
      4,
      13,
      69,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(_BYTE *)(*((_QWORD *)a1 + 2) + 135LL),
      a1[36]);
  v5 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v4 + 100) & 4) != 0 )
  {
    if ( *(_BYTE *)(v5 + 658) )
      v6 = XilUsbDevice_GetDeviceContextBufferVA(v5) + (((unsigned int)(v2 - 1) + 1LL) << 6);
    else
      v6 = 0LL;
    v7 = 2112;
  }
  else
  {
    if ( *(_BYTE *)(v5 + 658) )
      v6 = XilUsbDevice_GetDeviceContextBufferVA(v5) + 32 * ((unsigned int)(v2 - 1) + 1LL);
    else
      v6 = 0LL;
    v7 = 1056;
  }
  v8 = XilEndpoint_AcquireBuffer(a1, v7, (int)a1, 846491717);
  *((_QWORD *)a1 + 32) = v8;
  if ( v8 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      v8,
      v6,
      0LL,
      a1 + 40);
    Command_SendCommand(v3, (__int64)(a1 + 40));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)a1 + 10),
        2,
        13,
        70,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*((_QWORD *)a1 + 2) + 135LL),
        a1[36]);
    Controller_ReportFatalError(*(_QWORD *)a1, 2, 0, 0LL, *((_QWORD *)a1 + 2), (__int64)a1, 0LL);
    _m_prefetchw(a1 + 8);
    if ( (_InterlockedOr(a1 + 8, 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)a1 + 36, 12);
  }
}
