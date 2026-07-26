/*
 * XREFs of NdisRegisterDeviceEx @ 0x1C0023F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C010C350 (WdmlibIoCreateDeviceSecure.c)
 */

NDIS_STATUS __stdcall NdisRegisterDeviceEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_DEVICE_OBJECT_ATTRIBUTES DeviceObjectAttributes,
        PDEVICE_OBJECT *pDeviceObject,
        PNDIS_HANDLE NdisDeviceHandle)
{
  char *DriverObjectExtension; // rbp
  KSPIN_LOCK *v6; // r13
  char v10; // al
  struct _DRIVER_OBJECT *v11; // rdi
  const _UNICODE_STRING *DefaultSDDLString; // r9
  unsigned int v13; // esi
  _UNICODE_STRING *DeviceName; // r8
  ULONG v15; // edx
  NTSTATUS DeviceSecure; // eax
  NTSTATUS SymbolicLink; // r14d
  _DWORD *DeviceExtension; // r12
  _QWORD *v19; // rsi
  int (__fastcall **MajorFunctions)(_DEVICE_OBJECT *, _IRP *); // rax
  __int128 v21; // xmm0
  char *v22; // rcx
  void *v23; // rcx
  KSPIN_LOCK *v24; // rdi
  KIRQL v25; // al
  char *v26; // rbp
  __int64 v27; // rdx
  char *v29; // r13
  __int64 v30; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-78h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-70h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-68h]
  const GUID *v34; // [rsp+38h] [rbp-60h]
  PDEVICE_OBJECT v35[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+A0h] [rbp+8h]

  v35[0] = 0LL;
  DriverObjectExtension = 0LL;
  v6 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Exclusive = (unsigned __int8)NdisHandle;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Eu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  }
  *pDeviceObject = 0LL;
  *NdisDeviceHandle = 0LL;
  v10 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle == 2 )
  {
    v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 5);
    DriverObjectExtension = (char *)NdisHandle;
  }
  else
  {
    switch ( v10 )
    {
      case 4:
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 2);
        v6 = (KSPIN_LOCK *)NdisHandle;
        break;
      case 17:
        DriverObjectExtension = (char *)*((_QWORD *)NdisHandle + 470);
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      case -86:
        DriverObjectExtension = (char *)IoGetDriverObjectExtension(
                                          **((PDRIVER_OBJECT **)NdisHandle + 1),
                                          (PVOID)0x4E4D4944);
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      default:
        goto LABEL_32;
    }
  }
  if ( !v11 )
  {
LABEL_32:
    SymbolicLink = -1073741637;
    goto LABEL_18;
  }
  DefaultSDDLString = DeviceObjectAttributes->DefaultSDDLString;
  v36 = (DeviceObjectAttributes->ExtensionSize + 1) & 0xFFFFFFFE;
  v13 = DeviceObjectAttributes->DeviceName->Length + 324 + v36 + DeviceObjectAttributes->SymbolicName->Length;
  DeviceName = DeviceObjectAttributes->DeviceName;
  v15 = DeviceName->Length + 324 + v36 + DeviceObjectAttributes->SymbolicName->Length;
  if ( DefaultSDDLString )
    DeviceSecure = WdmlibIoCreateDeviceSecure(
                     v11,
                     v15,
                     DeviceName,
                     (ULONG)DefaultSDDLString,
                     DeviceCharacteristics,
                     Exclusive,
                     DefaultSDDLString,
                     v34,
                     v35);
  else
    DeviceSecure = IoCreateDevice(v11, v15, DeviceName, 0x12u, 0x100u, 0, v35);
  SymbolicLink = DeviceSecure;
  if ( DeviceSecure < 0 )
    goto LABEL_18;
  v35[0]->Flags &= ~0x80u;
  SymbolicLink = IoCreateSymbolicLink(DeviceObjectAttributes->SymbolicName, DeviceObjectAttributes->DeviceName);
  if ( SymbolicLink >= 0 )
  {
    DeviceExtension = v35[0]->DeviceExtension;
    memset(DeviceExtension, 0, v13);
    *DeviceExtension = 19923209;
    v19 = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 2) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 1) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 5) = DeviceExtension + 80;
    *((_QWORD *)DeviceExtension + 3) = NdisHandle;
    *((PDEVICE_OBJECT *)DeviceExtension + 4) = v35[0];
    MajorFunctions = DeviceObjectAttributes->MajorFunctions;
    *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)MajorFunctions + 4);
    *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)MajorFunctions + 5);
    *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)MajorFunctions + 6);
    v21 = *((_OWORD *)MajorFunctions + 7);
    MajorFunctions += 16;
    *((_OWORD *)DeviceExtension + 10) = v21;
    *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)MajorFunctions + 4);
    *((_QWORD *)DeviceExtension + 32) = MajorFunctions[10];
    if ( v6 )
      memset64(v11->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
    v22 = (char *)DeviceExtension + v36 + 320;
    *((_QWORD *)DeviceExtension + 35) = v22;
    *((_WORD *)DeviceExtension + 136) = DeviceObjectAttributes->DeviceName->Length;
    *((_WORD *)DeviceExtension + 137) = DeviceObjectAttributes->DeviceName->Length + 2;
    memmove(v22, DeviceObjectAttributes->DeviceName->Buffer, DeviceObjectAttributes->DeviceName->Length);
    v23 = (void *)(*((_QWORD *)DeviceExtension + 35) + *((unsigned __int16 *)DeviceExtension + 137));
    *((_QWORD *)DeviceExtension + 37) = v23;
    *((_WORD *)DeviceExtension + 144) = DeviceObjectAttributes->SymbolicName->Length;
    *((_WORD *)DeviceExtension + 145) = DeviceObjectAttributes->SymbolicName->Length + 2;
    memmove(v23, DeviceObjectAttributes->SymbolicName->Buffer, DeviceObjectAttributes->SymbolicName->Length);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    if ( DriverObjectExtension )
    {
      v24 = (KSPIN_LOCK *)(DriverObjectExtension + 392);
      *((_QWORD *)DeviceExtension + 3) = NdisHandle;
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DriverObjectExtension + 49);
      v26 = DriverObjectExtension + 80;
      v27 = *(_QWORD *)v26;
      if ( *(char **)(*(_QWORD *)v26 + 8LL) == v26 )
      {
        *v19 = v27;
        *((_QWORD *)DeviceExtension + 2) = v26;
        *(_QWORD *)(v27 + 8) = v19;
        *(_QWORD *)v26 = v19;
LABEL_16:
        KeReleaseSpinLock(v24, v25);
LABEL_17:
        MmUnlockPagableImageSection(ImageSectionHandle);
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        *pDeviceObject = v35[0];
        *NdisDeviceHandle = DeviceExtension;
        goto LABEL_18;
      }
    }
    else
    {
      if ( !v6 )
        goto LABEL_17;
      v24 = v6 + 5;
      *((_QWORD *)DeviceExtension + 3) = v6;
      v25 = KeAcquireSpinLockRaiseToDpc(v6 + 5);
      v29 = (char *)(v6 + 7);
      v30 = *(_QWORD *)v29;
      if ( *(char **)(*(_QWORD *)v29 + 8LL) == v29 )
      {
        *v19 = v30;
        *((_QWORD *)DeviceExtension + 2) = v29;
        *(_QWORD *)(v30 + 8) = v19;
        *(_QWORD *)v29 = v19;
        goto LABEL_16;
      }
    }
    __fastfail(3u);
  }
  IoDeleteDevice(v35[0]);
LABEL_18:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = SymbolicLink;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Fu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)NdisHandle,
      DeviceObject);
  }
  return SymbolicLink;
}
