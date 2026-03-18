/*
 * XREFs of rimObsPushInputMessage @ 0x1C0185714
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     rimObsCopyMessage @ 0x1C0184B50 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // esi
  int v8; // r9d
  _QWORD *v9; // rdi
  int v11; // eax
  unsigned int v12; // r14d
  void *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]

  v3 = a2;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
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
    v6 = *(_DWORD *)(a1 + 164);
    if ( v6 != -1 )
      *(_DWORD *)(a1 + 164) = ++v6;
    v7 = -1073741756;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      LOBYTE(a2) = 3;
LABEL_28:
      LODWORD(v15) = v6;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        23,
        v8,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v15);
      return v7;
    }
    return v7;
  }
  v9 = 0LL;
  if ( *((_QWORD *)v3 + 3) > 0xFFFFFFBFuLL )
  {
    v7 = -1073741675;
    goto LABEL_14;
  }
  v11 = v3[6];
  v12 = v11 + 48;
  v13 = Win32AllocPoolZInit((unsigned int)(v11 + 64), 0x716D4F52u);
  v9 = v13;
  if ( !v13 )
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
    v7 = -1073741670;
    goto LABEL_14;
  }
  v7 = rimObsCopyMessage(v3, 0, (void **)v13 + 2, v12);
  if ( (v7 & 0x80000000) != 0 )
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
    if ( v9 )
      Win32FreePool((__int64)v9, (__int64)a2, a3);
    return v7;
  }
  v14 = *(_QWORD **)(a1 + 152);
  if ( *v14 != v5 )
    __fastfail(3u);
  v9[1] = v14;
  *v9 = v5;
  *v14 = v9;
  *(_QWORD *)(a1 + 152) = v9;
  v6 = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 13;
    LOBYTE(a2) = 4;
    goto LABEL_28;
  }
  return v7;
}
