/*
 * XREFs of PiDqObjectActionQueueEntryCreate @ 0x140766ABC
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140766958 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqObjectActionQueueEntryCreate(volatile signed __int32 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x58706E50u);
  *(_QWORD *)a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = a1;
    *(_QWORD *)(*(_QWORD *)a2 + 24LL) = _InterlockedIncrement64(&PiDqSequenceNumber);
    _InterlockedIncrement(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
