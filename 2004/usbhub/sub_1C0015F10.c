/*
 * XREFs of sub_1C0015F10 @ 0x1C0015F10
 * Callers:
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C00139C0 @ 0x1C00139C0 (sub_1C00139C0.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 *     sub_1C002C018 @ 0x1C002C018 (sub_1C002C018.c)
 *     sub_1C002C930 @ 0x1C002C930 (sub_1C002C930.c)
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 *     sub_1C002D07C @ 0x1C002D07C (sub_1C002D07C.c)
 *     sub_1C0038E18 @ 0x1C0038E18 (sub_1C0038E18.c)
 *     sub_1C003CF50 @ 0x1C003CF50 (sub_1C003CF50.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

NTSTATUS __fastcall sub_1C0015F10(__int64 a1, ULONG a2, ULONG_PTR a3, struct _UNICODE_STRING *a4)
{
  __int64 v7; // rbx
  PIRP v8; // rax
  IRP *v9; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(a2, *(PDEVICE_OBJECT *)(v7 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &IoStatusBlock);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a3;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), v9);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
