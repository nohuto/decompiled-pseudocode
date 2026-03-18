/*
 * XREFs of RIMDeviceClassNotify @ 0x1C00AAD80
 * Callers:
 *     <none>
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C00AAADC (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013EEE0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C0155710 (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0164000 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C016DF98 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C016E0F0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016E5C4 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016F3F4 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // edi
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const void *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  const UNICODE_STRING *v23; // rax
  int v24; // r8d
  NTSTATUS v25; // eax
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // r9d
  __int64 *v36; // rax
  void *v37; // rdx
  __int64 v38; // rax
  int v39; // edi
  unsigned int v40; // eax
  int v41; // r11d
  int v42; // r10d
  int v43; // r9d
  __int64 v44; // rcx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r9
  int v53; // edx
  int v54; // [rsp+20h] [rbp-B9h]
  char v55; // [rsp+60h] [rbp-79h]
  __int64 v56; // [rsp+68h] [rbp-71h] BYREF
  int v57; // [rsp+70h] [rbp-69h] BYREF
  int v58; // [rsp+78h] [rbp-61h]
  int v59; // [rsp+7Ch] [rbp-5Dh]
  int v60; // [rsp+80h] [rbp-59h]
  int v61; // [rsp+84h] [rbp-55h]
  int v62; // [rsp+88h] [rbp-51h]
  int v63; // [rsp+8Ch] [rbp-4Dh]
  int v64; // [rsp+90h] [rbp-49h]
  int v65; // [rsp+94h] [rbp-45h] BYREF
  __int64 v66; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v67[3]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v69[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v4 = *((unsigned int *)Context + 2);
  v6 = *Context;
  if ( (unsigned int)v4 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(NotificationStructure, Context, a3, a4);
  v7 = *(_QWORD **)(32 * (v4 + 4) + v6);
  v8 = *(_QWORD *)(NotificationStructure + 20) - *v7;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 28) - v7[1];
  if ( v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, a3, a4);
  v9 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      (__int64)gRimLog,
      4u,
      1u,
      0x2Eu,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v11 = *((_QWORD *)NotificationStructure + 5);
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v10 )
  {
    v38 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v38 )
      v38 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v38 && (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
    {
      v67[0] = v11;
      v36 = v67;
      v37 = &unk_1C0216AEB;
      goto LABEL_53;
    }
  }
  else if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
  {
    v66 = v11;
    v36 = &v66;
    v37 = &unk_1C0216B1F;
LABEL_53:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
      (unsigned int)&dword_1C0246A70,
      (_DWORD)v37,
      v11,
      v35,
      (__int64)v36);
  }
  v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v12 )
  {
    v13 = 0LL;
    v58 = 0;
    v14 = 0;
    if ( !*(_BYTE *)(v6 + 81)
      && ((unsigned int)DeviceTypeToRimInputType((unsigned int)v4, v7, v11) & *(_DWORD *)(v6 + 84)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v69, 1, 1u);
      if ( (unsigned int)ApiSetIsRemoteConnection(v16, v15) )
        goto LABEL_29;
      RIMLockExclusive(v6 + 104);
      if ( !*(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) )
      {
        v13 = *(_QWORD *)(v6 + 424);
        v56 = v13;
        if ( v13 )
        {
          v23 = (const UNICODE_STRING *)v13;
          while ( 1 )
          {
            v18 = *(unsigned int *)(v13 + 184);
            if ( (v18 & 0x20) == 0
              && (v18 & 0x2000) == 0
              && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v23 + 13, 0) )
            {
              break;
            }
            v23 = *(const UNICODE_STRING **)(v13 + 40);
            v56 = (__int64)v23;
            v13 = (__int64)v23;
            if ( !v23 )
              goto LABEL_22;
          }
          if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sdq(
                *(unsigned __int8 *)(v13 + 48),
                *((_QWORD *)NotificationStructure + 5),
                v24,
                47,
                v54,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
                *(_BYTE *)(v13 + 48),
                *(_QWORD *)(v13 + 248));
            if ( !*(_QWORD *)(v13 + 248)
              && (unsigned int)dword_1C0245250 > 5
              && tlgKeywordOn((__int64)&dword_1C0245250, 0x400000000000LL) )
            {
              v39 = *(_DWORD *)(v13 + 184);
              v40 = RimDeviceTypeToRimInputType(v13, *(unsigned __int8 *)(v13 + 48));
              v60 = -__CFSHR__(v39, 22);
              v61 = v41;
              v62 = v42;
              v59 = -__CFSHR__(v39, 24);
              v64 = 0;
              v63 = v43;
              v67[1] = v40;
              v67[2] = *(_QWORD *)(v13 + 216);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v44,
                &unk_1C0216A14);
              v14 = 0;
            }
            if ( *(_BYTE *)(v13 + 48) == 3 )
            {
              v57 = 0;
              v65 = 0;
              v68 = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_S(
                  (__int64)gRimLog,
                  4u,
                  1u,
                  0x30u,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              if ( (unsigned int)RIMFindInputDeviceForConfig(
                                   *(_QWORD *)(v13 + 464),
                                   v6,
                                   v13,
                                   (unsigned int)&v57,
                                   (__int64)&v65,
                                   (__int64)&v68)
                && v57
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_S(
                  (__int64)gRimLog,
                  4u,
                  1u,
                  0x31u,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
            }
            goto LABEL_28;
          }
        }
LABEL_22:
        v55 = 0;
        v19 = *(const void **)(v6 + 32);
        memset(&ApcState, 0, sizeof(ApcState));
        if ( v19 == (const void *)PsGetCurrentProcess(v18, v17) )
          goto LABEL_23;
        if ( *(_BYTE *)(v6 + 10) )
        {
          DbgPrintGDI(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
            *(const void **)(v6 + 72),
            v19,
            *(const void **)(v6 + 40),
            *(_DWORD *)(v6 + 84));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v46,
              v45,
              v47,
              50,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              *(_QWORD *)(v6 + 72),
              *(_QWORD *)(v6 + 32),
              *(_QWORD *)(v6 + 40),
              *(_DWORD *)(v6 + 84));
        }
        else
        {
          v9 = PsAcquireProcessExitSynchronization(v19);
          if ( v9 < 0 )
            goto LABEL_28;
          KeStackAttachProcess(*(PRKPROCESS *)(v6 + 32), &ApcState);
          v55 = 1;
        }
        if ( v9 >= 0 )
        {
LABEL_23:
          if ( v13 )
          {
            RIMLockExclusive(v6 + 568);
            if ( (*(_DWORD *)(v13 + 184) & 0x400) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
            if ( (*(_DWORD *)(v13 + 200) & 1) != 0 )
            {
              if ( *(_QWORD *)(v13 + 224) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
              if ( *(_QWORD *)(v13 + 232) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
              if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v48) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gRimLog,
                  v48,
                  1,
                  51,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  v13);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v13 + 188) & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
              if ( *(_QWORD *)(v13 + 192) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                v14 = 1;
              else
                *(_DWORD *)(v13 + 200) |= 2u;
              v13 = v56;
            }
            *(_QWORD *)(v6 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v6 + 568, 0LL);
            KeLeaveCriticalRegion();
            if ( v14 )
            {
              rimDoRimDevChange(v6, v13, 3LL, v52);
              RIMFreeDev(v6, v13);
            }
            v56 = 0LL;
            v14 = 0;
          }
          v9 = RIMCreateDev((PVOID)v6, 0, 0LL, (__int64)&v56);
          if ( v55 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsReleaseProcessExitSynchronization(*(_QWORD *)(v6 + 32));
          }
          if ( v9 >= 0 )
          {
            v13 = v56;
            if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
            {
              *(_DWORD *)(v56 + 184) |= 1u;
              v9 = RIMDoOnPnpNotification(v6, v13, v20, v21);
            }
            else
            {
              v58 = 1;
            }
            if ( v9 >= 0 )
            {
              v14 = 1;
              v25 = ObReferenceObjectByPointer((PVOID)v6, 3u, ExRawInputManagerObjectType, 1);
              if ( v25 < 0 )
              {
                v14 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v26) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v26,
                    1,
                    52,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v6,
                    v25);
                }
              }
              v9 = ObReferenceObjectByPointer(*(PVOID *)(v13 + 32), 3u, ExRawInputManagerObjectType, 1);
              if ( v9 < 0 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
                v14 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v53) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v53,
                    1,
                    53,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v6,
                    v9);
                }
              }
            }
          }
          else
          {
            v13 = v56;
          }
        }
      }
LABEL_28:
      *(_QWORD *)(v6 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
      KeLeaveCriticalRegion();
LABEL_29:
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v69);
      if ( v14 )
      {
        RIMLockExclusive(v6 + 104);
        if ( v58 )
        {
          if ( v9 < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
          if ( (*(_DWORD *)(v13 + 184) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
          RIMSignalOnPnpNotificationAndWait(v6, v13, 1, 0, 0, 0);
        }
        *(_QWORD *)(v6 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v13 + 32));
        ObfDereferenceObject((PVOID)v6);
      }
    }
  }
  return 0LL;
}
