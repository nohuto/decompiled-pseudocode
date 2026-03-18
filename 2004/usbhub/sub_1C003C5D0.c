/*
 * XREFs of sub_1C003C5D0 @ 0x1C003C5D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 */

__int64 __fastcall sub_1C003C5D0(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // edi

  v4 = sub_1C0014F6C(BugCheckParameter3, (__int64)BugCheckParameter4, 1934643031, 0);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = v4;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v4;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = 0;
    IofCompleteRequest(BugCheckParameter4, 0);
    sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return 0LL;
  }
}
