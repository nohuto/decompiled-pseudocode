/*
 * XREFs of sub_1C0016DC0 @ 0x1C0016DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0014F6C @ 0x1C0014F6C (sub_1C0014F6C.c)
 */

__int64 __fastcall sub_1C0016DC0(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v4; // rdi
  signed __int32 v5; // ebp
  unsigned int v6; // esi

  v4 = sub_1C0011220(BugCheckParameter3);
  sub_1C000F050(*((_QWORD *)v4 + 148));
  sub_1C0013F80((__int64)v4, 0LL, &stru_1C0061E78, 0);
  v5 = _InterlockedIncrement(v4 + 588);
  v6 = sub_1C0014F6C(BugCheckParameter3, (__int64)BugCheckParameter4, 2004308036, 0);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C0013F80((__int64)v4, 0LL, &stru_1C0061EE8, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    if ( (v4[355] & 0x100) != 0 )
    {
      if ( !v5 )
      {
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        sub_1C000FD80(*((_QWORD *)v4 + 148), 16, 2004306249, 0LL, (__int64)BugCheckParameter4);
        IoCsqInsertIrp((PIO_CSQ)(v4 + 570), BugCheckParameter4, 0LL);
        return 259LL;
      }
      v6 = -2147483631;
    }
    else
    {
      v6 = -1073741637;
    }
    sub_1C0013F80((__int64)v4, 0LL, &stru_1C0061EE8, v6);
    BugCheckParameter4->IoStatus.Status = v6;
    IofCompleteRequest(BugCheckParameter4, 0);
    sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  _InterlockedDecrement(v4 + 588);
  return v6;
}
