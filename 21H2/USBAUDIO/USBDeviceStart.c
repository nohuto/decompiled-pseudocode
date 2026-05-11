/*
 * XREFs of USBDeviceStart @ 0x1C002C080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     RegistryReadPnPKeyValue @ 0x1C002B214 (RegistryReadPnPKeyValue.c)
 *     USBHwGetDescriptor @ 0x1C002D148 (USBHwGetDescriptor.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002D224 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C002D390 (USBHwSelectAudioConfiguration.c)
 *     USBHwGetDeviceIDString @ 0x1C002E770 (USBHwGetDeviceIDString.c)
 *     USBHwLogStartFailure @ 0x1C002EC34 (USBHwLogStartFailure.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002EF28 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int16 *v2; // rsi
  PVOID v3; // r13
  __int64 v4; // r15
  NTSTATUS Status; // ebx
  __int64 v6; // rax
  PIRP Irp; // r12
  PVOID PoolWithTag; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v10; // rax
  PVOID v11; // rax
  void *v12; // rdi
  __int64 v13; // rdx
  int AudioConfigurationDescriptor; // eax
  char *v15; // rdi
  __int16 v16; // ax
  PUSB_INTERFACE_DESCRIPTOR v17; // rax
  __int64 v18; // r8
  __int64 AudioSpecificInterface; // rax
  unsigned int v20; // eax
  PUSB_INTERFACE_DESCRIPTOR v21; // rax
  __int64 v22; // rdi
  bool v23; // r12
  int v24; // eax
  __int64 v25; // r8
  _QWORD *v26; // r12
  _DWORD *v27; // r13
  int v28; // edi
  PVOID v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rcx
  int v34; // edx
  _WORD *i; // rcx
  PVOID Item; // [rsp+48h] [rbp-49h] BYREF
  __int64 v38; // [rsp+50h] [rbp-41h]
  PVOID v39; // [rsp+58h] [rbp-39h]
  int v40; // [rsp+60h] [rbp-31h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-29h] BYREF
  char v42[64]; // [rsp+80h] [rbp-11h] BYREF

  v38 = *(_QWORD *)(a1 + 16);
  memset(&Event, 0, sizeof(Event));
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(v38 + 72);
  Item = 0LL;
  Status = -1073741670;
  v6 = *(_QWORD *)(a1 + 40);
  v39 = 0LL;
  Irp = IoAllocateIrp(*(_BYTE *)(v6 + 76), 0);
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
      v10 = Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].Parameters.CreatePipe.Parameters = 0LL;
      *(_WORD *)&v10[-1].MajorFunction = 2075;
      v10[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)PoolWithTag;
      v10[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID;
      v10[-1].Parameters.Create.Options = 65608;
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
    {
      v3 = PoolWithTag;
      v39 = PoolWithTag;
    }
    else
    {
      Status = -1073741438;
    }
  }
  if ( Status >= 0 )
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v3, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v3);
      v3 = 0LL;
      v39 = 0LL;
    }
    else
    {
      *(_QWORD *)(v4 + 56) = v3;
    }
    goto LABEL_16;
  }
LABEL_15:
  strcpy(v42, "Could not acquire Bus Interface");
  USBHwLogStartFailure(a1, (unsigned int)Status, v42, 32LL);
LABEL_16:
  if ( Status < 0 )
    goto LABEL_84;
  v40 = 18;
  Status = -1073741670;
  v11 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x12uLL, 0x41627845u);
  v12 = v11;
  if ( v11 )
  {
    Status = USBHwGetDescriptor(a1, 1, 0, 0, (__int64)&v40, (__int64)v11);
    if ( Status < 0 )
      ExFreePool(v12);
    else
      v2 = (__int16 *)v12;
  }
  if ( Status < 0 )
  {
    strcpy(v42, "Could not acquire Device Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)Status, v42, 36LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v2, ExFreePool);
    if ( Status < 0 )
      ExFreePool(v2);
    else
      *(_QWORD *)(v4 + 32) = v2;
  }
  if ( Status < 0 )
    goto LABEL_84;
  AudioConfigurationDescriptor = USBHwGetAudioConfigurationDescriptor(a1, v13, &Item);
  v15 = (char *)Item;
  Status = AudioConfigurationDescriptor;
  if ( AudioConfigurationDescriptor < 0 )
  {
    strcpy(v42, "Could not acquire Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)AudioConfigurationDescriptor, v42, 43LL);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Item, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v15);
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v15;
      v16 = v2[4];
      if ( v16 == 2321 )
      {
        v16 = 2321;
        if ( v2[5] == 9490 && *((_WORD *)v15 + 1) > 0x22u )
        {
          v15[34] = 0;
          v16 = v2[4];
        }
      }
      if ( v16 == 2235 )
      {
        v16 = 2235;
        if ( v2[5] == 9986 && *((_WORD *)v15 + 1) > 0x36u )
        {
          v15[54] = 1;
          v16 = v2[4];
        }
      }
      if ( v16 == 2706 )
      {
        if ( v2[5] != 4128 || *((_WORD *)v15 + 1) <= 0x2Au )
          goto LABEL_47;
        *(_WORD *)(v15 + 41) = 161;
        v16 = v2[4];
      }
      if ( v16 == 2675 && v2[5] == 6 && *((_WORD *)v15 + 1) > 0x2Au )
        *(_WORD *)(v15 + 41) = 161;
    }
  }
LABEL_47:
  if ( Status < 0 )
    goto LABEL_84;
  v17 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 1, -1);
  if ( v17 )
  {
    *(_QWORD *)(v4 + 48) = v17;
    AudioSpecificInterface = USBParseGetAudioSpecificInterface(v15, v17, v18, 8LL);
    if ( AudioSpecificInterface )
    {
      v20 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
      *(_DWORD *)(v4 + 8) = v20;
      if ( v20 >= 0x200 )
        Status = -1073741735;
    }
    else
    {
      Status = -1073741438;
    }
    v21 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 3, -1);
    v22 = v38;
    *(_DWORD *)(v38 + 992) = v21 != 0LL;
  }
  else
  {
    v23 = 0;
    if ( !USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 2, -1) )
      v23 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 3, -1) != 0LL;
    *(_BYTE *)(v4 + 5) = v23;
    if ( !v23 )
    {
      strcpy(v42, "Could not find Control interface in Configuration Descriptor");
      USBHwLogStartFailure(a1, (unsigned int)Status, v42, 61LL);
      Status = -1073741438;
    }
    v22 = v38;
  }
  if ( Status < 0 )
    goto LABEL_84;
  v24 = USBHwSelectAudioConfiguration(a1);
  Status = v24;
  if ( v24 < 0 )
  {
    strcpy(v42, "Could not Select a device configuration");
    USBHwLogStartFailure(a1, (unsigned int)v24, v42, 40LL);
    goto LABEL_84;
  }
  v26 = (_QWORD *)(v22 + 24);
  v27 = (_DWORD *)(v22 + 32);
  v28 = 10;
  if ( !*((_BYTE *)v2 + 15) )
  {
    *v27 = 10;
    *v26 = Default_Product_String;
LABEL_68:
    if ( Status < 0 )
    {
      v3 = v39;
LABEL_84:
      if ( v3 )
        (*((void (__fastcall **)(_QWORD))v3 + 3))(*((_QWORD *)v3 + 1));
      return (unsigned int)Status;
    }
    goto LABEL_69;
  }
  Status = USBHwGetDeviceIDString(a1, v26, v27);
  if ( Status == -1073741822 )
  {
    *v27 = 10;
    *v26 = Default_Product_String;
    Status = 0;
    goto LABEL_69;
  }
  if ( Status < 0 )
  {
    strcpy(v42, "Could not acquire a device name string");
    USBHwLogStartFailure(a1, (unsigned int)Status, v42, 39LL);
    goto LABEL_68;
  }
LABEL_69:
  Item = 0LL;
  *(_BYTE *)(v4 + 212) = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"CapturePacketsPerUrb", v25, &Item) >= 0 )
  {
    v29 = Item;
    v30 = *(_DWORD *)Item;
    if ( *(_DWORD *)Item >= 3u )
    {
      if ( v30 > 0xA )
        v30 = 10;
      v28 = v30;
    }
    else
    {
      v28 = 3;
    }
    *(_BYTE *)(v4 + 212) = 1;
    ExFreePool(v29);
  }
  *(_DWORD *)(v4 + 208) = v28;
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  v32 = (*(__int64 (__fastcall **)(_QWORD))(v31 + 64))(*(_QWORD *)(v31 + 8));
  v33 = v38;
  v34 = 0;
  *(_BYTE *)(v4 + 4) = v32;
  *(_QWORD *)(v4 + 200) = v4 + 192;
  *(_QWORD *)(v4 + 192) = v4 + 192;
  *(_DWORD *)(v33 + 40) = (unsigned __int16)v2[4];
  *(_DWORD *)(v33 + 44) = (unsigned __int16)v2[5];
  *(_DWORD *)(v33 + 48) = (unsigned __int16)v2[6];
  *(_QWORD *)(v33 + 56) = &KSCOMPONENTID_USBAUDIO;
  for ( i = &unk_1C0016112; v2[4] != *(i - 1) || v2[5] != *i; i += 2 )
  {
    if ( (unsigned int)++v34 >= 0x18 )
      return (unsigned int)Status;
  }
  *(_BYTE *)(v4 + 6) = 1;
  return (unsigned int)Status;
}
