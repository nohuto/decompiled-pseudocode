/*
 * XREFs of sub_1C0059638 @ 0x1C0059638
 * Callers:
 *     sub_1C0059A30 @ 0x1C0059A30 (sub_1C0059A30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

LONG __fastcall sub_1C0059638(__int64 a1)
{
  struct _KEVENT *v2; // rbx
  UCHAR v3; // r9
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // rcx
  void *v7; // r10

  v2 = (struct _KEVENT *)sub_1C000F050(a1);
  v2[142].Header.Type = 1;
  KeWaitForSingleObject(&v2[139], Executive, 0, 0, 0LL);
  sub_1C000FD80(a1, 0x10000, 1397113420, 0LL, v2[142].Header.Signalling);
  v2[142].Header.Signalling = v3;
  p_WaitListHead = &v2[129].Header.WaitListHead;
  while ( 1 )
  {
    Flink = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink == p_WaitListHead )
      break;
    if ( Flink->Blink != p_WaitListHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_WaitListHead->Flink = v6;
    v6->Blink = p_WaitListHead;
    sub_1C000FD80(a1, 0x10000, 1178749997, 0LL, (__int64)&Flink[-1].Blink);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  *(_QWORD *)&v2[137].Header.Lock = 0LL;
  v2[137].Header.WaitListHead.Blink = 0LL;
  v2[137].Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&v2[138].Header.Lock = 0LL;
  v2[130].Header.LockNV = 0;
  HIDWORD(v2[138].Header.WaitListHead.Blink) = 0;
  LODWORD(v2[138].Header.WaitListHead.Blink) = 0;
  HIDWORD(v2[138].Header.WaitListHead.Flink) = 0;
  LODWORD(v2[138].Header.WaitListHead.Flink) = 0;
  return KeSetEvent(v2 + 139, 0, 0);
}
