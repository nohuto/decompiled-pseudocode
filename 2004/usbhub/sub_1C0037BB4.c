/*
 * XREFs of sub_1C0037BB4 @ 0x1C0037BB4
 * Callers:
 *     sub_1C0019118 @ 0x1C0019118 (sub_1C0019118.c)
 *     sub_1C002A5E8 @ 0x1C002A5E8 (sub_1C002A5E8.c)
 *     sub_1C002C0A0 @ 0x1C002C0A0 (sub_1C002C0A0.c)
 *     sub_1C002CE78 @ 0x1C002CE78 (sub_1C002CE78.c)
 *     sub_1C00300F4 @ 0x1C00300F4 (sub_1C00300F4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0037BB4(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rdi
  PIRP v5; // rax
  __int64 v6; // rcx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v4 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(0x220437u, v4[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v5 )
    return 0LL;
  v6 = (__int64)&v5->Tail.Overlay.CurrentStackLocation[-1];
  if ( v5->Tail.Overlay.CurrentStackLocation == (struct _IO_STACK_LOCATION *)72 )
    sub_1C002DC78(a1, 0LL);
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 8) = &v11;
  Status = IofCallDriver(v4[151], v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = Status;
  }
  sub_1C000FD80(a1, 4, 1734633554, Status, v11);
  if ( IoStatusBlock.Status >= 0 )
    return v11;
  else
    return 0LL;
}
