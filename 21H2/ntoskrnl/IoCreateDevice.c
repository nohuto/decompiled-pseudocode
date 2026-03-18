/*
 * XREFs of IoCreateDevice @ 0x14074ED50
 * Callers:
 *     DifIoCreateDeviceWrapper @ 0x14060DA60 (DifIoCreateDeviceWrapper.c)
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 *     RawMountVolume @ 0x14074C2EC (RawMountVolume.c)
 *     HalpAddDevice @ 0x14081E300 (HalpAddDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140859598 (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x14085B100 (VRegSetup.c)
 *     ViDdiDriverEntry @ 0x140A834A0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140B229D0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x140B2FB90 (PiDaDriverEntry.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeInitializeDeviceQueue @ 0x1402D3260 (KeInitializeDeviceQueue.c)
 *     IopInsertRemoveDevice @ 0x1402D5A04 (IopInsertRemoveDevice.c)
 *     RtlStringCchPrintfW @ 0x1402E0198 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     AstLogDeviceCreated @ 0x1407112A4 (AstLogDeviceCreated.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14074F220 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14074F418 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PoVolumeDevice @ 0x140810F24 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x140811370 (IopCreateVpb.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  ULONG v11; // ecx
  __int16 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // ecx
  NTSTATUS Vpb; // ebx
  char *v17; // rdx
  ULONG v18; // edx
  __int16 v19; // cx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  PVOID v22; // rcx
  int v23; // eax
  NTSTATUS inserted; // eax
  PVOID v25; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-A8h]
  ULONG Size_4; // [rsp+5Ch] [rbp-A4h]
  ULONG v31; // [rsp+60h] [rbp-A0h]
  PVOID v32; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  ULONG v34; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v36[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v44[40]; // [rsp+F0h] [rbp-10h] BYREF

  v9 = DeviceType;
  Size_4 = DeviceExtensionSize;
  v36[1] = 0;
  v39 = 0LL;
  v10 = (unsigned __int8)DeviceCharacteristics & 0x80;
  Object = 0LL;
  Handle = 0LL;
  v11 = 8 - (DeviceExtensionSize & 7);
  v32 = 0LL;
  v31 = DeviceCharacteristics & 0x80;
  v12 = 0;
  if ( (DeviceExtensionSize & 7) == 0 )
    v11 = DeviceExtensionSize & 7;
  DestinationString = 0LL;
  v34 = DeviceExtensionSize + v11;
  v13 = DeviceExtensionSize + v11 + 448;
  Size = v13;
LABEL_4:
  P = 0LL;
  while ( 1 )
  {
    if ( (_DWORD)v10 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      DeviceName = &DestinationString;
    }
    v14 = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v9, DeviceCharacteristics, v10, v44, &v32, &P, 0LL);
    if ( (_DWORD)v9 == 3 )
    {
      v12 = 2048;
    }
    else if ( (_DWORD)v9 == 7 || (_DWORD)v9 == 8 || (_DWORD)v9 == 36 )
    {
      v12 = 512;
    }
    v36[0] = 48;
    v37 = 0LL;
    v38 = DeviceName;
    v40 = v14;
    v15 = IopCaseInsensitive != 0 ? 576 : 512;
    v41 = 0LL;
    LODWORD(v39) = v15;
    if ( Exclusive )
    {
      v15 |= 0x20u;
      LODWORD(v39) = v15;
    }
    if ( DeviceName )
      LODWORD(v39) = v15 | 0x10;
    if ( v13 < 0x1C0 )
    {
      Vpb = -1073741811;
      goto LABEL_36;
    }
    Vpb = ObCreateObjectEx(0, (_DWORD *)IoDeviceObjectType, (int)v36, 0, (__int64)NewObject, v13, 0, 0, &Object, 0LL);
    if ( Vpb < 0 )
      goto LABEL_36;
    memset(Object, 0, Size);
    v17 = (char *)Object + v34 + 336;
    *((_QWORD *)v17 + 1) = Object;
    *((_QWORD *)Object + 39) = v17;
    *(_DWORD *)v17 = 13;
    *((_QWORD *)v17 + 11) = 0LL;
    *((_DWORD *)v17 + 4) = 0;
    *((_QWORD *)v17 + 3) = 0LL;
    v18 = Size_4;
    v19 = Size_4 + 336;
    *(_WORD *)Object = 3;
    *((_WORD *)Object + 1) = v19;
    *((_DWORD *)Object + 18) = v9;
    *((_DWORD *)Object + 13) = DeviceCharacteristics;
    if ( (unsigned int)v9 <= 0x24 )
    {
      v20 = 0x1080000084LL;
      if ( _bittest64(&v20, v9) )
        break;
    }
LABEL_19:
    *((_DWORD *)Object + 38) = 0;
    *((_WORD *)Object + 152) = v12;
    *((_DWORD *)Object + 12) = 128;
    if ( Exclusive )
      *((_DWORD *)Object + 12) |= 8u;
    if ( DeviceName )
      *((_DWORD *)Object + 12) |= 0x40u;
    if ( v18 )
      *((_QWORD *)Object + 8) = (char *)Object + 336;
    else
      *((_QWORD *)Object + 8) = 0LL;
    *((_BYTE *)Object + 76) = 1;
    if ( (_DWORD)v9 == 3 || (unsigned int)v9 > 7 && ((unsigned int)v9 <= 9 || (_DWORD)v9 == 20 || (_DWORD)v9 == 32) )
    {
      v21 = (char *)Object + 80;
      *((_QWORD *)Object + 11) = (char *)Object + 80;
      *v21 = v21;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)Object + 4);
    }
    v22 = Object;
    v23 = *((_DWORD *)Object + 13);
    if ( (v23 & 1) == 0 && (v23 & 0x40000) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) |= 0x800u;
      v22 = Object;
    }
    inserted = ObInsertObject(v22, 0LL, 3u, 1u, &Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      AstLogDeviceCreated((char *)Object, v9, DeviceCharacteristics);
      ObfReferenceObject(DriverObject);
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)Object, 1);
      if ( *((_QWORD *)Object + 7) )
        PoVolumeDevice();
      ObCloseHandle(Handle, 0);
      goto LABEL_36;
    }
    if ( inserted != -1073741771 || (DeviceCharacteristics & 0x80u) == 0 )
    {
      Object = 0LL;
LABEL_36:
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      v25 = P;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( Vpb >= 0 )
      {
        LOBYTE(v25) = 1;
        EtwTiLogDeviceObjectLoadUnload(v25, *((_QWORD *)Object + 1) + 56LL, DeviceName);
      }
      *DeviceObject = (PDEVICE_OBJECT)Object;
      return Vpb;
    }
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      v32 = 0LL;
    }
    v13 = Size;
    v10 = v31;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v10 = v31;
      goto LABEL_4;
    }
  }
  Vpb = IopCreateVpb(Object);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent((PRKEVENT)((char *)Object + 280), SynchronizationEvent, 1u);
    v18 = Size_4;
    goto LABEL_19;
  }
  ObfDereferenceObject(Object);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *DeviceObject = 0LL;
  return Vpb;
}
