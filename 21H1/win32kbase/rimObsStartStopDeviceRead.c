/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C0185D78
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C01843F4 (rimObsAddInputObserver.c)
 * Callees:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0056E40 (RIMFreeHidTLCInfo.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0057100 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C009FB60 (WPP_RECORDER_SF_DD.c)
 *     RIMHidTLCActive @ 0x1C00A307C (RIMHidTLCActive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  int v3; // r12d
  int v4; // r15d
  __int64 *v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

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
  v8 = (__int64)v5;
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
    v8 = RIMAllocateAndLinkHidTLCInfo(v4, v3);
  }
  if ( v8 )
  {
LABEL_15:
    v10 = *(_DWORD *)(v8 + 28);
    if ( a2 )
    {
      v11 = v10 + 1;
      *(_DWORD *)(v8 + 28) = v11;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_23:
        CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
        if ( !*(_DWORD *)(v8 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v8) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v14) = v3;
            LODWORD(v13) = v4;
            WPP_RECORDER_SF_DD(
              (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
              4u,
              0x17u,
              0x3Au,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v13,
              v14);
          }
          RIMFreeHidTLCInfo((__int64 *)v8);
        }
        return 0LL;
      }
      v12 = 56;
    }
    else
    {
      if ( !v10 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        v10 = *(_DWORD *)(v8 + 28);
      }
      v11 = v10 - 1;
      *(_DWORD *)(v8 + 28) = v11;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v12 = 57;
    }
    LODWORD(v13) = v11;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v6,
      23,
      v12,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v13);
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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  return 3221225626LL;
}
