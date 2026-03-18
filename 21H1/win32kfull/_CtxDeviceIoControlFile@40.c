/*
 * XREFs of _CtxDeviceIoControlFile@40 @ 0x23A596
 * Callers:
 *     _EngFileIoControl@28 @ 0x1E7CFA (_EngFileIoControl@28.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CtxDeviceIoControlFile(
        struct _FILE_OBJECT *Object,
        ULONG a2,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        int a7,
        int a8,
        PIO_STATUS_BLOCK IoStatusBlock,
        int a10)
{
  bool v11; // zf
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK *v13; // esi
  PIRP v14; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // eax
  struct _KEVENT Event; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v17[2]; // [esp+18h] [ebp-Ch] BYREF
  ULONG IoControlCode; // [esp+20h] [ebp-4h]
  struct _DEVICE_OBJECT *IoStatusBlocka; // [esp+44h] [ebp+20h]

  IoControlCode = a2;
  memset(&Event, 0, sizeof(Event));
  v11 = (Object->Flags & 2) == 0;
  v17[0] = 0;
  v17[1] = 0;
  if ( !v11 )
    return -1073741776;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v13 = IoStatusBlock;
  if ( !IoStatusBlock )
    v13 = (struct _IO_STATUS_BLOCK *)v17;
  IoStatusBlocka = IoGetRelatedDeviceObject(Object);
  v14 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          IoStatusBlocka,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          v13);
  if ( !v14 )
    return -1073741670;
  ObfReferenceObject(Object);
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  v14->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation[-1].FileObject = Object;
  v14->Flags |= 4u;
  result = IofCallDriver(IoStatusBlocka, v14);
  if ( result == 259 )
  {
    result = KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0);
    if ( !result )
      return v13->Status;
  }
  return result;
}
