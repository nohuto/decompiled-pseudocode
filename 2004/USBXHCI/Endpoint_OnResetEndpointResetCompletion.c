/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x1C0038B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     UsbDevice_GetEndpointState @ 0x1C000F5F8 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0036CE0 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0038DB4 (Endpoint_OnResetSetDequeuePointer.c)
 */

void __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int StreamContextArray; // eax
  char v8; // cl
  int v9; // edx
  int EndpointState; // edx
  __int64 v11; // rcx
  unsigned int i; // edi
  char v13; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        a2,
        13,
        44,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
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
  v8 = *(_BYTE *)(a1 + 60);
  if ( v8 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        v9,
        13,
        45,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v8);
    }
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
  {
    v13 = EndpointState;
    LOBYTE(EndpointState) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      EndpointState,
      13,
      46,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v13);
  }
  if ( !*(_BYTE *)(v6 + 37) )
  {
    Endpoint_OnResetSetDequeuePointer(v3, 0LL);
    return;
  }
  v11 = *(_QWORD *)(v6 + 136);
  *(_DWORD *)(v11 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v11);
  if ( StreamContextArray < 0 )
    goto LABEL_5;
  for ( i = 1; i <= *(_DWORD *)(*(_QWORD *)(v6 + 136) + 8LL); ++i )
    Endpoint_OnResetSetDequeuePointer(v3, i);
}
