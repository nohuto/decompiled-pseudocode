/*
 * XREFs of IopGetInterruptConnectionData @ 0x1407628FC
 * Callers:
 *     IoConnectInterruptEx @ 0x140761BD0 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140761E54 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x1407C98D4 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x14063A080 (IoGetDevicePropertyData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetInterruptConnectionData(PDEVICE_OBJECT Pdo, _QWORD *a2)
{
  NTSTATUS result; // eax
  _DWORD *Data; // rbx
  NTSTATUS DevicePropertyData; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  Type = 0;
  result = IoGetDevicePropertyData(Pdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type);
  if ( result == -1073741789 && (unsigned int)NumberOfBytes >= 0x60 )
  {
    Data = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6F697050u);
    if ( !Data )
      return -1073741670;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &INTERRUPT_CONNECTION_DATA_PKEY,
                           0,
                           0,
                           NumberOfBytes,
                           Data,
                           (PULONG)&NumberOfBytes,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( (unsigned int)NumberOfBytes >= 88 * *Data + 8 )
      {
        *a2 = Data;
        return DevicePropertyData;
      }
      DevicePropertyData = -1073741762;
    }
    ExFreePoolWithTag(Data, 0);
    return DevicePropertyData;
  }
  return result;
}
