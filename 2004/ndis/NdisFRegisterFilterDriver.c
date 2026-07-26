/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C002F320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002E6A0 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002E81C (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C002F7C0 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0031E50 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0067624 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0069E78 (McTemplateK0zq_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C0102A14 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105DE8 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C01066B0 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C0106938 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C010B7A0 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116624 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v7; // rsi
  unsigned __int8 v8; // r14
  unsigned int v9; // edx
  int v10; // ecx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  _BOOL8 v14; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  _UNICODE_STRING *p_ServiceName; // r12
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // r15d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  PVOID v21; // rax
  NDIS_BIND_FILTER_DRIVER **p_Bind; // r14
  size_t v23; // r8
  unsigned int Flags; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  NDIS_BIND_FILTER_DRIVER **FilterDriver; // rax
  NDIS_BIND_FILTER_DRIVER *v28; // rbx
  NDIS_BIND_FILTER_DRIVER *v29; // rcx
  _QWORD *v30; // rbx
  KIRQL v31; // al
  enum CallRunMode v32; // r8d
  NDIS_STATUS v34; // eax
  void *v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  struct _UNICODE_STRING *v38; // [rsp+28h] [rbp-80h]
  size_t Size; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  GUID Guid; // [rsp+50h] [rbp-58h] BYREF

  P = FilterDriverContext;
  LODWORD(Size) = 0;
  v7 = 0LL;
  v8 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  ndisWaitForKernelObject(&ndisPnPMutex);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(
                           FilterDriverCharacteristics,
                           (unsigned int *)&Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_1C00E61C2 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
    goto LABEL_50;
  }
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v14 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v14 == (OidRequestHandler == 0LL) )
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0xDu,
            (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
            DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00E61C2 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v14,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_39;
      }
      MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
      if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
      {
        DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v14 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
        if ( v14 != (DirectOidRequestHandler == 0LL) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0xEu,
              (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
              DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00E61C2 & 4) != 0 )
            McTemplateK0zq_EtwWriteTransfer(
              v14,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_39;
        }
        if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0xFu,
              (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
              DriverObject);
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00E61C2 & 4) != 0 )
            McTemplateK0zq_EtwWriteTransfer(
              v14,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_39;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x10u,
            (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
            DriverObject);
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00E61C2 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v14,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || FilterDriverCharacteristics->MinorNdisVersion < 0x28u) )
          v8 = 0;
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName, v8);
        if ( !FilterDriverRegistry )
        {
          if ( (FilterDriverCharacteristics->MajorNdisVersion > 6u
             || FilterDriverCharacteristics->MajorNdisVersion == 6
             && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
            && (FilterDriverCharacteristics->Flags & 0xFFFFFFF8) != 0 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v38) = FilterDriverCharacteristics->Flags;
              WPP_RECORDER_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x11u,
                (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                v38);
            }
            FilterDriverRegistry = -1073741811;
          }
          else
          {
            v18 = p_ServiceName->Length + FilterDriverCharacteristics->UniqueName.Length;
            v19 = v18 + FilterDriverCharacteristics->FriendlyName.Length + 368;
            if ( v19 <= 0xFFFF )
            {
              PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x7666444Eu);
              v7 = PoolWithTag;
              if ( !PoolWithTag )
              {
                FilterDriverRegistry = -1073741670;
                goto LABEL_39;
              }
              memset(PoolWithTag, 0, v19);
              v21 = P;
              p_Bind = (NDIS_BIND_FILTER_DRIVER **)&v7->Bind;
              v7->Bind._p = 0LL;
              *(_WORD *)&v7->Header.Type = 260;
              v7->Header.Size = v19;
              v7->DriverObject = DriverObject;
              v7->FilterDriverContext = v21;
              KeInitializeSpinLock(&v7->Lock);
              ndisInitializeRef(&v7->Ref, 5u);
              v23 = (unsigned int)Size;
              v7->DeviceList.Blink = &v7->DeviceList;
              v7->DeviceList.Flink = &v7->DeviceList;
              memmove(&v7->DefaultFilterCharacteristics, FilterDriverCharacteristics, v23);
              if ( v7->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
                && (v7->DefaultFilterCharacteristics.MajorNdisVersion != 6
                 || v7->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              {
                v7->DefaultFilterCharacteristics.Flags &= ~1u;
              }
              Flags = v7->DefaultFilterCharacteristics.Flags;
              v7->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v7[1].Header.Type;
              v7->Flags = Flags;
              v25 = (__int64)&v7[1] + FilterDriverCharacteristics->FriendlyName.Length;
              v7->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v25;
              v7->DefaultFilterCharacteristics.ServiceName.Buffer = (wchar_t *)(v25
                                                                              + FilterDriverCharacteristics->UniqueName.Length);
              memmove(
                &v7[1],
                FilterDriverCharacteristics->FriendlyName.Buffer,
                FilterDriverCharacteristics->FriendlyName.Length);
              RtlUpcaseUnicodeString(
                &v7->DefaultFilterCharacteristics.UniqueName,
                &FilterDriverCharacteristics->UniqueName,
                0);
              memmove(
                v7->DefaultFilterCharacteristics.ServiceName.Buffer,
                FilterDriverCharacteristics->ServiceName.Buffer,
                p_ServiceName->Length);
              Guid = 0LL;
              if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Z(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x13u,
                    (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                    &FilterDriverCharacteristics->UniqueName.Length);
              }
              else
              {
                LOBYTE(v26) = 1;
                FilterDriver = (NDIS_BIND_FILTER_DRIVER **)ndisBindGetFilterDriver(&P, &Guid, v26);
                if ( p_Bind != FilterDriver )
                {
                  v28 = *FilterDriver;
                  *FilterDriver = 0LL;
                  v29 = *p_Bind;
                  if ( *p_Bind
                    && _InterlockedExchangeAdd((volatile signed __int32 *)&v29[1].DriverReady, 0xFFFFFFFF) == 1 )
                  {
                    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v29);
                  }
                  *p_Bind = v28;
                }
                v30 = P;
                if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 && v30 )
                {
                  v35 = (void *)v30[6];
                  v30[6] = 0LL;
                  if ( v35 )
                    ExFreePoolWithTag(v35, 0x7274534Bu);
                  v36 = v30[1];
                  if ( *(_QWORD **)(v36 + 8) != v30 + 1 || (v37 = (_QWORD *)v30[2], (_QWORD *)*v37 != v30 + 1) )
                    __fastfail(3u);
                  *v37 = v36;
                  *(_QWORD *)(v36 + 8) = v37;
                  ExFreePoolWithTag(v30, 0x446C4642u);
                }
                if ( *p_Bind )
                {
                  *NdisFilterDriverHandle = v7;
                  if ( !FilterDriverCharacteristics->SetOptionsHandler
                    || (v34 = ndisFInvokeSetOptions(v7), (FilterDriverRegistry = v34) == 0) )
                  {
                    v31 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                    v7->NextFilterDriver = ndisFilterDriverList;
                    ndisFilterDriverList = v7;
                    KeReleaseSpinLock(&ndisFilterDriverListLock, v31);
                    ObfReferenceObject(ndisDriverObject);
                    ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v7->ImageName);
                    ndisWriteDriverNDISVersionToServiceKey(
                      FilterDriverCharacteristics->MajorNdisVersion,
                      FilterDriverCharacteristics->MinorNdisVersion,
                      1,
                      FilterDriverCharacteristics->MajorDriverVersion,
                      FilterDriverCharacteristics->MinorDriverVersion,
                      &FilterDriverCharacteristics->ServiceName);
                    FilterDriverRegistry = 0;
                    NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*p_Bind, v7, v32);
                    goto LABEL_39;
                  }
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v38) = v34;
                    WPP_RECORDER_SF_d(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      1u,
                      0x15u,
                      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                      v38);
                  }
                  *NdisFilterDriverHandle = 0LL;
LABEL_50:
                  if ( !FilterDriverRegistry )
                    goto LABEL_39;
                  goto LABEL_51;
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v9) = 2;
                  WPP_RECORDER_SF__guid_(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v9,
                    1,
                    20,
                    (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                    (__int64)&Guid);
                }
              }
              FilterDriverRegistry = -1073741823;
LABEL_51:
              if ( v7 )
              {
                _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v7, v9);
                ExFreePoolWithTag(v7, 0);
              }
              goto LABEL_39;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x12u,
                (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
                DriverObject);
            FilterDriverRegistry = -1073741811;
            if ( (byte_1C00E61C2 & 4) != 0 )
              McTemplateK0zq_EtwWriteTransfer(
                v18,
                (unsigned int)&FilterRegistrationFailed,
                v17,
                FilterDriverCharacteristics->FriendlyName.Buffer,
                7);
          }
        }
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          DriverObject);
      FilterDriverRegistry = -1073676283;
      if ( (byte_1C00E61C2 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v14,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
        DriverObject);
    FilterDriverRegistry = -1073676283;
    if ( (byte_1C00E61C2 & 4) != 0 )
    {
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
      goto LABEL_50;
    }
  }
LABEL_39:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v38) = FilterDriverRegistry;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x16u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      v38);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
