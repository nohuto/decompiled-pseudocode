/*
 * XREFs of rimObsPopInputMessage @ 0x1C017D36C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C017D200 (rimObsObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C017C77C (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C017CA20 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, void **a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // r13d
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+4Ch] [rbp-24h]
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int128 v24; // [rsp+60h] [rbp-10h]

  v4 = a4;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      15,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1);
  }
  v8 = a1 + 144;
  if ( *(_DWORD *)(v8 + 16) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v9 = *(_DWORD *)(v8 + 20);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *(_DWORD *)(v8 + 20);
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        18,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v19);
      v9 = *(_DWORD *)(v8 + 20);
    }
    v20 = 1LL;
    v21 = 2;
    v22 = v9;
    v23 = 0LL;
    v24 = 0LL;
    v17 = rimObsCopyMessage((__int64)&v20, v6, a3, v4);
    *(_DWORD *)(v8 + 20) = 0;
    v10 = v17;
  }
  else if ( *(_DWORD *)(v8 + 16) )
  {
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == v8 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v11 = *(_QWORD *)v8;
    }
    v12 = rimObsCopyMessage(v11 + 16, v6, a3, v4);
    v10 = v12;
    if ( v12 == -1073741789 )
    {
      v20 = 1LL;
      v21 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v22 = rimObsCalculateObserverMessageSize((unsigned int *)(v11 + 16), a2, v13, v14);
      v10 = rimObsCopyMessage((__int64)&v20, v6, a3, v4);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      LODWORD(v19) = v4;
      WPP_RECORDER_SF_Dd(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x17u,
        0x10u,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v19,
        v22);
    }
    else if ( v12 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          23,
          17,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      }
      v15 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v16 = *(_QWORD **)(v11 + 8), *v16 != v11) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      Win32FreePool(v11);
      --*(_DWORD *)(v8 + 16);
    }
  }
  else
  {
    v10 = -2147483622;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v10;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      19,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v19);
  }
  return v10;
}
