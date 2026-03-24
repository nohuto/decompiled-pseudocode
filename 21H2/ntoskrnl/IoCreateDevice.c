/*
 * XREFs of IoCreateDevice @ 0x14071B4E0
 * Callers:
 *     RawMountVolume @ 0x14071C1B0 (RawMountVolume.c)
 *     IoCreateDeviceSecure @ 0x14073C480 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x14077093C (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407AE4B0 (HalpAddDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8CB8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x1407CAEC0 (VRegSetup.c)
 *     ViDdiDriverEntry @ 0x1409C82B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A69840 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x140A72BE0 (PiDaDriverEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14027F140 (RtlStringCchPrintfW.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     IopInsertRemoveDevice @ 0x14036118C (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x140379940 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14071B950 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14071BB4C (EtwTiLogDeviceObjectLoadUnload.c)
 *     PoVolumeDevice @ 0x14078028C (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x140781400 (IopCreateVpb.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v7; // edi
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  ULONG v12; // ecx
  struct _DEVICE_OBJECT *v13; // rbx
  __int16 v14; // r12
  __int64 DefaultDeviceSecurityDescriptor; // rdx
  int v16; // ecx
  int v17; // eax
  NTSTATUS Vpb; // edi
  __int64 v19; // rdi
  struct _DEVOBJ_EXTENSION *v20; // rcx
  ULONG v21; // ecx
  USHORT v22; // ax
  __int64 v23; // rdx
  int v24; // eax
  ULONG Characteristics; // eax
  int inserted; // eax
  PADAPTER_OBJECT v27; // rdx
  PVOID v28; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  ULONG v32; // [rsp+64h] [rbp-9Ch]
  ULONG v33; // [rsp+68h] [rbp-98h]
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v37[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[40]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = DeviceCharacteristics;
  v10 = DeviceType;
  v32 = DeviceExtensionSize;
  v37[1] = 0;
  v11 = (unsigned __int8)DeviceCharacteristics & 0x80;
  v40 = 0LL;
  Handle = 0LL;
  v12 = 8 - (DeviceExtensionSize & 7);
  v34 = 0LL;
  P = 0LL;
  v13 = 0LL;
  v33 = DeviceCharacteristics & 0x80;
  if ( (DeviceExtensionSize & 7) == 0 )
    v12 = DeviceExtensionSize & 7;
  DmaAdapter = 0LL;
  v31 = DeviceExtensionSize + v12;
  v14 = 0;
  DestinationString = 0LL;
  while ( 1 )
  {
    if ( (_DWORD)v11 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v13 = (struct _DEVICE_OBJECT *)DmaAdapter;
      DeviceName = &DestinationString;
    }
    DefaultDeviceSecurityDescriptor = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v10, v7, v11, v45);
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    v37[0] = 48;
    v38 = 0LL;
    v39 = DeviceName;
    v41 = DefaultDeviceSecurityDescriptor;
    v16 = IopCaseInsensitive != 0 ? 576 : 512;
    v42 = 0LL;
    LODWORD(v40) = v16;
    if ( Exclusive )
    {
      v16 |= 0x20u;
      LODWORD(v40) = v16;
    }
    if ( DeviceName )
      LODWORD(v40) = v16 | 0x10;
    if ( v31 >= 0xFFFFFE40 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v17 = ObCreateObjectEx(
            0,
            (_DWORD *)IoDeviceObjectType,
            (__int64)v37,
            0,
            (char *)&v34,
            v31 + 448,
            0,
            0,
            &DmaAdapter,
            0LL);
    v13 = (struct _DEVICE_OBJECT *)DmaAdapter;
    Vpb = v17;
    if ( v17 < 0 )
      goto LABEL_35;
    v19 = v31;
    memset(DmaAdapter, 0, v31 + 448);
    v20 = (struct _DEVOBJ_EXTENSION *)((char *)&v13[1] + v19);
    v20->DeviceObject = v13;
    v13->DeviceObjectExtension = v20;
    *(_DWORD *)&v20->Type = 13;
    v20->InterruptContext = 0LL;
    v20->PowerFlags = 0;
    v20->Dope = 0LL;
    v21 = v32;
    v22 = v32 + 336;
    v13->Type = 3;
    v13->Size = v22;
    v13->DeviceType = v10;
    v13->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v24 = 128;
    v13->AlignmentRequirement = 0;
    v13->SectorSize = v14;
    v13->Flags = 128;
    if ( Exclusive )
    {
      v24 = 136;
      v13->Flags = 136;
    }
    if ( DeviceName )
      v13->Flags = v24 | 0x40;
    if ( v21 )
      v13->DeviceExtension = &v13[1];
    else
      v13->DeviceExtension = 0LL;
    v13->StackSize = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v13->Queue.ListEntry.Blink = &v13->Queue.ListEntry;
      v13->Queue.ListEntry.Flink = &v13->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v13->DeviceQueue);
    }
    Characteristics = v13->Characteristics;
    if ( (Characteristics & 1) == 0 && (Characteristics & 0x40000) == 0 )
      v13->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObjectEx((char *)v13, 0LL, 3u, 1, 0, (__int64)&DmaAdapter, (unsigned __int64 *)&Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v13 = (struct _DEVICE_OBJECT *)DmaAdapter;
      v27 = DmaAdapter;
      DmaAdapter->DmaOperations = (_DMA_OPERATIONS *)DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v13->Vpb )
        PoVolumeDevice(v13);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      v13 = 0LL;
LABEL_35:
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      v28 = P;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Vpb >= 0 )
      {
        LOBYTE(v28) = 1;
        EtwTiLogDeviceObjectLoadUnload(v28, &v13->DriverObject->DriverName, DeviceName);
      }
      *DeviceObject = v13;
      return Vpb;
    }
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13 = (struct _DEVICE_OBJECT *)DmaAdapter;
    v7 = DeviceCharacteristics;
    v11 = v33;
  }
  Vpb = IopCreateVpb(v13);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v13->DeviceLock, SynchronizationEvent, 1u);
    v21 = v32;
    goto LABEL_18;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)v13);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
