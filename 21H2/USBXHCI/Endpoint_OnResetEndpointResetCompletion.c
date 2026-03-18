/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C0039670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     UsbDevice_GetEndpointState @ 0x1C000C034 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0037708 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00398A4 (Endpoint_OnResetSetDequeuePointer.c)
 */

void __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  int v8; // ecx
  int EndpointState; // edx
  __int64 v10; // rcx
  unsigned int i; // edi

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v6 + 80),
        a2,
        13,
        45,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    }
LABEL_4:
    StreamContextArray = -1073741823;
LABEL_5:
    *(_DWORD *)(v6 + 280) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v6 + 288), 12);
    return;
  }
  v8 = *(unsigned __int8 *)(a1 + 60);
  if ( (_BYTE)v8 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Eu,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v8);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, 0LL, *(_QWORD *)(v6 + 16), v6, 0LL);
    goto LABEL_4;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(_DWORD *)(v6 + 144));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Fu,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      EndpointState);
  if ( !*(_BYTE *)(v6 + 37) )
  {
    Endpoint_OnResetSetDequeuePointer(v3, 0LL);
    return;
  }
  v10 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v10 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v10);
  if ( StreamContextArray < 0 )
    goto LABEL_5;
  for ( i = 1; i <= *(_DWORD *)(*(_QWORD *)(v6 + 136) + 8LL); ++i )
    Endpoint_OnResetSetDequeuePointer(v3, i);
}
