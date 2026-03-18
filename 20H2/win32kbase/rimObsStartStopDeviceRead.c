/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C017DC48
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C0029244 (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C017C2C4 (rimObsAddInputObserver.c)
 * Callees:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0023600 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     RIMHidTLCActive @ 0x1C0028A94 (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C006EAD8 (WPP_RECORDER_SF_DD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00719B4 (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00BE500 (RIMFreeHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  __int16 v3; // r12
  __int16 v4; // r15
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  __int64 v16; // [rsp+28h] [rbp-30h]

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
  v3 = *(_WORD *)(a1 + 116);
  v4 = *(_WORD *)(a1 + 112);
  v5 = RIMSearchHidTLCInfo(v4, v3);
  v10 = v5;
  if ( a2 )
  {
    if ( v5 )
      goto LABEL_15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_DD(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        23,
        54,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v4,
        v3);
    }
    v10 = RIMAllocateAndLinkHidTLCInfo(v4, v3);
  }
  if ( v10 )
  {
LABEL_15:
    v12 = v10[7];
    if ( a2 )
    {
      v13 = v12 + 1;
      v10[7] = v13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_23:
        CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
        if ( !v10[5] && !(unsigned int)RIMHidTLCActive(v10) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = 4;
            WPP_RECORDER_SF_DD(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v15,
              23,
              58,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v4,
              v3);
          }
          RIMFreeHidTLCInfo((__int64)v10);
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
        v12 = v10[7];
      }
      v13 = v12 - 1;
      v10[7] = v13;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v14 = 57;
    }
    LODWORD(v16) = v13;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      23,
      v14,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v16);
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
