/*
 * XREFs of ?xxxCallGenerateIAMKey@@YGJPAUtagIAM_KKEY@@@Z @ 0x1416FE
 * Callers:
 *     _xxxGenerateIAMKey@4 @ 0xE10C8 (_xxxGenerateIAMKey@4.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall xxxCallGenerateIAMKey(_DWORD *this)
{
  NTSTATUS result; // eax
  IRP *v3; // eax
  NTSTATUS Status; // esi
  struct _KEVENT Event; // [esp+8h] [ebp-40h] BYREF
  _DWORD v6[3]; // [esp+18h] [ebp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-24h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-1Ch] BYREF
  PFILE_OBJECT FileObject; // [esp+34h] [ebp-14h] BYREF
  PDEVICE_OBJECT DeviceObject; // [esp+38h] [ebp-10h] BYREF
  _DWORD OutputBuffer[2]; // [esp+3Ch] [ebp-Ch] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  FileObject = 0;
  DeviceObject = 0;
  memset(v6, 0, sizeof(v6));
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, (ACCESS_MASK)&loc_1F01FF, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((int)DeviceObject, v6, (int)UserDereferenceObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x390004u, DeviceObject, 0, 0, OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
        UserSessionSwitchLeaveCrit();
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
        EnterCrit(0, 1);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        this[2] = OutputBuffer[0];
        this[3] = OutputBuffer[1];
      }
    }
    else
    {
      Status = -1073741823;
    }
    PopAndFreeW32ThreadLock((int)v6);
    return Status;
  }
  return result;
}
