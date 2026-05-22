/*
 * XREFs of ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800C1BD0
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800BF200 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800C1420 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x1800BFDAC (-Clear@-$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ.c)
 */

void __fastcall AggregateWaitHandle::Reset(AggregateWaitHandle *this, __int64 a2)
{
  __int64 **v2; // rdi
  __int64 **i; // rbx

  v2 = (__int64 **)((char *)this + 24);
  for ( i = (__int64 **)*((_QWORD *)this + 3); i != v2; i = (__int64 **)*i )
  {
    LOBYTE(a2) = 1;
    NtCancelWaitCompletionPacket(i[3], a2);
    CloseHandle(i[3]);
  }
  NtList<AggregateWaitHandle::WaitListEntry>::Clear(v2);
  operator delete(*((void **)this + 2), (const struct std::nothrow_t *)0x20);
  *((_QWORD *)this + 2) = 0LL;
}
