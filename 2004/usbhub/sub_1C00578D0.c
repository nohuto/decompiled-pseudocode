/*
 * XREFs of sub_1C00578D0 @ 0x1C00578D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 */

__int64 __fastcall sub_1C00578D0(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // eax
  unsigned int v5; // edi

  v4 = sub_1C0014F6C(BugCheckParameter3, (__int64)BugCheckParameter4, 1346654035, 0);
  BugCheckParameter4->IoStatus.Status = v4;
  v5 = v4;
  if ( v4 >> 30 == 3 )
  {
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    IofCompleteRequest(BugCheckParameter4, 0);
    sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return v5;
}
