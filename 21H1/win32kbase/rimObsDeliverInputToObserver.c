/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C0184CC0
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01859EC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0183C48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01848E0 (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C0184B50 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C0185714 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // edx
  _QWORD *v11; // r14
  int v12; // edx
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  void **v18; // r15
  int v19; // edx
  unsigned int v20; // r9d
  int v21; // edx
  int v22; // edx
  void *v23; // rcx
  int v24; // edx
  char v25; // al
  int v26; // r9d
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-51h]
  PHANDLE Handle; // [rsp+30h] [rbp-49h]
  int v29[2]; // [rsp+40h] [rbp-39h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-31h]
  int v31; // [rsp+50h] [rbp-29h]
  int v32; // [rsp+54h] [rbp-25h]
  __int64 v33; // [rsp+58h] [rbp-21h]
  int v34; // [rsp+60h] [rbp-19h]
  int v35; // [rsp+64h] [rbp-15h]
  __int64 v36; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  int v38; // [rsp+78h] [rbp-1h]
  int v39; // [rsp+7Ch] [rbp+3h]
  __int128 v40; // [rsp+80h] [rbp+7h]
  __int128 v41; // [rsp+90h] [rbp+17h]
  HANDLE v42; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v43; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v44; // [rsp+F0h] [rbp+77h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x17u,
      0x14u,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      a1,
      a2);
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v43 = a2;
    v44 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C024C960,
      byte_1C021E2DF,
      v4,
      v5,
      (__int64)&v44,
      (__int64)&v43);
  }
  v6 = 0;
  RIMLockExclusive(a2 + 176);
  v42 = rimObsCheckForExistingDeviceHandle(a2, *(PVOID *)(a1 + 32));
  if ( v42 == (HANDLE)-1LL )
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
    v6 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &v42);
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
      v9 = Win32AllocPoolZInit(0x18uLL, 0x65684F52u);
      v11 = v9;
      if ( !v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v10,
            23,
            22,
            (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
        }
        v6 = -1073741670;
        ObCloseHandle(v42, *(_BYTE *)(a2 + 72));
        goto LABEL_14;
      }
      v9[2] = v42;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          23,
          23,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          v42);
      }
      v7 = *(_QWORD **)(a2 + 136);
      if ( *v7 != a2 + 128 )
        __fastfail(3u);
      *v11 = a2 + 128;
      v11[1] = v7;
      *v7 = v11;
      *(_QWORD *)(a2 + 136) = v11;
    }
    if ( v6 < 0 )
      goto LABEL_14;
  }
  LODWORD(v14) = 48;
  v29[1] = 0;
  v32 = 0;
  v35 = 0;
  if ( *(_DWORD *)(a2 + 104) < 0x30u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
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
    v14 = *(_QWORD *)(a1 + 264) + 48LL;
  }
  if ( v6 < 0 )
    goto LABEL_14;
  v15 = *(unsigned int *)(a1 + 256);
  v16 = *(unsigned __int8 *)(a1 + 48);
  v33 = *(_QWORD *)(a1 + 264);
  v30 = v42;
  v29[0] = 0;
  v31 = v15;
  v34 = v16;
  v36 = 0LL;
  if ( (int)v15 >= 0 )
  {
    if ( v16 )
    {
      if ( --v16 )
      {
        if ( v16 == 1 )
          v36 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
        goto LABEL_45;
      }
      v17 = a1 + 504;
    }
    else
    {
      v17 = a1 + 476;
    }
    v36 = v17;
  }
LABEL_45:
  if ( *(_DWORD *)(a2 + 88) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        23,
        27,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    v18 = *(void ***)(a2 + 96);
    v6 = rimObsCopyMessage(v29, *(_DWORD *)(a2 + 72), v18, *(_DWORD *)(a2 + 104));
    if ( v6 == -1073741789 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(Handle) = v14;
        *(_DWORD *)AccessMode = *(_DWORD *)(a2 + 104);
        WPP_RECORDER_SF_Dd(
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          3u,
          0x17u,
          0x1Cu,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
          *(_QWORD *)AccessMode,
          Handle);
      }
      v20 = *(_DWORD *)(a2 + 104);
      v21 = *(_DWORD *)(a2 + 72);
      v37 = 1LL;
      v38 = 0;
      v39 = v14;
      v40 = 0LL;
      v41 = 0LL;
      rimObsCopyMessage((int *)&v37, v21, v18, v20);
      v6 = rimObsPushInputMessage(a2, v29);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_56:
        v23 = *(void **)(a2 + 80);
        *(_DWORD *)(a2 + 88) = 0;
        ZwSetEvent(v23, 0LL);
        goto LABEL_61;
      }
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v19,
        23,
        29,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v22,
        23,
        30,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    }
    goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v16,
      23,
      31,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
  v6 = rimObsPushInputMessage(a2, v29);
  if ( v6 == -1073741756 )
    v6 = 0;
LABEL_61:
  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 && (*(_DWORD *)(a2 + 120) & 2) != 0 )
  {
    v25 = *(_BYTE *)(a1 + 48);
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_14;
      *(_DWORD *)(a1 + 696) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v26 = 33;
    }
    else
    {
      *(_DWORD *)(a1 + 916) = 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v26 = 32;
    }
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v24,
      23,
      v26,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  }
LABEL_14:
  *(_QWORD *)(a2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(a2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)AccessMode = v6;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v12,
      23,
      34,
      (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
      *(_QWORD *)AccessMode);
  }
  return (unsigned int)v6;
}
