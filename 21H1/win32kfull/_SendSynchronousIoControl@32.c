/*
 * XREFs of _SendSynchronousIoControl@32 @ 0x1A1748
 * Callers:
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z @ 0x1A16B5 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QBEJKPAXK0KPAK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SendSynchronousIoControl(
        ULONG IoControlCode,
        int a2,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a8)
{
  PIRP v9; // eax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [esp+Ch] [ebp-1Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+1Ch] [ebp-Ch] BYREF
  int v13; // [esp+24h] [ebp-4h]

  v13 = a2;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  if ( a8 )
    *a8 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v9 = IoBuildDeviceIoControlRequest(
         IoControlCode,
         DeviceObject,
         InputBuffer,
         InputBufferLength,
         OutputBuffer,
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v9 )
    return -1073741823;
  *(_DWORD *)(v9->Tail.Overlay.PacketType - 12) = v13;
  if ( IofCallDriver(DeviceObject, v9) == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
  result = IoStatusBlock.Status;
  if ( IoStatusBlock.Status >= 0 )
  {
    if ( a8 )
      *a8 = IoStatusBlock.Information;
  }
  return result;
}
