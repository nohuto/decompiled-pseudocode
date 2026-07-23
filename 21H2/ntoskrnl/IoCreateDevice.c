/*
 * XREFs of IoCreateDevice @ 0x1406C9950
 * Callers:
 *     RawMountVolume @ 0x1406C90C8 (RawMountVolume.c)
 *     IoCreateDeviceSecure @ 0x14073C640 (IoCreateDeviceSecure.c)
 *     PiSwGetChildPdo @ 0x140770AFC (PiSwGetChildPdo.c)
 *     HalpAddDevice @ 0x1407AE6B0 (HalpAddDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8 (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x1407CB1E0 (VRegSetup.c)
 *     ViDdiDriverEntry @ 0x1409C92B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140A6A840 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A6AAA0 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x140A73BE0 (PiDaDriverEntry.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x1402A61EC (IopInsertRemoveDevice.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     KeInitializeDeviceQueue @ 0x140379490 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406C9DC0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1406C9FBC (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     PoVolumeDevice @ 0x14078044C (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1407815C0 (IopCreateVpb.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  PADAPTER_OBJECT v13; // rbx
  __int16 v14; // r12
  __int64 v15; // rdx
  int v16; // ecx
  int Object; // eax
  NTSTATUS Vpb; // edi
  __int64 v19; // rdi
  char *v20; // rcx
  ULONG v21; // ecx
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int inserted; // eax
  PADAPTER_OBJECT v27; // rdx
  PVOID v28; // rcx
  int v30; // [rsp+38h] [rbp-C8h]
  PADAPTER_OBJECT *p_DmaAdapter; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-A0h]
  ULONG v35; // [rsp+64h] [rbp-9Ch]
  ULONG v36; // [rsp+68h] [rbp-98h]
  PVOID v37; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v40[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v48[40]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = DeviceCharacteristics;
  v10 = DeviceType;
  v35 = DeviceExtensionSize;
  v40[1] = 0;
  v11 = (unsigned __int8)DeviceCharacteristics & 0x80;
  v43 = 0LL;
  Handle = 0LL;
  v12 = 8 - (DeviceExtensionSize & 7);
  v37 = 0LL;
  P = 0LL;
  v13 = 0LL;
  v36 = DeviceCharacteristics & 0x80;
  if ( (DeviceExtensionSize & 7) == 0 )
    v12 = DeviceExtensionSize & 7;
  DmaAdapter = 0LL;
  v34 = DeviceExtensionSize + v12;
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
      v13 = DmaAdapter;
      DeviceName = &DestinationString;
    }
    v15 = IopCreateDefaultDeviceSecurityDescriptor(
            (unsigned int)v10,
            v7,
            v11,
            v48,
            &v37,
            &P,
            0LL,
            v30,
            p_DmaAdapter,
            v32);
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    v40[0] = 48;
    v41 = 0LL;
    v42 = DeviceName;
    v44 = v15;
    v16 = IopCaseInsensitive != 0 ? 576 : 512;
    v45 = 0LL;
    LODWORD(v43) = v16;
    if ( Exclusive )
    {
      v16 |= 0x20u;
      LODWORD(v43) = v16;
    }
    if ( DeviceName )
      LODWORD(v43) = v16 | 0x10;
    if ( v34 >= 0xFFFFFE40 )
    {
      Vpb = -1073741811;
      goto LABEL_35;
    }
    v32 = 0LL;
    p_DmaAdapter = &DmaAdapter;
    v30 = 0;
    Object = ObCreateObjectEx(0, IoDeviceObjectType, (unsigned int)v40, 0);
    v13 = DmaAdapter;
    Vpb = Object;
    if ( Object < 0 )
      goto LABEL_35;
    v19 = v34;
    memset(DmaAdapter, 0, v34 + 448);
    v20 = (char *)&v13[21] + v19;
    *((_QWORD *)v20 + 1) = v13;
    v13[19].DmaOperations = (_DMA_OPERATIONS *)v20;
    *(_DWORD *)v20 = 13;
    *((_QWORD *)v20 + 11) = 0LL;
    *((_DWORD *)v20 + 4) = 0;
    *((_QWORD *)v20 + 3) = 0LL;
    v21 = v35;
    v22 = v35 + 336;
    v13->Version = 3;
    v13->Size = v22;
    LODWORD(v13[4].DmaOperations) = v10;
    *(_DWORD *)(&v13[3].Size + 1) = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v24 = 128;
    LODWORD(v13[9].DmaOperations) = 0;
    v13[19].Version = v14;
    *(_DWORD *)&v13[3].Version = 128;
    if ( Exclusive )
    {
      v24 = 136;
      *(_DWORD *)&v13[3].Version = 136;
    }
    if ( DeviceName )
      *(_DWORD *)&v13[3].Version = v24 | 0x40;
    if ( v21 )
      *(_QWORD *)&v13[4].Version = v13 + 21;
    else
      *(_QWORD *)&v13[4].Version = 0LL;
    BYTE4(v13[4].DmaOperations) = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v13[5].DmaOperations = (_DMA_OPERATIONS *)&v13[5];
      *(_QWORD *)&v13[5].Version = v13 + 5;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)&v13[10]);
    }
    v25 = *(_DWORD *)(&v13[3].Size + 1);
    if ( (v25 & 1) == 0 && (v25 & 0x40000) == 0 )
      LODWORD(v13[19].DmaOperations->AllocateAdapterChannel) |= 0x800u;
    inserted = ObInsertObjectEx(v13, 0LL, 0, (__int64)&DmaAdapter, (__int64)&Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v13 = DmaAdapter;
      v27 = DmaAdapter;
      DmaAdapter->DmaOperations = (_DMA_OPERATIONS *)DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v27, 1);
      if ( v13[3].DmaOperations )
        PoVolumeDevice(v13);
      ObCloseHandle(Handle, 0);
      goto LABEL_35;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      v13 = 0LL;
LABEL_35:
      if ( v37 )
        ExFreePoolWithTag(v37, 0);
      v28 = P;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Vpb >= 0 )
      {
        LOBYTE(v28) = 1;
        EtwTiLogDeviceObjectLoadUnload(v28, &v13->DmaOperations->FreeMapRegisters, DeviceName);
      }
      *DeviceObject = (PDEVICE_OBJECT)v13;
      return Vpb;
    }
    if ( v37 )
    {
      ExFreePoolWithTag(v37, 0);
      v37 = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13 = DmaAdapter;
    v7 = DeviceCharacteristics;
    v11 = v36;
  }
  Vpb = IopCreateVpb(v13);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent((PRKEVENT)&v13[17].DmaOperations, SynchronizationEvent, 1u);
    v21 = v35;
    goto LABEL_18;
  }
  HalPutDmaAdapter(v13);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
