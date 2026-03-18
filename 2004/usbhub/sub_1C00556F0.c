/*
 * XREFs of sub_1C00556F0 @ 0x1C00556F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 *     sub_1C0073840 @ 0x1C0073840 (sub_1C0073840.c)
 */

__int64 __fastcall sub_1C00556F0(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  int LowPart; // esi
  int Status; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbp

  LowPart = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Status = sub_1C0014F6C(BugCheckParameter3, (__int64)BugCheckParameter4, 1145655107, LowPart);
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    v6 = sub_1C0011220(BugCheckParameter3);
    v7 = v6;
    if ( LowPart == 2952208 )
    {
      Status = -1073741637;
      sub_1C000FD80(*((_QWORD *)v6 + 148), 256, 1885957938, (__int64)BugCheckParameter4, 0LL);
    }
    else if ( LowPart == 3080195 )
    {
      Status = sub_1C0073840(BugCheckParameter4);
      sub_1C000FD80(*((_QWORD *)v7 + 148), 256, 1885957937, (__int64)BugCheckParameter4, Status);
    }
    else
    {
      sub_1C000FD80(
        *((_QWORD *)v6 + 148),
        256,
        1885957939,
        (__int64)BugCheckParameter4,
        BugCheckParameter4->IoStatus.Status);
      Status = BugCheckParameter4->IoStatus.Status;
    }
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return (unsigned int)Status;
}
