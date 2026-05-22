/*
 * XREFs of ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800BF200
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x1800BF3C8 (--1SipcServer@@EEAA@XZ.c)
 * Callees:
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800C1BD0 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 */

void __fastcall AggregateWaitHandle::~AggregateWaitHandle(HANDLE *this)
{
  HANDLE v2; // rcx

  AggregateWaitHandle::Reset((AggregateWaitHandle *)this);
  v2 = this[1];
  if ( v2 )
  {
    SetHandleInformation(v2, 2u, 0);
    CloseHandle(this[1]);
  }
  if ( *this )
    CloseHandle(*this);
  NtList<AggregateWaitHandle::WaitListEntry>::Clear(this + 3);
}
