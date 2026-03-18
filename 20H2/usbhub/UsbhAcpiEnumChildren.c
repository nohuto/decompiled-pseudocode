/*
 * XREFs of UsbhAcpiEnumChildren @ 0x1C0029498
 * Callers:
 *     UsbhGetAcpiPortAttributes @ 0x1C002AE10 (UsbhGetAcpiPortAttributes.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhAcpiEnumChildren(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 OutputBufferLength; // r14
  PDEVICE_OBJECT *v5; // rsi
  IRP *v6; // rbx
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+7h] BYREF
  _DWORD InputBuffer[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+80h] [rbp+27h]

  OutputBufferLength = a3;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v12 = 0LL;
  InputBuffer[0] = 1214866753;
  InputBuffer[1] = 1;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v5[151],
         InputBuffer,
         0x10u,
         a2,
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v6 )
    return 3221225626LL;
  ObfReferenceObject(v5[151]);
  Status = IofCallDriver(v5[151], v6);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(v5[151]);
  if ( (_DWORD)OutputBufferLength != 20 )
  {
    if ( Status >= 0 && (*a2 != 1198089537 || !a2[1] || IoStatusBlock.Information != OutputBufferLength) )
      return 3222536207LL;
    return (unsigned int)Status;
  }
  if ( Status == -2147483643 && *a2 == 1198089537 && a2[1] >= 0x14u )
    return (unsigned int)Status;
  return 3222536207LL;
}
