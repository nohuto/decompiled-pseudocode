/*
 * XREFs of rimObsPushInputMessage @ 0x1C017D5E4
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C017CB90 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     rimObsCopyMessage @ 0x1C017CA20 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  int v9; // r9d
  _QWORD *v10; // rdi
  int v12; // eax
  unsigned int v13; // r14d
  void *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+28h] [rbp-30h]

  v4 = (__int64)a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      23,
      10,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1);
  }
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v7 = *(_DWORD *)(a1 + 164);
    if ( v7 != -1 )
      *(_DWORD *)(a1 + 164) = ++v7;
    v8 = -1073741756;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
      LOBYTE(a2) = 3;
LABEL_28:
      LODWORD(v16) = v7;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        v9,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v16);
      return v8;
    }
    return v8;
  }
  v10 = 0LL;
  if ( *(_QWORD *)(v4 + 24) > 0xFFFFFFBFuLL )
  {
    v8 = -1073741675;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(v4 + 24);
  v13 = v12 + 48;
  v14 = Win32AllocPoolZInit((unsigned int)(v12 + 64), 0x716D4F52u);
  v10 = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        12,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v8 = -1073741670;
    goto LABEL_14;
  }
  v8 = rimObsCopyMessage(v4, 0LL, (void **)v14 + 2, v13);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        14,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( v10 )
      Win32FreePool((__int64)v10);
    return v8;
  }
  v15 = *(_QWORD **)(a1 + 152);
  if ( *v15 != v6 )
    __fastfail(3u);
  v10[1] = v15;
  *v10 = v6;
  *v15 = v10;
  *(_QWORD *)(a1 + 152) = v10;
  v7 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 13;
    LOBYTE(a2) = 4;
    goto LABEL_28;
  }
  return v8;
}
