/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C00395F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019D40 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C003A9EC (Endpoint_SendClearStallTransfer.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v5; // edx
  char v6; // cl
  int v7; // edx
  int v8; // edx

  v2 = *(_QWORD *)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_QWORD *)(v2 + 256));
  *(_QWORD *)(v2 + 256) = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v2 + 80),
        v5,
        13,
        74,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
    }
LABEL_11:
    _m_prefetchw((const void *)(v2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v2 + 288), 12);
    return;
  }
  v6 = *(_BYTE *)(a1 + 60);
  if ( v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        v8,
        13,
        76,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        v6);
    }
    Controller_ReportFatalError(*(_QWORD *)v2, 2, 4125, 0LL, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      v7,
      13,
      75,
      (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  Endpoint_SendClearStallTransfer((PVOID)v2);
}
