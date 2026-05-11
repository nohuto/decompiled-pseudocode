/*
 * XREFs of USBDeviceStart @ 0x1C002B930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     RegistryReadPnPKeyValue @ 0x1C002ACE4 (RegistryReadPnPKeyValue.c)
 *     USBHwGetDescriptor @ 0x1C002C978 (USBHwGetDescriptor.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002CA54 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C002CBC0 (USBHwSelectAudioConfiguration.c)
 *     USBHwGetDeviceIDString @ 0x1C002DFA0 (USBHwGetDeviceIDString.c)
 *     USBHwLogStartFailure @ 0x1C002E290 (USBHwLogStartFailure.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002E584 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int16 *v2; // rsi
  __int64 v3; // r15
  NTSTATUS Status; // ebx
  PVOID v5; // r13
  PIRP Irp; // r12
  PVOID PoolWithTag; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PVOID v10; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  int AudioConfigurationDescriptor; // eax
  char *v14; // rdi
  __int16 v15; // ax
  PUSB_INTERFACE_DESCRIPTOR v16; // rax
  __int64 v17; // r8
  __int64 AudioSpecificInterface; // rax
  unsigned int v19; // eax
  bool v20; // r12
  int v21; // eax
  __int64 v22; // r8
  int v23; // edi
  _QWORD *v24; // r12
  __int64 v25; // r12
  PVOID v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edx
  _WORD *v30; // rcx
  PVOID Item; // [rsp+48h] [rbp-49h] BYREF
  __int64 v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+58h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-31h] BYREF
  char v36[64]; // [rsp+78h] [rbp-19h] BYREF

  v33 = *(_QWORD *)(a1 + 16);
  memset(&Event, 0, sizeof(Event));
  v2 = 0LL;
  v3 = *(_QWORD *)(v33 + 72);
  Status = -1073741670;
  Item = 0LL;
  v5 = 0LL;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
  if ( Irp )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x41627845u);
    if ( PoolWithTag )
    {
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
      CurrentStackLocation[-1].Context = &Event;
      CurrentStackLocation[-1].Control = -32;
      v9 = Irp->Tail.Overlay.CurrentStackLocation;
      v9[-1].Parameters.CreatePipe.Parameters = 0LL;
      *(_WORD *)&v9[-1].MajorFunction = 2075;
      v9[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)PoolWithTag;
      v9[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID;
      v9[-1].Parameters.Create.Options = 65608;
      Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), Irp);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = Irp->IoStatus.Status;
      }
      if ( Status < 0 )
      {
        ExFreePool(PoolWithTag);
        PoolWithTag = 0LL;
      }
    }
    IoFreeIrp(Irp);
    if ( Status < 0 )
      goto LABEL_15;
    if ( PoolWithTag )
      v5 = PoolWithTag;
    else
      Status = -1073741438;
  }
  if ( Status >= 0 )
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v5, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v5);
      v5 = 0LL;
    }
    else
    {
      *(_QWORD *)(v3 + 56) = v5;
    }
    goto LABEL_16;
  }
LABEL_15:
  strcpy(v36, "Could not acquire Bus Interface");
  USBHwLogStartFailure(a1, (unsigned int)Status, v36, 32LL);
LABEL_16:
  if ( Status < 0 )
    goto LABEL_78;
  v34 = 18;
  Status = -1073741670;
  v10 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x12uLL, 0x41627845u);
  v11 = v10;
  if ( v10 )
  {
    Status = USBHwGetDescriptor(a1, 1, 0, 0, (__int64)&v34, (__int64)v10);
    if ( Status < 0 )
      ExFreePool(v11);
    else
      v2 = (__int16 *)v11;
  }
  if ( Status < 0 )
  {
    strcpy(v36, "Could not acquire Device Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v36, 36LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v2, ExFreePool);
    if ( Status < 0 )
      ExFreePool(v2);
    else
      *(_QWORD *)(v3 + 32) = v2;
  }
  if ( Status < 0 )
    goto LABEL_78;
  AudioConfigurationDescriptor = USBHwGetAudioConfigurationDescriptor(a1, v12, &Item);
  v14 = (char *)Item;
  Status = AudioConfigurationDescriptor;
  if ( AudioConfigurationDescriptor < 0 )
  {
    strcpy(v36, "Could not acquire Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)AudioConfigurationDescriptor, v36, 43LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Item, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v14);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v14;
      v15 = v2[4];
      if ( v15 == 2321 )
      {
        v15 = 2321;
        if ( v2[5] == 9490 )
        {
          v14[34] = 0;
          v15 = v2[4];
        }
      }
      if ( v15 == 2235 )
      {
        v15 = 2235;
        if ( v2[5] == 9986 )
        {
          v14[54] = 1;
          v15 = v2[4];
        }
      }
      if ( v15 == 2706 )
      {
        if ( v2[5] != 4128 )
          goto LABEL_43;
        *(_WORD *)(v14 + 41) = 161;
        v15 = v2[4];
      }
      if ( v15 == 2675 && v2[5] == 6 )
        *(_WORD *)(v14 + 41) = 161;
    }
  }
LABEL_43:
  if ( Status < 0 )
    goto LABEL_78;
  v16 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v14, v14, -1, -1, 1, 1, -1);
  if ( v16 )
  {
    *(_QWORD *)(v3 + 48) = v16;
    AudioSpecificInterface = USBParseGetAudioSpecificInterface(v14, v16, v17, 8LL);
    if ( AudioSpecificInterface )
    {
      v19 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
      *(_DWORD *)(v3 + 8) = v19;
      if ( v19 >= 0x200 )
        Status = -1073741735;
      goto LABEL_53;
    }
LABEL_52:
    Status = -1073741438;
    goto LABEL_53;
  }
  v20 = 0;
  if ( !USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v14, v14, -1, -1, 1, 2, -1) )
    v20 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v14, v14, -1, -1, 1, 3, -1) != 0LL;
  *(_BYTE *)(v3 + 5) = v20;
  if ( !v20 )
  {
    strcpy(v36, "Could not find Control interface in Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v36, 61LL);
    goto LABEL_52;
  }
LABEL_53:
  if ( Status < 0 )
    goto LABEL_78;
  v21 = USBHwSelectAudioConfiguration(a1);
  Status = v21;
  if ( v21 < 0 )
  {
    strcpy(v36, "Could not Select a device configuration");
    USBHwLogStartFailure(a1, (unsigned int)v21, v36, 40LL);
    goto LABEL_78;
  }
  v23 = 10;
  v24 = (_QWORD *)(v33 + 24);
  if ( !*((_BYTE *)v2 + 15) )
  {
    *(_DWORD *)(v33 + 32) = 10;
    *v24 = Default_Product_String;
LABEL_62:
    if ( Status < 0 )
    {
LABEL_78:
      if ( v5 )
        (*((void (__fastcall **)(_QWORD))v5 + 3))(*((_QWORD *)v5 + 1));
      return (unsigned int)Status;
    }
    goto LABEL_63;
  }
  Status = USBHwGetDeviceIDString(a1, v33 + 24, v33 + 32);
  if ( Status == -1073741822 )
  {
    Status = 0;
    *v24 = Default_Product_String;
    v25 = v33;
    *(_DWORD *)(v33 + 32) = 10;
    goto LABEL_64;
  }
  if ( Status < 0 )
  {
    strcpy(v36, "Could not acquire a device name string");
    USBHwLogStartFailure(a1, (unsigned int)Status, v36, 39LL);
    goto LABEL_62;
  }
LABEL_63:
  v25 = v33;
LABEL_64:
  Item = 0LL;
  *(_BYTE *)(v3 + 212) = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"CapturePacketsPerUrb", v22, &Item) >= 0 )
  {
    v26 = Item;
    v27 = *(_DWORD *)Item;
    if ( *(_DWORD *)Item >= 3u )
    {
      if ( v27 > 0xA )
        v27 = 10;
      v23 = v27;
    }
    else
    {
      v23 = 3;
    }
    *(_BYTE *)(v3 + 212) = 1;
    ExFreePool(v26);
  }
  *(_DWORD *)(v3 + 208) = v23;
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  *(_BYTE *)(v3 + 4) = (*(__int64 (__fastcall **)(_QWORD))(v28 + 64))(*(_QWORD *)(v28 + 8));
  v29 = 0;
  v30 = &unk_1C00170D2;
  *(_QWORD *)(v3 + 200) = v3 + 192;
  *(_QWORD *)(v3 + 192) = v3 + 192;
  *(_DWORD *)(v25 + 40) = (unsigned __int16)v2[4];
  *(_DWORD *)(v25 + 44) = (unsigned __int16)v2[5];
  *(_DWORD *)(v25 + 48) = (unsigned __int16)v2[6];
  *(_QWORD *)(v25 + 56) = &KSCOMPONENTID_USBAUDIO;
  while ( v2[4] != *(v30 - 1) || v2[5] != *v30 )
  {
    ++v29;
    v30 += 2;
    if ( v29 >= 0x18 )
      return (unsigned int)Status;
  }
  *(_BYTE *)(v3 + 6) = 1;
  return (unsigned int)Status;
}
