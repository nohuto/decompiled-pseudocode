/*
 * XREFs of sub_1C001C980 @ 0x1C001C980
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 */

__int64 __fastcall sub_1C001C980(PVOID Object, PIRP Irp)
{
  unsigned int Status; // edi
  _QWORD *PoolWithTag; // rsi

  sub_1C0011220((__int64)Object);
  Status = Irp->IoStatus.Status;
  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    Status = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      ObfReferenceObject(Object);
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
    }
    else
    {
      Status = -1073741670;
    }
    Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
