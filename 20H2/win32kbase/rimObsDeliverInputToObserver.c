/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C017CB90
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017D8BC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017BB18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C017C7B0 (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C017CA20 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C017D5E4 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  int v12; // edx
  _QWORD *v13; // r14
  int v14; // edx
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  void **v20; // r15
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // edx
  void *v25; // rcx
  int v26; // edx
  char v27; // al
  int v28; // r9d
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-51h]
  PHANDLE Handle; // [rsp+30h] [rbp-49h]
  char Handlea; // [rsp+30h] [rbp-49h]
  _DWORD v32[2]; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-31h]
  int v34; // [rsp+50h] [rbp-29h]
  int v35; // [rsp+54h] [rbp-25h]
  __int64 v36; // [rsp+58h] [rbp-21h]
  int v37; // [rsp+60h] [rbp-19h]
  int v38; // [rsp+64h] [rbp-15h]
  __int64 v39; // [rsp+68h] [rbp-11h]
  __int64 v40; // [rsp+70h] [rbp-9h] BYREF
  int v41; // [rsp+78h] [rbp-1h]
  int v42; // [rsp+7Ch] [rbp+3h]
  __int128 v43; // [rsp+80h] [rbp+7h]
  __int128 v44; // [rsp+90h] [rbp+17h]
  HANDLE v45; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v46; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+F0h] [rbp+77h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Handlea = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      20,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1,
      Handlea);
  }
  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v46 = v2;
    v47 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C0244A70,
      byte_1C0216900,
      v4,
      v5,
      (__int64)&v47,
      (__int64)&v46);
  }
  v6 = 0;
  RIMLockExclusive(v2 + 176);
  v45 = rimObsCheckForExistingDeviceHandle(v2, *(PVOID *)(a1 + 32));
  if ( v45 == (HANDLE)-1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        21,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v6 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &v45);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          (_DWORD)v7,
          23,
          24,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      }
    }
    else
    {
      v11 = Win32AllocPoolZInit(0x18uLL, 0x65684F52u);
      v13 = v11;
      if ( !v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v12,
            23,
            22,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        }
        v6 = -1073741670;
        ObCloseHandle(v45, *(_BYTE *)(v2 + 72));
        goto LABEL_14;
      }
      v11[2] = v45;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v12,
          23,
          23,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          v45);
      }
      v7 = *(_QWORD **)(v2 + 136);
      if ( *v7 != v2 + 128 )
        __fastfail(3u);
      *v13 = v2 + 128;
      v13[1] = v7;
      *v7 = v13;
      *(_QWORD *)(v2 + 136) = v13;
    }
    if ( v6 < 0 )
      goto LABEL_14;
  }
  LODWORD(v16) = 48;
  v32[1] = 0;
  v35 = 0;
  v38 = 0;
  if ( *(_DWORD *)(v2 + 104) < 0x30u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( *(int *)(a1 + 256) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 256);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)AccessMode = *(_DWORD *)(a1 + 256);
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        26,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        *(_QWORD *)AccessMode);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
    {
      v6 = -1073741675;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v7,
        23,
        25,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( v6 < 0 )
      goto LABEL_14;
    v16 = *(_QWORD *)(a1 + 264) + 48LL;
  }
  if ( v6 < 0 )
    goto LABEL_14;
  v17 = *(unsigned int *)(a1 + 256);
  LODWORD(v18) = *(unsigned __int8 *)(a1 + 48);
  v36 = *(_QWORD *)(a1 + 264);
  v33 = v45;
  v32[0] = 0;
  v34 = v17;
  v37 = v18;
  v39 = 0LL;
  if ( (int)v17 >= 0 )
  {
    if ( (_DWORD)v18 )
    {
      v18 = (unsigned int)(v18 - 1);
      if ( (_DWORD)v18 )
      {
        if ( (_DWORD)v18 == 1 )
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v18, v9, v10);
        goto LABEL_45;
      }
      v19 = a1 + 504;
    }
    else
    {
      v19 = a1 + 476;
    }
    v39 = v19;
  }
LABEL_45:
  if ( *(_DWORD *)(v2 + 88) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        23,
        27,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v20 = *(void ***)(v2 + 96);
    v6 = rimObsCopyMessage((__int64)v32, *(unsigned int *)(v2 + 72), v20, *(unsigned int *)(v2 + 104));
    if ( v6 == -1073741789 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(Handle) = v16;
        *(_DWORD *)AccessMode = *(_DWORD *)(v2 + 104);
        WPP_RECORDER_SF_Dd(
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          3u,
          0x17u,
          0x1Cu,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          *(_QWORD *)AccessMode,
          Handle);
      }
      v22 = *(unsigned int *)(v2 + 104);
      v23 = *(unsigned int *)(v2 + 72);
      v40 = 1LL;
      v41 = 0;
      v42 = v16;
      v43 = 0LL;
      v44 = 0LL;
      rimObsCopyMessage((__int64)&v40, v23, v20, v22);
      v6 = rimObsPushInputMessage(v2, v32);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_56:
        v25 = *(void **)(v2 + 80);
        *(_DWORD *)(v2 + 88) = 0;
        ZwSetEvent(v25, 0LL);
        goto LABEL_61;
      }
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v21,
        23,
        29,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v24,
        23,
        30,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      23,
      31,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
  v6 = rimObsPushInputMessage(v2, v32);
  if ( v6 == -1073741756 )
    v6 = 0;
LABEL_61:
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 && (*(_DWORD *)(v2 + 120) & 2) != 0 )
  {
    v27 = *(_BYTE *)(a1 + 48);
    if ( v27 )
    {
      if ( v27 != 1 )
        goto LABEL_14;
      *(_DWORD *)(a1 + 696) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v28 = 33;
    }
    else
    {
      *(_DWORD *)(a1 + 920) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v28 = 32;
    }
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v26,
      23,
      v28,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
LABEL_14:
  *(_QWORD *)(v2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)AccessMode = v6;
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v14,
      23,
      34,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      *(_QWORD *)AccessMode);
  }
  return (unsigned int)v6;
}
