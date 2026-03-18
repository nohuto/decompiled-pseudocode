/*
 * XREFs of sub_1C00177A8 @ 0x1C00177A8
 * Callers:
 *     sub_1C0018160 @ 0x1C0018160 (sub_1C0018160.c)
 *     sub_1C00329F0 @ 0x1C00329F0 (sub_1C00329F0.c)
 *     sub_1C0033138 @ 0x1C0033138 (sub_1C0033138.c)
 *     sub_1C003363C @ 0x1C003363C (sub_1C003363C.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C0054EDC @ 0x1C0054EDC (sub_1C0054EDC.c)
 *     sub_1C0054F88 @ 0x1C0054F88 (sub_1C0054F88.c)
 *     sub_1C0055158 @ 0x1C0055158 (sub_1C0055158.c)
 *     sub_1C0055234 @ 0x1C0055234 (sub_1C0055234.c)
 *     sub_1C00552B8 @ 0x1C00552B8 (sub_1C00552B8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 sub_1C00177A8(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // r15
  unsigned int Status; // ebx
  int *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v13; // rbx
  PIRP v14; // rdx
  int v15; // eax
  bool v16; // zf
  NTSTATUS v17; // eax
  __int64 v18; // r10
  __int64 v19; // r9
  int v20; // r10d
  _DWORD *v22; // [rsp+50h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  int *v28; // [rsp+E0h] [rbp+38h]
  va_list va1; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v26 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, int *);
  LODWORD(v26) = 0;
  memset(&Event, 0, sizeof(Event));
  v8 = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  v10 = sub_1C000F050(a1);
  v22 = sub_1C0011220(a2);
  Status = sub_1C0015EB4(a1, (unsigned int *)va);
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_20;
  if ( !a5 )
  {
    Status = -1073741811;
    goto LABEL_20;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PoolType, 0x88uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    v20 = -1073737728;
    Status = -1073741670;
    goto LABEL_12;
  }
  sub_1C001D340(PoolWithTag, 0LL, 136LL);
  v9 = sub_1C0015C80(a1, a2, (__int64)v8, 0x444E5373u);
  if ( !v9 || (v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)v10 + 152)) == 0LL )
  {
    Status = -1073741810;
LABEL_20:
    v20 = -1073713152;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(0x220003u, v13, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v14 )
    goto LABEL_23;
  *((_QWORD *)v8 + 1) = *((_QWORD *)v22 + 145);
  v8[8] = 10;
  v15 = v8[8];
  *v8 = 3276936;
  v16 = *a3 >= 0;
  v8[14] = 2000;
  if ( !v16 )
    v15 = 11;
  *((_QWORD *)v8 + 6) = 0LL;
  v8[8] = v15;
  v8[9] = (unsigned __int16)*a5;
  *((_QWORD *)v8 + 5) = a4;
  *((_QWORD *)v8 + 16) = *(_QWORD *)a3;
  v14->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v8;
  v17 = IofCallDriver(v13, v14);
  Status = v17;
  if ( v17 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = v17;
  }
  v18 = v8[1];
  v19 = *((unsigned __int16 *)v8 + 18);
  *a5 = v19;
  sub_1C000FD80(a1, 256, 1396925558, v19, v18);
LABEL_12:
  if ( v28 )
    *v28 = v20;
  if ( v9 )
    sub_1C0016670(a1, v9, (__int64)v8, 0x444E5373u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return Status;
}
