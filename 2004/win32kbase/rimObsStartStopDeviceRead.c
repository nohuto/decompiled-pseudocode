/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C0180078
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C017E6F4 (rimObsAddInputObserver.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C0019CAC (RIMHidTLCActive.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0019FC0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0062160 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  int v3; // r12d
  int v4; // r15d
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]

  if ( *(_DWORD *)(a1 + 108) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        53,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    return 0LL;
  }
  v3 = *(unsigned __int16 *)(a1 + 116);
  v4 = *(unsigned __int16 *)(a1 + 112);
  v5 = RIMSearchHidTLCInfo(*(_WORD *)(a1 + 112), *(_WORD *)(a1 + 116));
  v10 = v5;
  if ( a2 )
  {
    if ( v5 )
      goto LABEL_15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x17u,
        0x36u,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v4,
        v3);
    v10 = RIMAllocateAndLinkHidTLCInfo(v4, v3);
  }
  if ( v10 )
  {
LABEL_15:
    v12 = *((_DWORD *)v10 + 7);
    if ( a2 )
    {
      v13 = v12 + 1;
      *((_DWORD *)v10 + 7) = v13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_23:
        CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
        if ( !*((_DWORD *)v10 + 5) && !(unsigned int)RIMHidTLCActive(v10) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v3;
            LODWORD(v15) = v4;
            WPP_RECORDER_SF_DD(
              (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
              4u,
              0x17u,
              0x3Au,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v15,
              v16);
          }
          RIMFreeHidTLCInfo((__int64 *)v10);
        }
        return 0LL;
      }
      v14 = 56;
    }
    else
    {
      if ( !v12 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
        v12 = *((_DWORD *)v10 + 7);
      }
      v13 = v12 - 1;
      *((_DWORD *)v10 + 7) = v13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v14 = 57;
    }
    LODWORD(v15) = v13;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      23,
      v14,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v15);
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      23,
      55,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  return 3221225626LL;
}
