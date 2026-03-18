/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1C000F870
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C000F91C (WPP_RECORDER_SF_dddL.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0039AC0 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 */

void __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v3 + 80),
        v8,
        13,
        61,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        *(_WORD *)(a1 + 34));
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v6, a3, 63);
      }
      if ( *(_BYTE *)(v3 + 37) )
      {
        Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
        return;
      }
      v7 = 16;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int16 *)(a1 + 34);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v9, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL), 62);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512,
      (__int64)"Set Dequeue Pointer command following a Stop Endpoint command failed",
      a1 + 24,
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
  {
    v7 = 12;
LABEL_7:
    ESM_AddEvent((KSPIN_LOCK *)(v3 + 288), v7);
  }
}
