/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x1C0038180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  int v7; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        81,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 60);
    if ( (_BYTE)v6 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          4u,
          0xDu,
          0x52u,
          (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
          1,
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
          *(_DWORD *)(v3 + 144));
      *(_DWORD *)(v3 + 280) = 0;
      v7 = 16;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x53u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4101, 0LL, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) != 0 )
    return;
  v7 = 12;
LABEL_13:
  ESM_AddEvent((KSPIN_LOCK *)(v3 + 288), v7);
}
