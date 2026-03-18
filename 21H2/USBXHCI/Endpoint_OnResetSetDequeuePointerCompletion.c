/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C00399B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C003A790 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 */

void __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // edx

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
        42,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    }
LABEL_8:
    *(_DWORD *)(v6 + 280) = -1073741823;
    _m_prefetchw((const void *)(v6 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u) & 2) != 0 )
      return;
    v8 = 12;
    goto LABEL_15;
  }
  v7 = *(unsigned __int8 *)(a1 + 60);
  if ( (_BYTE)v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x2Bu,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v7);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, 0LL, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x2Cu,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      *(unsigned __int16 *)(a1 + 34));
  if ( *(_BYTE *)(v6 + 37) )
  {
    Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *(unsigned __int16 *)(a1 + 34));
    return;
  }
  *(_DWORD *)(v6 + 280) = 0;
  v8 = 16;
LABEL_15:
  ESM_AddEvent((KSPIN_LOCK *)(v6 + 288), v8);
}
