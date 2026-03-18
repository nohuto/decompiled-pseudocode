/*
 * XREFs of sub_1C005B388 @ 0x1C005B388
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C005B28C @ 0x1C005B28C (sub_1C005B28C.c)
 */

__int64 __fastcall sub_1C005B388(__int64 a1)
{
  PDEVICE_OBJECT *v2; // rbx
  char *PoolWithTag; // rax
  _DWORD *v4; // rdi
  PIRP v5; // rax
  NTSTATUS v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v2 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0xCCuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340((__m128 *)(PoolWithTag + 8), 0, 0xC4uLL);
  *v4 = 1;
  v4[1] = 204;
  v5 = IoBuildDeviceIoControlRequest(0x22044Fu, v2[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v4;
    v6 = IofCallDriver(v2[151], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v6 = 0;
    }
    if ( v6 >= 0 && IoStatusBlock.Status >= 0 && (v4[33] & 1) != 0 )
      sub_1C005B28C(a1, v4 + 34);
    sub_1C0050D40((__int64)(v4 + 7));
    sub_1C0050D40((__int64)(v4 + 3));
    sub_1C0050D40((__int64)(v4 + 11));
  }
  else
  {
    v6 = -1073741670;
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
