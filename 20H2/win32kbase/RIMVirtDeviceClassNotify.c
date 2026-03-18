/*
 * XREFs of RIMVirtDeviceClassNotify @ 0x1C016C488
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3350 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMDoOnPnpNotification @ 0x1C0020EE0 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0027850 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C0027D5C (WPP_RECORDER_SF_S.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01396B4 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013CB90 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01531B0 (WPP_RECORDER_SF_qqqD.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C194 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016CFC4 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotify(char *Object, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // r15
  int Dev; // esi
  int v6; // edx
  __int64 v7; // rbx
  int v8; // r12d
  const UNICODE_STRING *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  int v12; // edx
  int v13; // r8d
  const void *v14; // r14
  int v15; // eax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v34; // [rsp+20h] [rbp-69h]
  __int64 v35; // [rsp+30h] [rbp-59h]
  char v36; // [rsp+50h] [rbp-39h]
  __int64 v37; // [rsp+58h] [rbp-31h] BYREF
  int v38; // [rsp+60h] [rbp-29h]
  _BYTE v39[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v3 = a2;
  Dev = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v6,
        1,
        68,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        *(_QWORD *)(v3 + 8));
    }
  }
  v7 = 0LL;
  v8 = 0;
  v38 = 0;
  if ( !Object[81] && ((unsigned int)DeviceTypeToRimInputType(v2) & *((_DWORD *)Object + 21)) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v39, 1, 1u);
    RIMLockExclusive((__int64)(Object + 104));
    if ( Object[80] || Object[81] )
    {
LABEL_65:
      *((_QWORD *)Object + 14) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v39);
      if ( v38 )
      {
        RIMLockExclusive((__int64)(Object + 104));
        v32 = *(_DWORD *)(v7 + 184) | 0x40000000;
        *(_DWORD *)(v7 + 184) = v32;
        if ( v8 )
        {
          if ( Dev < 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
            v32 = *(_DWORD *)(v7 + 184);
          }
          if ( (v32 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
          RIMSignalOnPnpNotificationAndWait((__int64)Object, v7, 1, 0, 0, 0);
        }
        *((_QWORD *)Object + 14) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v7 + 32));
        ObfDereferenceObject(Object);
      }
      return 0LL;
    }
    v7 = *((_QWORD *)Object + 53);
    v37 = v7;
    v11 = v7;
    if ( v7 )
    {
      v9 = (const UNICODE_STRING *)v7;
      while ( !RtlEqualUnicodeString((PCUNICODE_STRING)v3, v9 + 13, 0) )
      {
        v7 = *(_QWORD *)(v7 + 40);
        v37 = v7;
        v11 = v7;
        v9 = (const UNICODE_STRING *)v7;
        if ( !v7 )
          goto LABEL_12;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Sdq(
          *(unsigned __int8 *)(v7 + 48),
          v12,
          v13,
          69,
          v34,
          *(_QWORD *)(v3 + 8),
          *(_BYTE *)(v7 + 48),
          *(_QWORD *)(v7 + 248));
      *(_DWORD *)(v7 + 184) |= 0x40000000u;
      goto LABEL_19;
    }
LABEL_12:
    v36 = 0;
    v14 = (const void *)*((_QWORD *)Object + 4);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( v14 == (const void *)PsGetCurrentProcess(v10, v9) )
    {
      v16 = 0;
    }
    else
    {
      if ( Object[10] )
      {
        DbgPrintGDI(
          "RIMVirtDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
          *((const void **)Object + 9),
          v14,
          *((const void **)Object + 5),
          *((_DWORD *)Object + 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqD(
            v18,
            v17,
            v19,
            0x46u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            *((_QWORD *)Object + 9),
            *((_QWORD *)Object + 4),
            *((_QWORD *)Object + 5),
            *((_DWORD *)Object + 21));
        v16 = 0;
      }
      else
      {
        v15 = PsAcquireProcessExitSynchronization(v14);
        v16 = 0;
        Dev = v15;
        if ( v15 < 0 )
        {
LABEL_19:
          v8 = 0;
          goto LABEL_65;
        }
        KeStackAttachProcess(*((PRKPROCESS *)Object + 4), &ApcState);
        v36 = 1;
      }
      if ( Dev < 0 )
        goto LABEL_64;
    }
    if ( v11 )
    {
      RIMLockExclusive((__int64)(Object + 568));
      if ( (*(_DWORD *)(v7 + 184) & 0x400) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
      if ( (*(_DWORD *)(v7 + 200) & 1) != 0 )
      {
        if ( *(_QWORD *)(v7 + 224) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
        if ( *(_QWORD *)(v7 + 232) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
        if ( (*(_DWORD *)(v7 + 184) & 0x80u) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v20, 1, 71, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v7);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v7 + 188) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
        if ( *(_QWORD *)(v7 + 192) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          v16 = 1;
        else
          *(_DWORD *)(v7 + 200) |= 2u;
        v7 = v37;
      }
      *((_QWORD *)Object + 72) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( v16 )
      {
        rimDoRimDevChange((__int64)Object, v7, 3LL, v24);
        RIMFreeDev((__int64)Object, v7);
      }
      v37 = 0LL;
    }
    Dev = RIMVirtCreateDev(
            (CDeviceIdentity **)Object,
            *(unsigned int *)(v3 + 16),
            v3,
            *(unsigned int *)(v3 + 20),
            v3,
            (struct _UNICODE_STRING **)&v37);
    if ( v36 )
    {
      KeUnstackDetachProcess(&ApcState);
      PsReleaseProcessExitSynchronization(*((_QWORD *)Object + 4));
    }
    if ( Dev >= 0 && !*(_DWORD *)(v3 + 20) )
    {
      v7 = v37;
      if ( *((struct _KTHREAD **)Object + 5) == KeGetCurrentThread() )
      {
        *(_DWORD *)(v37 + 184) |= 1u;
        v8 = 0;
        Dev = RIMDoOnPnpNotification((__int64)Object, v7, v25, v26);
      }
      else
      {
        v8 = 1;
      }
      if ( Dev >= 0 )
      {
        v38 = 1;
        v27 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
        if ( v27 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v35) = v27;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x48u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v35);
        }
        Dev = ObReferenceObjectByPointer(*(PVOID *)(v7 + 32), 3u, ExRawInputManagerObjectType, 1);
        if ( Dev < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v35) = Dev;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x49u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v35);
        }
      }
      goto LABEL_65;
    }
    v7 = v37;
LABEL_64:
    v8 = 0;
    goto LABEL_65;
  }
  return 0LL;
}
