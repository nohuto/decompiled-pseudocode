/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x140645BA0
 * Callers:
 *     PiDqQueryEnumObject @ 0x140641DA4 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140646A00 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14075EE34 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[8] = a1;
    *((_QWORD *)PoolWithTag + 2) = a2;
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      PoolWithTag = (_DWORD *)*a4;
    }
    *((_QWORD *)PoolWithTag + 3) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
