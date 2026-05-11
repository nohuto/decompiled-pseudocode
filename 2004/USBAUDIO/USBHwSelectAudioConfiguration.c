/*
 * XREFs of USBHwSelectAudioConfiguration @ 0x1C002CC40
 * Callers:
 *     USBDeviceStart @ 0x1C002B9B0 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0013E80 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C002C4DC (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002C530 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBParseCreateMIDLegacyInterfaceList @ 0x1C002E7AC (USBParseCreateMIDLegacyInterfaceList.c)
 *     USBParseCreateInterfaceList @ 0x1C002E890 (USBParseCreateInterfaceList.c)
 */

__int64 __fastcall USBHwSelectAudioConfiguration(__int64 a1)
{
  struct _USBD_INTERFACE_LIST_ENTRY *v1; // r14
  __int64 v3; // rdi
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // r13
  __int64 bNumInterfaces; // rax
  void *v6; // rbx
  int v7; // ebx
  struct _USB_CONFIGURATION_DESCRIPTOR *v8; // rcx
  int v9; // eax
  struct _USBD_INTERFACE_LIST_ENTRY *ConfigurationRequest; // rax
  PUSBD_INTERFACE_LIST_ENTRY v11; // rsi
  unsigned int v12; // ebp
  void *v13; // rbx
  struct _USBD_INTERFACE_LIST_ENTRY *v14; // r15
  unsigned __int16 *p_Length; // r12
  struct _USBD_INTERFACE_INFORMATION *PoolWithTag; // rax
  PUSBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v4 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v3 + 40);
  bNumInterfaces = v4->bNumInterfaces;
  if ( (_BYTE)bNumInterfaces )
  {
    v6 = *(void **)(a1 + 8);
    InterfaceList = (PUSBD_INTERFACE_LIST_ENTRY)ExAllocatePoolWithTag(
                                                  (POOL_TYPE)512,
                                                  16 * (bNumInterfaces + 1),
                                                  0x41627845u);
    if ( InterfaceList )
      v7 = USBHwAllocateAndBag((PVOID *)&InterfaceList, v6);
    else
      v7 = -1073741670;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v3 + 40);
    v9 = *(_BYTE *)(v3 + 5) ? USBParseCreateMIDLegacyInterfaceList(v8) : USBParseCreateInterfaceList(v8);
    v7 = v9;
    if ( v9 < 0 )
      return (unsigned int)v7;
    v1 = InterfaceList;
  }
  else
  {
    v7 = -1073741438;
  }
  if ( v7 >= 0 )
  {
    ConfigurationRequest = (struct _USBD_INTERFACE_LIST_ENTRY *)USBD_CreateConfigurationRequestEx(v4, v1);
    InterfaceList = ConfigurationRequest;
    v11 = ConfigurationRequest;
    if ( ConfigurationRequest )
    {
      v7 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), (PURB)ConfigurationRequest, 0LL);
      if ( SHIDWORD(v11->InterfaceDescriptor) < 0 )
        v7 = -1073741808;
      if ( v7 >= 0 )
      {
        v12 = 0;
        *(_QWORD *)(v3 + 24) = v11[2].InterfaceDescriptor;
        if ( v4->bNumInterfaces )
        {
          do
          {
            v13 = *(void **)(a1 + 8);
            v14 = &v1[v12];
            p_Length = &v14->Interface->Length;
            PoolWithTag = (struct _USBD_INTERFACE_INFORMATION *)ExAllocatePoolWithTag(
                                                                  (POOL_TYPE)512,
                                                                  *p_Length,
                                                                  0x41627845u);
            v14->Interface = PoolWithTag;
            if ( PoolWithTag )
              v7 = USBHwAllocateAndBag((PVOID *)&v14->Interface, v13);
            else
              v7 = -1073741670;
            if ( v7 >= 0 )
              memmove(v14->Interface, p_Length, *p_Length);
            ++v12;
          }
          while ( v12 < v4->bNumInterfaces );
          v11 = InterfaceList;
        }
        if ( v7 >= 0 )
          *(_QWORD *)(v3 + 16) = v1;
      }
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
