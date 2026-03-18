/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1C016264C
 * Callers:
 *     DpiFdoDispatchPower @ 0x1C0162620 (DpiFdoDispatchPower.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C001FA38 (DpiCorrectPowerAction.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C0162D14 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1C0162DE0 (DpiFdoStopMiracastSession.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0165010 (DpiFdoInvalidateChildRelations.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0166AF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1C02CE744 (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapters @ 0x1C02CE810 (DpiKsrStopAdapters.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  char *DeviceExtension; // rsi
  __int64 v5; // rdx
  __int64 v6; // r15
  struct _IO_REMOVE_LOCK *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // rax
  bool v17; // cl
  int v18; // ebx
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  POWER_STATE v28; // ebx
  char v29; // di
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-89h]
  char v36; // [rsp+40h] [rbp-79h]
  int v37; // [rsp+44h] [rbp-75h]
  __int64 v39; // [rsp+50h] [rbp-69h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-61h] BYREF
  struct _IO_REMOVE_LOCK *v41; // [rsp+60h] [rbp-59h]
  struct _KEVENT Event; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v43[10]; // [rsp+80h] [rbp-39h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v36 = 0;
  v5 = 0LL;
  v6 = Context[23];
  if ( *(_BYTE *)(v6 + 1) != 2 )
  {
    if ( *(_BYTE *)(v6 + 1) == 3 )
    {
      if ( *(_DWORD *)(v6 + 24) != 1 )
      {
        v39 = -300000000LL;
        LOBYTE(v5) = 1;
        DpiFdoStopMiracastSession(DeviceObject, v5, &v39, 131LL);
      }
      goto LABEL_8;
    }
    LODWORD(v5) = -1073741637;
LABEL_4:
    if ( (_DWORD)v5 == -1073741637 )
    {
      ++*((_BYTE *)Context + 67);
      Context[23] = v6 + 72;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), (PIRP)Context);
    }
LABEL_8:
    v8 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    v41 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Context, File, 1u, 0x20u);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = Context[23];
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    v10 = Context[23];
    *(_QWORD *)(v10 - 16) = DpiFdoPowerCompletionRoutine;
    *(_QWORD *)(v10 - 8) = &Event;
    *(_BYTE *)(v10 - 69) = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), (PIRP)Context);
    v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v15 = v11;
    if ( v11 )
    {
      v16 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdError(v16);
      goto LABEL_65;
    }
    LODWORD(v15) = *((_DWORD *)Context + 12);
    if ( (int)v15 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v19 + 24) = *(unsigned __int8 *)(v6 + 1);
      WdLogEvent5_WdWarning(v19);
LABEL_65:
      if ( (_DWORD)v15 != 259 )
      {
        PoStartNextPowerIrp((PIRP)Context);
        *((_DWORD *)Context + 12) = v15;
        IofCompleteRequest((PIRP)Context, 0);
        IoReleaseRemoveLockEx(v8, Context, 0x20u);
        if ( v36 )
          LODWORD(v15) = 259;
      }
      return v15;
    }
    if ( *(_BYTE *)(v6 + 1) == 2
      && DeviceExtension[1158]
      && *(_DWORD *)(v6 + 24) == 1
      && *((_DWORD *)DeviceExtension + 71) != 1 )
    {
      Timeout.QuadPart = -150000000LL;
      v20 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
      v23 = v20;
      if ( v20 == 258 )
      {
        v24 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v24 + 24) = 258LL;
      }
      else
      {
        if ( v20 >= 0 )
        {
          v25 = KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL);
          v23 = v25;
          if ( v25 >= 0 )
            goto LABEL_34;
        }
        v24 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v24 + 24) = v23;
      }
      WdLogEvent5_WdError(v24);
    }
LABEL_34:
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( *(_BYTE *)(v6 + 1) == 2 )
    {
      v26 = *(_DWORD *)(v6 + 24);
      if ( v26 > 1 )
        *((_DWORD *)DeviceExtension + 70) = v26;
    }
    v27 = *(int *)(v6 + 24);
    v28.SystemState = *(SYSTEM_POWER_STATE *)&DeviceExtension[4 * v27 + 1312];
    if ( !DeviceExtension[1158] )
    {
      if ( DeviceExtension[480] )
      {
        LODWORD(v15) = 0;
        if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
          && *((_DWORD *)DeviceExtension + 5) == 2
          && *((_DWORD *)DeviceExtension + 59) == 2
          && *(_BYTE *)(v6 + 1) == 2 )
        {
          v37 = *(_DWORD *)(v6 + 32);
          if ( !DeviceExtension[1154] || (v29 = 1, (unsigned int)(dword_1C00AFD68 - 4) > 1) )
            v29 = 0;
          if ( v28.SystemState == PowerSystemWorking )
            v37 = DpiCorrectPowerAction((__int64)DeviceObject, v27, *(_DWORD *)(v6 + 32));
          if ( v29 && v28.SystemState < *((_DWORD *)DeviceExtension + 71) && byte_1C00AFD88 )
          {
            LOBYTE(v27) = 1;
            DpiAcquirePostDisplayInfoFromBgfx(&xmmword_1C00AFCC8, v27, 0LL);
            byte_1C00AFD88 = 0;
            dword_1C00AFDB4 = 1;
            qword_1C00AFD70 = (__int64)KeGetCurrentThread();
            qword_1C00AFD78 = (__int64)DeviceObject;
          }
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))DpiDxgkDdiSetPowerState)(
            *((_QWORD *)DeviceExtension + 5),
            *((_QWORD *)DeviceExtension + 6),
            -1,
            (POWER_STATE)v28.SystemState,
            v37);
          if ( v29 )
          {
            if ( *(_DWORD *)(v6 + 24) == 5 )
            {
              byte_1C00AFD88 = 1;
              LOBYTE(v30) = 1;
              InbvNotifyDisplayOwnershipChange(v30, DpiEnterSystemDisplay);
            }
            else if ( v28.SystemState < *((_DWORD *)DeviceExtension + 71) )
            {
              xmmword_1C00AFCD8 = 0LL;
              DWORD2(xmmword_1C00AFCD8) = -1;
              xmmword_1C00AFCC8 = 0LL;
              memset(&xmmword_1C00AFCE8, 0, 0x80uLL);
              qword_1C00AFD78 = 0LL;
              qword_1C00AFD70 = (__int64)KeGetCurrentThread();
            }
          }
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3792), 1u);
          *((POWER_STATE *)DeviceExtension + 71) = v28;
          ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3792));
          KeLeaveCriticalRegion();
          if ( v28.SystemState == PowerSystemWorking )
          {
            memset(v43, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v43[1]);
            v43[8] = MEMORY[0xFFFFF78000000014];
            LODWORD(v43[3]) = 11;
            LOBYTE(v43[6]) = -1;
            DpiFdoInvalidateChildRelations(DeviceObject, 6LL, v43);
          }
        }
        *((_DWORD *)DeviceExtension + 70) = *(_DWORD *)(v6 + 24);
      }
      else
      {
        v36 = 1;
        *(_BYTE *)(Context[23] + 3LL) |= 1u;
        v31 = PoRequestPowerIrp(
                DeviceObject,
                *(_BYTE *)(v6 + 1),
                v28,
                (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                Context,
                0LL);
        v15 = v31;
        if ( v31 != 259 )
        {
          v34 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v34 + 24) = v15;
          WdLogEvent5_WdError(v34);
        }
      }
    }
    if ( DeviceExtension[484] )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    v8 = v41;
    goto LABEL_65;
  }
  v17 = 0;
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v17 = DeviceExtension[5072] != 0;
  if ( *(_DWORD *)(v6 + 24) != 6 || v17 || !HIBYTE(word_1C00AFF10) )
    goto LABEL_4;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_KsrDisplay__private_reporting,
    0xB841E8u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v35);
  v18 = DpiKsrStopAdapters(DeviceObject, (PIRP)Context);
  if ( v18 == -1073741637 )
    goto LABEL_8;
  if ( (unsigned int)(dword_1C00AFD68 - 1) <= 1 )
    DpiKsrSetBootGraphicsInformation();
  return v18;
}
