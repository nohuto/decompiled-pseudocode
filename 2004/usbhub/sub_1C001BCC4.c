/*
 * XREFs of sub_1C001BCC4 @ 0x1C001BCC4
 * Callers:
 *     sub_1C001BB74 @ 0x1C001BB74 (sub_1C001BB74.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C001BCC4(__int64 a1, struct _DEVICE_OBJECT *a2, unsigned int a3)
{
  __int64 v3; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v6; // rax
  NTSTATUS v7; // eax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v3 = a3;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  if ( AttachedDeviceReference )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(v3, AttachedDeviceReference, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    if ( v6 )
    {
      v7 = IofCallDriver(AttachedDeviceReference, v6);
      Status = v7;
      if ( v7 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = v7;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      ObfDereferenceObject(AttachedDeviceReference);
      Status = -1073741670;
    }
  }
  else
  {
    Status = -1073741810;
  }
  sub_1C000FD80(a1, 32, 1397313362, v3, Status);
  return (unsigned int)Status;
}
