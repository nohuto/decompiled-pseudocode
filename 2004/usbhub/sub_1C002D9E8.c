/*
 * XREFs of sub_1C002D9E8 @ 0x1C002D9E8
 * Callers:
 *     sub_1C0048870 @ 0x1C0048870 (sub_1C0048870.c)
 *     sub_1C0048A24 @ 0x1C0048A24 (sub_1C0048A24.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 */

__int64 __fastcall sub_1C002D9E8(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  __int64 OutputBufferLength; // rbx
  PDEVICE_OBJECT *v7; // rbp
  PIRP v8; // rax
  IRP *v9; // rdi
  unsigned int v10; // r10d
  int v12; // eax
  NTSTATUS Status; // ebx
  __int64 v14; // rbp
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  OutputBufferLength = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v7 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 8, 1668574257, 2228256LL, 1LL);
  sub_1C000FD80(a1, 8, 1668574258, (__int64)a3, OutputBufferLength);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         0x220020u,
         v7[151],
         a3,
         OutputBufferLength,
         a3,
         OutputBufferLength,
         1u,
         &Event,
         &IoStatusBlock);
  v9 = v8;
  if ( v8 )
  {
    sub_1C000FD80(a1, 8, 1668574281, (__int64)v8, 0LL);
    v12 = sub_1C0001AE8(a1, (__int64)v9, 1330215283);
    Status = v12;
    if ( v12 < 0 )
    {
      v14 = v12;
      sub_1C000FD80(a1, 8, 1668574260, (__int64)v9, v12);
      IofCompleteRequest(v9, 0);
    }
    else
    {
      Status = IofCallDriver(v7[151], v9);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v14 = Status;
      sub_1C000FD80(a1, 8, 1668574259, (__int64)v9, Status);
      sub_1C001B88C(a1, (__int64)v9);
    }
    sub_1C000FD80(a1, 8, 1399026796, 2228256LL, v14);
    return (unsigned int)Status;
  }
  else
  {
    sub_1C000FD80(a1, 8, 1668574241, 2228256LL, -1073741670LL);
    return v10;
  }
}
