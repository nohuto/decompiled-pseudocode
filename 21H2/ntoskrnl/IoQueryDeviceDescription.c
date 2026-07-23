/*
 * XREFs of IoQueryDeviceDescription @ 0x14078B1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     IopOpenRegistryKey @ 0x140769C64 (IopOpenRegistryKey.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  int BusDescription; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v13[8]; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+B0h] [rbp+47h] BYREF

  Handle = 0LL;
  v14 = -1;
  Destination = 0LL;
  if ( !BusType )
    return -1073741822;
  v13[4] = PeripheralType;
  v13[5] = PeripheralNumber;
  v13[6] = CalloutRoutine;
  v13[1] = BusNumber;
  v13[0] = BusType;
  v13[2] = ControllerType;
  v13[7] = Context;
  v13[3] = ControllerNumber;
  Destination.MaximumLength = 2048;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x4E526F49u);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineHardwareDescriptionSystemName);
  BusDescription = IopOpenRegistryKey(&Handle, 0LL, &Destination, 0x20019u, 0);
  if ( BusDescription >= 0 )
  {
    v12 = Destination;
    BusDescription = pIoQueryBusDescription(
                       (unsigned int)v13,
                       (unsigned int)&v12,
                       (_DWORD)Handle,
                       (unsigned int)&v14,
                       1);
    ZwClose(Handle);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( BusDescription == -2147483622 )
    return -1073741772;
  return BusDescription;
}
