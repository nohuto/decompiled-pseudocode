/*
 * XREFs of sub_1C001C3C0 @ 0x1C001C3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C003B3C4 @ 0x1C003B3C4 (sub_1C003B3C4.c)
 */

__int64 __fastcall sub_1C001C3C0(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int MinorFunction; // r10d
  __int64 v9; // rax
  unsigned int Status; // edi

  v4 = sub_1C0011220((__int64)a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v4[293] = MinorFunction;
  *((_BYTE *)v4 + (((unsigned __int8)_InterlockedExchangeAdd(v4 + 222, 1u) + 1) & 0xF) + 892) = MinorFunction;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C003B3C4(
      DeviceObject->DeviceExtension,
      v5,
      v6,
      15,
      (__int64)&unk_1C0062F40,
      CurrentStackLocation->MinorFunction);
  v9 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v9 >= 0x20u )
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    return (unsigned int)off_1C005E3A8[2 * v9](a1, a2);
  }
  return Status;
}
