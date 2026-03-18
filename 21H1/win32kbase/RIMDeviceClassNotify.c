/*
 * XREFs of RIMDeviceClassNotify @ 0x1C009F050
 * Callers:
 *     <none>
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0059D84 (RIMDoOnPnpNotification.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C00A160C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C00A1B00 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     rimDoRimDevChange @ 0x1C00A3168 (rimDoRimDevChange.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C015BA60 (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C016A350 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C01742C0 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C0174418 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C0175724 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context)
{
  __int64 v2; // r13
  __int64 v4; // r14
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const void *v14; // rbx
  const UNICODE_STRING *v16; // rax
  int v17; // r8d
  NTSTATUS v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 *v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // eax
  int v29; // r11d
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rcx
  int v39; // edx
  int v40; // [rsp+20h] [rbp-B9h]
  char v41; // [rsp+60h] [rbp-79h]
  __int64 v42; // [rsp+68h] [rbp-71h] BYREF
  int v43; // [rsp+70h] [rbp-69h] BYREF
  int v44; // [rsp+78h] [rbp-61h]
  int v45; // [rsp+7Ch] [rbp-5Dh]
  int v46; // [rsp+80h] [rbp-59h]
  int v47; // [rsp+84h] [rbp-55h]
  int v48; // [rsp+88h] [rbp-51h]
  int v49; // [rsp+8Ch] [rbp-4Dh]
  int v50; // [rsp+90h] [rbp-49h]
  int v51; // [rsp+94h] [rbp-45h] BYREF
  __int64 v52; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v53[3]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v55[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v2 = *((unsigned int *)Context + 2);
  v4 = *Context;
  if ( (unsigned int)v2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(NotificationStructure);
  v5 = *(_QWORD **)(32 * (v2 + 4) + v4);
  v6 = *(_QWORD *)(NotificationStructure + 20) - *v5;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 28) - v5[1];
  if ( v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_S(
      (_DWORD)gRimLog,
      (_DWORD)v5,
      1,
      46,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v8 )
  {
    v26 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v26 && (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
    {
      v53[0] = v22;
      v24 = v53;
      v25 = &unk_1C021C65B;
      goto LABEL_53;
    }
  }
  else if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v52 = v22;
    v24 = &v52;
    v25 = &unk_1C021C68F;
LABEL_53:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
      (unsigned int)&dword_1C024C960,
      (_DWORD)v25,
      v22,
      v23,
      (__int64)v24);
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v9 )
  {
    v10 = 0LL;
    v44 = 0;
    v11 = 0;
    if ( !*(_BYTE *)(v4 + 81) && ((unsigned int)DeviceTypeToRimInputType((unsigned int)v2) & *(_DWORD *)(v4 + 84)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v55, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
        goto LABEL_29;
      RIMLockExclusive(v4 + 104);
      if ( !*(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) )
      {
        v10 = *(_QWORD *)(v4 + 424);
        v42 = v10;
        if ( v10 )
        {
          v16 = (const UNICODE_STRING *)v10;
          while ( 1 )
          {
            v13 = *(unsigned int *)(v10 + 184);
            if ( (v13 & 0x20) == 0
              && (v13 & 0x2000) == 0
              && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v16 + 13, 0) )
            {
              break;
            }
            v16 = *(const UNICODE_STRING **)(v10 + 40);
            v42 = (__int64)v16;
            v10 = (__int64)v16;
            if ( !v16 )
              goto LABEL_22;
          }
          if ( (*(_DWORD *)(v10 + 200) & 0x20) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sdq(
                *(unsigned __int8 *)(v10 + 48),
                *((_QWORD *)NotificationStructure + 5),
                v17,
                47,
                v40,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
                *(_BYTE *)(v10 + 48),
                *(_QWORD *)(v10 + 248));
            if ( !*(_QWORD *)(v10 + 248)
              && (unsigned int)dword_1C024B250 > 5
              && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
            {
              v27 = *(_DWORD *)(v10 + 184);
              v28 = RimDeviceTypeToRimInputType(v10, *(unsigned __int8 *)(v10 + 48));
              v46 = -__CFSHR__(v27, 22);
              v47 = v29;
              v48 = v30;
              v45 = -__CFSHR__(v27, 24);
              v50 = 0;
              v49 = v31;
              v53[1] = v28;
              v53[2] = *(_QWORD *)(v10 + 216);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v32,
                &unk_1C021C584);
              v11 = 0;
            }
            if ( *(_BYTE *)(v10 + 48) == 3 )
            {
              v43 = 0;
              v51 = 0;
              v54 = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v12) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v12,
                  1,
                  48,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
              if ( (unsigned int)RIMFindInputDeviceForConfig(
                                   *(_QWORD *)(v10 + 464),
                                   v4,
                                   v10,
                                   (unsigned int)&v43,
                                   (__int64)&v51,
                                   (__int64)&v54)
                && v43
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v33,
                  1,
                  49,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
            }
            goto LABEL_28;
          }
        }
LABEL_22:
        v41 = 0;
        v14 = *(const void **)(v4 + 32);
        memset(&ApcState, 0, sizeof(ApcState));
        if ( v14 == (const void *)PsGetCurrentProcess(v13, v12) )
          goto LABEL_23;
        if ( *(_BYTE *)(v4 + 10) )
        {
          DbgPrintGDI(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
            *(const void **)(v4 + 72),
            v14,
            *(const void **)(v4 + 40),
            *(_DWORD *)(v4 + 84));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v35,
              v34,
              v36,
              50,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              *(_QWORD *)(v4 + 72),
              *(_QWORD *)(v4 + 32),
              *(_QWORD *)(v4 + 40),
              *(_DWORD *)(v4 + 84));
        }
        else
        {
          v7 = PsAcquireProcessExitSynchronization(v14);
          if ( v7 < 0 )
            goto LABEL_28;
          KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
          v41 = 1;
        }
        if ( v7 >= 0 )
        {
LABEL_23:
          if ( v10 )
          {
            RIMLockExclusive(v4 + 568);
            if ( (*(_DWORD *)(v10 + 184) & 0x400) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
            if ( (*(_DWORD *)(v10 + 200) & 1) != 0 )
            {
              if ( *(_QWORD *)(v10 + 224) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              if ( *(_QWORD *)(v10 + 232) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              if ( (*(_DWORD *)(v10 + 184) & 0x80u) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v37) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gRimLog,
                  v37,
                  1,
                  51,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  v10);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v10 + 188) & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              if ( *(_QWORD *)(v10 + 192) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                v11 = 1;
              else
                *(_DWORD *)(v10 + 200) |= 2u;
              v10 = v42;
            }
            *(_QWORD *)(v4 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
            KeLeaveCriticalRegion();
            if ( v11 )
            {
              rimDoRimDevChange(v4, v10, 3LL);
              RIMFreeDev(v4, v10);
            }
            v42 = 0LL;
            v11 = 0;
          }
          v7 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v42);
          if ( v41 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
          }
          if ( v7 >= 0 )
          {
            v10 = v42;
            if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
            {
              *(_DWORD *)(v42 + 184) |= 1u;
              v7 = RIMDoOnPnpNotification(v4, v10);
            }
            else
            {
              v44 = 1;
            }
            if ( v7 >= 0 )
            {
              v11 = 1;
              v18 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
              if ( v18 < 0 )
              {
                v11 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v19) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v19,
                    1,
                    52,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v4,
                    v18);
                }
              }
              v7 = ObReferenceObjectByPointer(*(PVOID *)(v10 + 32), 3u, ExRawInputManagerObjectType, 1);
              if ( v7 < 0 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
                v11 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v39) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v39,
                    1,
                    53,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v4,
                    v7);
                }
              }
            }
          }
          else
          {
            v10 = v42;
          }
        }
      }
LABEL_28:
      *(_QWORD *)(v4 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
      KeLeaveCriticalRegion();
LABEL_29:
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v55);
      if ( v11 )
      {
        RIMLockExclusive(v4 + 104);
        if ( v44 )
        {
          if ( v7 < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          if ( (*(_DWORD *)(v10 + 184) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          RIMSignalOnPnpNotificationAndWait(v4, v10, 1, 0, 0, 0);
        }
        *(_QWORD *)(v4 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v10 + 32));
        ObfDereferenceObject((PVOID)v4);
      }
    }
  }
  return 0LL;
}
