/*
 * XREFs of rimObsPopInputMessage @ 0x1C018549C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C0185330 (rimObsObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01848AC (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C0184B50 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  int v6; // r13d
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  __int64 v18; // [rsp+28h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+4Ch] [rbp-24h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int128 v23; // [rsp+60h] [rbp-10h]

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
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v9 = *(_DWORD *)(v8 + 20);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = *(_DWORD *)(v8 + 20);
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        18,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v18);
      v9 = *(_DWORD *)(v8 + 20);
    }
    v19 = 1LL;
    v20 = 2;
    v21 = v9;
    v22 = 0LL;
    v23 = 0LL;
    v16 = rimObsCopyMessage((int *)&v19, v6, a3, a4);
    *(_DWORD *)(v8 + 20) = 0;
    v10 = v16;
  }
  else if ( *(_DWORD *)(v8 + 16) )
  {
    v11 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 == v8 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v11 = *(_QWORD *)v8;
    }
    v12 = rimObsCopyMessage((int *)(v11 + 16), v6, a3, a4);
    v10 = v12;
    if ( v12 == -1073741789 )
    {
      v19 = 1LL;
      v20 = 0;
      v22 = 0LL;
      v23 = 0LL;
      v21 = rimObsCalculateObserverMessageSize((_DWORD *)(v11 + 16));
      v10 = rimObsCopyMessage((int *)&v19, v6, a3, a4);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      LODWORD(v18) = a4;
      WPP_RECORDER_SF_Dd(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x17u,
        0x10u,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v18,
        v21);
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
      v14 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v15 = *(_QWORD **)(v11 + 8), *v15 != v11) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      Win32FreePool(v11, a2, v13);
      --*(_DWORD *)(v8 + 16);
    }
  }
  else
  {
    v10 = -2147483622;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v18) = v10;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      19,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      v18);
  }
  return v10;
}
