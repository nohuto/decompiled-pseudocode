/*
 * XREFs of IopIsPciRootBus @ 0x1408A5920
 * Callers:
 *     IopMemQueryConflict @ 0x1408A5A20 (IopMemQueryConflict.c)
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140668830 (IoGetDeviceProperty.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
