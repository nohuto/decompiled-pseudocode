/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036BC0
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C0036BA0 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C0060BE0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00624A0 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BD2C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002EA00 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002EB7C (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C0036FF0 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005F784 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E48 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0106870 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C01068A0 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0109BC8 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x1C0109C98 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  struct _NDIS_M_DRIVER_BLOCK *v6; // rbx
  unsigned int v8; // r15d
  _UNICODE_STRING *p_DriverName; // rdx
  unsigned int v10; // edi
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r13
  size_t v13; // rdi
  __int64 v14; // rdx
  PVOID PoolWithTag; // rax
  PVOID v16; // rcx
  struct _UNICODE_STRING *v17; // rdx
  unsigned int Flags; // edx
  unsigned int v19; // eax
  LOGICAL IsDriverVerifyingByAddress; // eax
  void **v21; // r14
  KIRQL v22; // di
  PVOID v23; // rcx
  unsigned int v24; // edx
  struct _NDIS_M_DRIVER_BLOCK *v26; // rax
  size_t Size; // [rsp+30h] [rbp-18h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+48h] BYREF
  struct _UNICODE_STRING *v30; // [rsp+98h] [rbp+50h]
  void *v31; // [rsp+A0h] [rbp+58h]
  unsigned int v32; // [rsp+A8h] [rbp+60h] BYREF

  v31 = a3;
  v30 = a2;
  v6 = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x68u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a1,
      Size);
  v8 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( !a1 && !v8 )
  {
    v10 = -1073741823;
    goto LABEL_30;
  }
  v32 = 0;
  v29 = 0;
  p_DriverName = 0LL;
  if ( !v8 )
    p_DriverName = &a1->DriverName;
  v10 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v32, &v29, (unsigned int *)&Size);
  if ( !v10 )
  {
    v11 = v29;
    v12 = v32;
    v10 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v32, v29);
    if ( !v10 )
    {
      v13 = (unsigned int)v30->Length + 1194;
      if ( v8 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v30->Length + 1194, 0x2020444Eu);
        DriverObjectExtension = PoolWithTag;
        if ( PoolWithTag )
        {
LABEL_13:
          memset(PoolWithTag, 0, v13);
          v6 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
          v16 = DriverObjectExtension;
          *((_QWORD *)DriverObjectExtension + 44) = 0LL;
          memset(v16, 0, 0x4A8uLL);
          v17 = v30;
          v6->MiniportDriverContext = v31;
          v6->Header = (_NDIS_OBJECT_HEADER)78119170;
          v6->MajorNdisVersion = v12;
          v6->MinorNdisVersion = v11;
          v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
          v6->ServiceRegPath.Length = v17->Length;
          v6->ServiceRegPath.MaximumLength = v17->Length + 2;
          memmove(&v6[1], v17->Buffer, v17->Length);
          ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
          Flags = a4->Flags;
          if ( (Flags & 1) != 0 )
          {
            v6->Flags |= 1u;
            KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
            Flags = a4->Flags;
          }
          if ( (Flags & 4) != 0 )
            v6->Flags |= 0x20u;
          memmove(&v6->112, a4, (unsigned int)Size);
          v6->MiniportDriverCharacteristics.MajorNdisVersion = v12;
          v6->MiniportDriverCharacteristics.MinorNdisVersion = v11;
          v19 = a4->Flags;
          if ( (v19 & 0x10) != 0 )
          {
            v6->Flags |= 0x40u;
            v19 = a4->Flags;
          }
          if ( (v19 & 0x20) != 0 )
            v6->Flags |= 0x80u;
          v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
          if ( v8 )
            IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
          else
            IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
          if ( IsDriverVerifyingByAddress )
          {
            v6->Flags |= 2u;
            if ( (ndisFlags & 0x400) != 0 )
            {
              v26 = 0LL;
              if ( !ndisDriverTrackAlloc )
                v26 = v6;
              ndisDriverTrackAlloc = v26;
            }
          }
          v6->MiniportQueue = 0LL;
          if ( (a4->Flags & 0x30) == 0 )
          {
            memset64(a1->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
            a1->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
            a1->DriverUnload = ndisMUnloadEx;
            a1->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
            a1->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
            a1->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
            a1->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
            a1->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
            a1->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
            a1->MajorFunction[23] = ndisWMIIrpDispatch;
          }
          KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
          v6->DriverObject = a1;
          v6->DeviceList.Blink = &v6->DeviceList;
          v6->DeviceList.Flink = &v6->DeviceList;
          ndisInitializeRef(&v6->Ref, 0xCu);
          v21 = a5;
          *a5 = v6;
          v10 = ndisMInvokeSetOptions(v6);
          if ( v10 )
          {
            ndisDereferenceDriver(v6, 0, 0xFFu);
            *v21 = 0LL;
          }
          else
          {
            if ( !a4->OidRequestHandler && !v6->CoOidRequestHandler )
            {
              ndisDereferenceDriver(v6, 0, 0xFFu);
              *v21 = 0LL;
              v10 = -1073676283;
LABEL_45:
              _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, v24);
              if ( v8 )
                ExFreePoolWithTag(v6, 0);
              goto LABEL_30;
            }
            ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
            v22 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            v23 = ndisDriverObject;
            v6->NextDriver = ndisMiniDriverList;
            ndisMiniDriverList = v6;
            ObfReferenceObject(v23);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v22);
            MmUnlockPagableImageSection(ImageSectionHandle);
            _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
            ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
            ndisWriteDriverNDISVersionToServiceKey(
              v32,
              v29,
              1,
              a4->MajorDriverVersion,
              a4->MinorDriverVersion,
              &v6->ServiceName);
            v10 = 0;
          }
          if ( !v10 )
            goto LABEL_30;
          goto LABEL_45;
        }
      }
      else
      {
        v14 = 1313425732LL;
        if ( (a4->Flags & 1) == 0 )
          v14 = 1313687876LL;
        if ( IoAllocateDriverObjectExtension(a1, (PVOID)v14, v13, &DriverObjectExtension) >= 0 )
        {
          PoolWithTag = DriverObjectExtension;
          goto LABEL_13;
        }
      }
      v10 = -1073741670;
    }
  }
LABEL_30:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x69u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v6);
  return v10;
}
