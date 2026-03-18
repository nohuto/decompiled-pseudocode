/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1C0037F38
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x1C004EE90 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00057C4 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     XilEndpoint_AcquireBuffer @ 0x1C0014EA4 (XilEndpoint_AcquireBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003980C (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigure(_DWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rax

  v2 = a1[36];
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)a1 + 10),
      4,
      13,
      68,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*((_QWORD *)a1 + 2) + 135LL),
      a1[36]);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *(_BYTE *)(v5 + 658);
  if ( (*(_DWORD *)(v4 + 100) & 4) != 0 )
  {
    if ( v6 )
      v7 = XilUsbDevice_GetDeviceContextBufferVA(v5) + (((unsigned int)(v2 - 1) + 1LL) << 6);
    else
      v7 = 0LL;
    v8 = 2112;
  }
  else
  {
    if ( v6 )
      v7 = XilUsbDevice_GetDeviceContextBufferVA(v5) + 32 * ((unsigned int)(v2 - 1) + 1LL);
    else
      v7 = 0LL;
    v8 = 1056;
  }
  v9 = XilEndpoint_AcquireBuffer(a1, v8, (int)a1, 846491717);
  *((_QWORD *)a1 + 32) = v9;
  if ( v9 )
  {
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      v9,
      v7,
      0LL,
      a1 + 40);
    Command_SendCommand(v3, (__int64)(a1 + 40));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)a1 + 10),
        2,
        13,
        69,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*((_QWORD *)a1 + 2) + 135LL),
        a1[36]);
    Controller_ReportFatalError(*(_QWORD *)a1, 2, 0, 0LL, *((_QWORD *)a1 + 2), (__int64)a1, 0LL);
    _m_prefetchw(a1 + 8);
    if ( (_InterlockedOr(a1 + 8, 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)a1 + 36, 12);
  }
}
