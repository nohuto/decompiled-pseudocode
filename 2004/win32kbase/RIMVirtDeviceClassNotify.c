/*
 * XREFs of RIMVirtDeviceClassNotify @ 0x1C016E8B8
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B56C0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0015E90 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C0015FD8 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013EEE0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C01530C0 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C0155710 (WPP_RECORDER_SF_qqqD.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016E5C4 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016F3F4 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotify(char *Object, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // r15
  int Dev; // esi
  __int64 v6; // rbx
  int v7; // r12d
  const UNICODE_STRING *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  int v11; // edx
  int v12; // r8d
  const void *v13; // r14
  int v14; // eax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  int v33; // [rsp+20h] [rbp-69h]
  __int64 v34; // [rsp+30h] [rbp-59h]
  char v35; // [rsp+50h] [rbp-39h]
  __int64 v36; // [rsp+58h] [rbp-31h] BYREF
  int v37; // [rsp+60h] [rbp-29h]
  _BYTE v38[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v3 = a2;
  Dev = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)gRimLog,
        4u,
        1u,
        0x44u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        *(const wchar_t **)(v3 + 8));
  }
  v6 = 0LL;
  v7 = 0;
  v37 = 0;
  if ( !Object[81] && ((unsigned int)DeviceTypeToRimInputType(v2) & *((_DWORD *)Object + 21)) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v38, 1, 1u);
    RIMLockExclusive((__int64)(Object + 104));
    if ( Object[80] || Object[81] )
    {
LABEL_65:
      *((_QWORD *)Object + 14) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v38);
      if ( v37 )
      {
        RIMLockExclusive((__int64)(Object + 104));
        v31 = *(_DWORD *)(v6 + 184) | 0x40000000;
        *(_DWORD *)(v6 + 184) = v31;
        if ( v7 )
        {
          if ( Dev < 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
            v31 = *(_DWORD *)(v6 + 184);
          }
          if ( (v31 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
          RIMSignalOnPnpNotificationAndWait((__int64)Object, v6, 1, 0, 0, 0);
        }
        *((_QWORD *)Object + 14) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v6 + 32));
        ObfDereferenceObject(Object);
      }
      return 0LL;
    }
    v6 = *((_QWORD *)Object + 53);
    v36 = v6;
    v10 = v6;
    if ( v6 )
    {
      v8 = (const UNICODE_STRING *)v6;
      while ( !RtlEqualUnicodeString((PCUNICODE_STRING)v3, v8 + 13, 0) )
      {
        v6 = *(_QWORD *)(v6 + 40);
        v36 = v6;
        v10 = v6;
        v8 = (const UNICODE_STRING *)v6;
        if ( !v6 )
          goto LABEL_12;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Sdq(
          *(unsigned __int8 *)(v6 + 48),
          v11,
          v12,
          69,
          v33,
          *(_QWORD *)(v3 + 8),
          *(_BYTE *)(v6 + 48),
          *(_QWORD *)(v6 + 248));
      *(_DWORD *)(v6 + 184) |= 0x40000000u;
      goto LABEL_19;
    }
LABEL_12:
    v35 = 0;
    v13 = (const void *)*((_QWORD *)Object + 4);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( v13 == (const void *)PsGetCurrentProcess(v9, v8) )
    {
      v15 = 0;
    }
    else
    {
      if ( Object[10] )
      {
        DbgPrintGDI(
          "RIMVirtDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
          *((const void **)Object + 9),
          v13,
          *((const void **)Object + 5),
          *((_DWORD *)Object + 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqD(
            v17,
            v16,
            v18,
            0x46u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            *((_QWORD *)Object + 9),
            *((_QWORD *)Object + 4),
            *((_QWORD *)Object + 5),
            *((_DWORD *)Object + 21));
        v15 = 0;
      }
      else
      {
        v14 = PsAcquireProcessExitSynchronization(v13);
        v15 = 0;
        Dev = v14;
        if ( v14 < 0 )
        {
LABEL_19:
          v7 = 0;
          goto LABEL_65;
        }
        KeStackAttachProcess(*((PRKPROCESS *)Object + 4), &ApcState);
        v35 = 1;
      }
      if ( Dev < 0 )
        goto LABEL_64;
    }
    if ( v10 )
    {
      RIMLockExclusive((__int64)(Object + 568));
      if ( (*(_DWORD *)(v6 + 184) & 0x400) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
      if ( (*(_DWORD *)(v6 + 200) & 1) != 0 )
      {
        if ( *(_QWORD *)(v6 + 224) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( *(_QWORD *)(v6 + 232) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( (*(_DWORD *)(v6 + 184) & 0x80u) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v19, 1, 71, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v6);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v6 + 188) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( *(_QWORD *)(v6 + 192) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          v15 = 1;
        else
          *(_DWORD *)(v6 + 200) |= 2u;
        v6 = v36;
      }
      *((_QWORD *)Object + 72) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( v15 )
      {
        rimDoRimDevChange((__int64)Object, v6, 3LL, v23);
        RIMFreeDev((__int64)Object, v6);
      }
      v36 = 0LL;
    }
    Dev = RIMVirtCreateDev(
            (CDeviceIdentity **)Object,
            *(unsigned int *)(v3 + 16),
            (const UNICODE_STRING *)v3,
            *(unsigned int *)(v3 + 20),
            v3,
            (struct _UNICODE_STRING **)&v36);
    if ( v35 )
    {
      KeUnstackDetachProcess(&ApcState);
      PsReleaseProcessExitSynchronization(*((_QWORD *)Object + 4));
    }
    if ( Dev >= 0 && !*(_DWORD *)(v3 + 20) )
    {
      v6 = v36;
      if ( *((struct _KTHREAD **)Object + 5) == KeGetCurrentThread() )
      {
        *(_DWORD *)(v36 + 184) |= 1u;
        v7 = 0;
        Dev = RIMDoOnPnpNotification((__int64)Object, v6, v24, v25);
      }
      else
      {
        v7 = 1;
      }
      if ( Dev >= 0 )
      {
        v37 = 1;
        v26 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
        if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v34) = v26;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x48u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v34);
        }
        Dev = ObReferenceObjectByPointer(*(PVOID *)(v6 + 32), 3u, ExRawInputManagerObjectType, 1);
        if ( Dev < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v34) = Dev;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x49u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v34);
        }
      }
      goto LABEL_65;
    }
    v6 = v36;
LABEL_64:
    v7 = 0;
    goto LABEL_65;
  }
  return 0LL;
}
