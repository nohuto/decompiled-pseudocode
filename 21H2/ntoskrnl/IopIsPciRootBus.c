/*
 * XREFs of IopIsPciRootBus @ 0x1408A3050
 * Callers:
 *     IopMemQueryConflict @ 0x1408A3150 (IopMemQueryConflict.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall IopIsPciRootBus(PDEVICE_OBJECT DeviceObject, _BYTE *a2)
{
  NTSTATUS result; // eax
  _WORD *PoolWithTag; // rdi
  NTSTATUS DeviceProperty; // ebx
  const wchar_t *v7; // rbx
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  *a2 = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, (PULONG)&NumberOfBytes);
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
    if ( PoolWithTag )
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyHardwareID,
                         NumberOfBytes,
                         PoolWithTag,
                         (PULONG)&NumberOfBytes);
      if ( DeviceProperty >= 0 )
      {
        v7 = PoolWithTag;
        if ( *PoolWithTag )
        {
          while ( wcsicmp(v7, L"ACPI\\PNP0A03") && wcsicmp(v7, L"ACPI\\PNP0A08") )
          {
            while ( *v7 )
              ++v7;
            if ( !*++v7 )
              goto LABEL_9;
          }
          *a2 = 1;
        }
LABEL_9:
        DeviceProperty = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return DeviceProperty;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
