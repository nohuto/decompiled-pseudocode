/*
 * XREFs of RaidInitializeDma @ 0x1C0079FB4
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002BA58 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C0031540 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C00393E0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidAreDriversDmarCompatible @ 0x1C0033C48 (RaidAreDriversDmarCompatible.c)
 */

__int64 __fastcall RaidInitializeDma(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v9; // si
  int v10; // ecx
  unsigned int Version; // edx
  int v12; // eax
  char v13; // al
  unsigned int DmaAddressWidth; // ecx
  unsigned int v15; // edx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+20h] [rbp-50h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v9 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v10 = 2;
  if ( v9 )
  {
    DeviceDescription.DmaRequestLine = 0;
    Version = 3;
    DeviceDescription.DeviceAddress.QuadPart = 0LL;
    v12 = 3;
    DeviceDescription.Version = 3;
  }
  else
  {
    Version = DeviceDescription.Version;
    DeviceDescription.DemandMode = *(_BYTE *)(a3 + 88);
    DeviceDescription.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    DeviceDescription.DmaSpeed = *(_DWORD *)(a3 + 44);
    v12 = 2;
  }
  *(_DWORD *)(a1 + 28) = v12;
  DeviceDescription.DmaChannel = *(_DWORD *)(a3 + 32);
  DeviceDescription.InterfaceType = *(_DWORD *)(a3 + 8);
  DeviceDescription.BusNumber = *(_DWORD *)(a3 + 4);
  DeviceDescription.DmaWidth = *(_DWORD *)(a3 + 40);
  DeviceDescription.ScatterGather = *(_BYTE *)(a3 + 81);
  DeviceDescription.Master = *(_BYTE *)(a3 + 82);
  DeviceDescription.DmaPort = *(_DWORD *)(a3 + 36);
  DeviceDescription.MaximumLength = *(_DWORD *)(a3 + 24);
  v13 = *(_BYTE *)(a3 + 144);
  DeviceDescription.AutoInitialize = 0;
  if ( v13 == 1 )
    goto LABEL_13;
  if ( (unsigned __int8)(v13 - 2) <= 2u )
  {
    v10 = 3;
LABEL_13:
    *(_DWORD *)(a1 + 24) = v10;
    if ( v9 )
    {
      DmaAddressWidth = 64;
LABEL_15:
      DeviceDescription.DmaAddressWidth = DmaAddressWidth;
      goto LABEL_21;
    }
    DeviceDescription.Dma64BitAddresses = 1;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 24) = 1;
  if ( v9 )
  {
    DmaAddressWidth = 32;
    goto LABEL_15;
  }
  DeviceDescription.Dma64BitAddresses = 0;
LABEL_20:
  DmaAddressWidth = DeviceDescription.DmaAddressWidth;
LABEL_21:
  if ( Version == 3 && (*(_DWORD *)(a3 + 220) & 0x40) != 0 )
  {
    v15 = *(unsigned __int8 *)(a3 + 198);
    if ( (unsigned __int8)(v15 - 1) <= 0x3Fu )
    {
      if ( DmaAddressWidth > v15 )
        DmaAddressWidth = *(unsigned __int8 *)(a3 + 198);
      DeviceDescription.DmaAddressWidth = DmaAddressWidth;
    }
  }
  DmaAdapter = IoGetDmaAdapter(a2, &DeviceDescription, (PULONG)(a1 + 12));
  *(_QWORD *)a1 = DmaAdapter;
  if ( !DmaAdapter )
    return 3221225626LL;
  *(_BYTE *)(a1 + 8) = RaidAreDriversDmarCompatible(a2);
  return 0LL;
}
