/*
 * XREFs of sub_1C0053E00 @ 0x1C0053E00
 * Callers:
 *     sub_1C0057490 @ 0x1C0057490 (sub_1C0057490.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0053E00(__int64 a1, __int64 a2, _DWORD *a3)
{
  PDEVICE_OBJECT *v5; // rbp
  _DWORD *v6; // rbx
  __m128 *PoolWithTag; // rax
  __m128 *v8; // rdi
  PIRP v9; // rax
  unsigned int Status; // ebx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v5 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v6 = sub_1C0011220(a2);
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0x58uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340(PoolWithTag, 0, 0x58uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = IoBuildDeviceIoControlRequest(0x220003u, v5[152], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v9 )
  {
    v8->m128_i32[0] = 88;
    v8->m128_u64[1] = *((_QWORD *)v6 + 145);
    v8[1].m128_u64[1] = 0LL;
    v9->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v8;
    v11 = IofCallDriver(v5[152], v9);
    Status = v11;
    if ( v11 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = v11;
    }
    if ( a3 )
      *a3 = v8->m128_i32[1];
  }
  else
  {
    Status = -1073741670;
  }
  ExFreePoolWithTag(v8, 0);
  return Status;
}
