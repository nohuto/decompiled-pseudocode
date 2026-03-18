/*
 * XREFs of sub_1C0029620 @ 0x1C0029620
 * Callers:
 *     sub_1C002AE10 @ 0x1C002AE10 (sub_1C002AE10.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0029620(__int64 a1, unsigned __int16 *a2, __int32 a3, _DWORD *a4)
{
  PDEVICE_OBJECT *v7; // rax
  unsigned __int64 v8; // rbx
  PDEVICE_OBJECT *v9; // rdi
  __int64 result; // rax
  char *v11; // rdx
  IRP *v12; // rbx
  NTSTATUS Status; // ebx
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  __m128 InputBuffer[16]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+184h] [rbp+84h]

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v7 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v8 = *a2;
  v9 = v7;
  if ( v8 + 6 > 0x100 )
    return 3221225485LL;
  sub_1C001D340(InputBuffer, 0, 0x114uLL);
  v11 = (char *)*((_QWORD *)a2 + 1);
  InputBuffer[0].m128_i32[0] = 1181312321;
  v17 = 276;
  sub_1C001D080(&InputBuffer[0].m128_i8[4], v11, v8);
  InputBuffer[0].m128_i8[v8 + 4] = 46;
  *(__int32 *)((char *)&InputBuffer[0].m128_i32[1] + (unsigned int)(v8 + 1)) = a3;
  InputBuffer[0].m128_i8[(unsigned int)(v8 + 5) + 4] = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(0x32C018u, v9[151], InputBuffer, 0x114u, a4, 0x414u, 0, &Event, &IoStatusBlock);
  if ( !v12 )
    return 3221225626LL;
  ObfReferenceObject(v9[151]);
  Status = IofCallDriver(v9[151], v12);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(v9[151]);
  if ( Status < 0 )
    return (unsigned int)Status;
  if ( *a4 != 1114596673 )
    return 3222536207LL;
  result = (unsigned int)Status;
  if ( !a4[2] )
    return 3222536207LL;
  return result;
}
