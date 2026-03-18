/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0026220
 * Callers:
 *     <none>
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C002741C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0027850 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01396B4 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013CB90 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01531B0 (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0161AA0 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C016BB64 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C016BCBC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C194 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016CFC4 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v16; // rcx
  const void *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  const UNICODE_STRING *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  NTSTATUS v24; // eax
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
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
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r9
  int v54; // edx
  int v55; // [rsp+20h] [rbp-B9h]
  char v56; // [rsp+60h] [rbp-79h]
  __int64 v57; // [rsp+68h] [rbp-71h] BYREF
  int v58; // [rsp+70h] [rbp-69h] BYREF
  int v59; // [rsp+78h] [rbp-61h]
  int v60; // [rsp+7Ch] [rbp-5Dh]
  int v61; // [rsp+80h] [rbp-59h]
  int v62; // [rsp+84h] [rbp-55h]
  int v63; // [rsp+88h] [rbp-51h]
  int v64; // [rsp+8Ch] [rbp-4Dh]
  int v65; // [rsp+90h] [rbp-49h]
  int v66; // [rsp+94h] [rbp-45h] BYREF
  __int64 v67; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v68[3]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v70[8]; // [rsp+C0h] [rbp-19h] BYREF
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
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_S(
      (_DWORD)gRimLog,
      (_DWORD)v7,
      1,
      46,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v11 = *((_QWORD *)NotificationStructure + 5);
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v10 )
  {
    v38 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v38 )
      v38 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v38 && (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 256LL, v11, a4) )
    {
      v68[0] = v34;
      v36 = v68;
      v37 = &unk_1C0214C7C;
      goto LABEL_53;
    }
  }
  else if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 256LL, v11, a4) )
  {
    v67 = v34;
    v36 = &v67;
    v37 = &unk_1C0214CB0;
LABEL_53:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
      (unsigned int)&dword_1C0244A70,
      (_DWORD)v37,
      v34,
      v35,
      (__int64)v36);
  }
  v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v12 )
  {
    v13 = 0LL;
    v59 = 0;
    v14 = 0;
    if ( !*(_BYTE *)(v6 + 81) && ((unsigned int)DeviceTypeToRimInputType((unsigned int)v4) & *(_DWORD *)(v6 + 84)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v70, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
        goto LABEL_29;
      RIMLockExclusive(v6 + 104);
      if ( !*(_BYTE *)(v6 + 80) && !*(_BYTE *)(v6 + 81) )
      {
        v13 = *(_QWORD *)(v6 + 424);
        v57 = v13;
        if ( v13 )
        {
          v21 = (const UNICODE_STRING *)v13;
          while ( 1 )
          {
            v16 = *(unsigned int *)(v13 + 184);
            if ( (v16 & 0x20) == 0
              && (v16 & 0x2000) == 0
              && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v21 + 13, 0) )
            {
              break;
            }
            v21 = *(const UNICODE_STRING **)(v13 + 40);
            v57 = (__int64)v21;
            v13 = (__int64)v21;
            if ( !v21 )
              goto LABEL_22;
          }
          if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sdq(
                *(unsigned __int8 *)(v13 + 48),
                *((_QWORD *)NotificationStructure + 5),
                v22,
                47,
                v55,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
                *(_BYTE *)(v13 + 48),
                *(_QWORD *)(v13 + 248));
            if ( !*(_QWORD *)(v13 + 248)
              && (unsigned int)dword_1C0243250 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x400000000000LL, v22, v23) )
            {
              v39 = *(_DWORD *)(v13 + 184);
              v40 = RimDeviceTypeToRimInputType(v13, *(unsigned __int8 *)(v13 + 48));
              v61 = -__CFSHR__(v39, 22);
              v62 = v41;
              v63 = v42;
              v60 = -__CFSHR__(v39, 24);
              v65 = 0;
              v64 = v43;
              v68[1] = v40;
              v68[2] = *(_QWORD *)(v13 + 216);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v44,
                &unk_1C0214BA5);
              v14 = 0;
            }
            if ( *(_BYTE *)(v13 + 48) == 3 )
            {
              v58 = 0;
              v66 = 0;
              v69 = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v15,
                  1,
                  48,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
              if ( (unsigned int)RIMFindInputDeviceForConfig(
                                   *(_QWORD *)(v13 + 464),
                                   v6,
                                   v13,
                                   (unsigned int)&v58,
                                   (__int64)&v66,
                                   (__int64)&v69)
                && v58
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v45) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v45,
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
        v56 = 0;
        v17 = *(const void **)(v6 + 32);
        memset(&ApcState, 0, sizeof(ApcState));
        if ( v17 == (const void *)PsGetCurrentProcess(v16, v15) )
          goto LABEL_23;
        if ( *(_BYTE *)(v6 + 10) )
        {
          DbgPrintGDI(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
            *(const void **)(v6 + 72),
            v17,
            *(const void **)(v6 + 40),
            *(_DWORD *)(v6 + 84));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v47,
              v46,
              v48,
              50,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              *(_QWORD *)(v6 + 72),
              *(_QWORD *)(v6 + 32),
              *(_QWORD *)(v6 + 40),
              *(_DWORD *)(v6 + 84));
        }
        else
        {
          v9 = PsAcquireProcessExitSynchronization(v17);
          if ( v9 < 0 )
            goto LABEL_28;
          KeStackAttachProcess(*(PRKPROCESS *)(v6 + 32), &ApcState);
          v56 = 1;
        }
        if ( v9 >= 0 )
        {
LABEL_23:
          if ( v13 )
          {
            RIMLockExclusive(v6 + 568);
            if ( (*(_DWORD *)(v13 + 184) & 0x400) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
            if ( (*(_DWORD *)(v13 + 200) & 1) != 0 )
            {
              if ( *(_QWORD *)(v13 + 224) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              if ( *(_QWORD *)(v13 + 232) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v49) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gRimLog,
                  v49,
                  1,
                  51,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  v13);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v13 + 188) & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              if ( *(_QWORD *)(v13 + 192) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
                v14 = 1;
              else
                *(_DWORD *)(v13 + 200) |= 2u;
              v13 = v57;
            }
            *(_QWORD *)(v6 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v6 + 568, 0LL);
            KeLeaveCriticalRegion();
            if ( v14 )
            {
              rimDoRimDevChange(v6, v13, 3LL, v53);
              RIMFreeDev(v6, v13);
            }
            v57 = 0LL;
            v14 = 0;
          }
          v9 = RIMCreateDev((PVOID)v6, 0, 0LL, (__int64)&v57);
          if ( v56 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsReleaseProcessExitSynchronization(*(_QWORD *)(v6 + 32));
          }
          if ( v9 >= 0 )
          {
            v13 = v57;
            if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
            {
              *(_DWORD *)(v57 + 184) |= 1u;
              v9 = RIMDoOnPnpNotification(v6, v13, v18, v19);
            }
            else
            {
              v59 = 1;
            }
            if ( v9 >= 0 )
            {
              v14 = 1;
              v24 = ObReferenceObjectByPointer((PVOID)v6, 3u, ExRawInputManagerObjectType, 1);
              if ( v24 < 0 )
              {
                v14 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v25) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v25,
                    1,
                    52,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v6,
                    v24);
                }
              }
              v9 = ObReferenceObjectByPointer(*(PVOID *)(v13 + 32), 3u, ExRawInputManagerObjectType, 1);
              if ( v9 < 0 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
                v14 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v54) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v54,
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
            v13 = v57;
          }
        }
      }
LABEL_28:
      *(_QWORD *)(v6 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
      KeLeaveCriticalRegion();
LABEL_29:
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v70);
      if ( v14 )
      {
        RIMLockExclusive(v6 + 104);
        if ( v59 )
        {
          if ( v9 < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
          if ( (*(_DWORD *)(v13 + 184) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
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
