/*
 * XREFs of ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C0115D88
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C0115C68 (-ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z.c)
 */

__int64 __fastcall ndisQueryReenumerateSelfInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  struct _DEVICE_RESET_INTERFACE_STANDARD *PoolWithTag; // rax
  __int64 v5; // r9
  NTSTATUS DriverInterface; // edi

  PoolWithTag = (struct _DEVICE_RESET_INTERFACE_STANDARD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6962444Eu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      &GUID_DEVICE_RESET_INTERFACE_STANDARD,
                      1u,
                      v5,
                      (struct _INTERFACE *)PoolWithTag);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
