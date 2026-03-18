/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0038C00
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003A12C (Endpoint_SendClearStallTransfer.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v5; // edx
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_QWORD *)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v2 + 80),
        v5,
        13,
        74,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
    }
LABEL_11:
    _m_prefetchw((const void *)(v2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v2 + 288), 12);
    return;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        2u,
        0xDu,
        0x4Cu,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        *(unsigned __int8 *)(a1 + 60));
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4125, 0LL, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v2 + 80),
      v6,
      13,
      75,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  Endpoint_SendClearStallTransfer((PVOID)v2);
}
