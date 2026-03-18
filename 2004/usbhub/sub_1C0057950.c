/*
 * XREFs of sub_1C0057950 @ 0x1C0057950
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 */

__int64 __fastcall sub_1C0057950(struct _DEVICE_OBJECT *BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int Status; // ebx
  _DWORD *v6; // rbx
  NTSTATUS v7; // esi
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  IrpDisposition = IrpProcessed;
  Status = BugCheckParameter4->IoStatus.Status;
  if ( (sub_1C0014F6C((__int64)BugCheckParameter3, (__int64)BugCheckParameter4, 1398362953, 0) & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  else
  {
    v6 = sub_1C0011220((__int64)BugCheckParameter3);
    sub_1C000FD80(*((_QWORD *)v6 + 148), 256, 1347898697, (__int64)BugCheckParameter4, 0LL);
    v7 = WmiSystemControl((PWMILIB_CONTEXT)(v6 + 334), BugCheckParameter3, BugCheckParameter4, &IrpDisposition);
    sub_1C000FD80(*((_QWORD *)v6 + 148), 256, 1884769609, (__int64)BugCheckParameter4, v7);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v7 = BugCheckParameter4->IoStatus.Status;
      BugCheckParameter4->IoStatus.Status = v7;
      IofCompleteRequest(BugCheckParameter4, 0);
    }
    sub_1C0014E84((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return (unsigned int)v7;
  }
}
