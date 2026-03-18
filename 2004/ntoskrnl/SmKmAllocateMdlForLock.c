/*
 * XREFs of SmKmAllocateMdlForLock @ 0x140304C38
 * Callers:
 *     SmFpAllocate @ 0x140304118 (SmFpAllocate.c)
 *     SmFpPreAllocate @ 0x1403C5A04 (SmFpPreAllocate.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140305F04 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall SmKmAllocateMdlForLock(__int64 a1)
{
  _QWORD *v2; // r14
  int v3; // ebp
  unsigned __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  void *v6; // rbx

  v2 = 0LL;
  v3 = SmAcquireReleaseCharges(a1, 3LL, 0LL);
  if ( v3 )
  {
    v4 = (unsigned __int64)(a1 + 4095) >> 12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 48, 0x4C506D73u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v2 = PoolWithTag;
      *((_WORD *)PoolWithTag + 4) = 8 * (v4 + 6);
      v6 = 0LL;
      *((_WORD *)PoolWithTag + 5) = 0;
      v3 = 0;
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      *((_DWORD *)PoolWithTag + 10) = a1;
    }
    if ( v3 )
      SmAcquireReleaseCharges(a1, 3LL, 1LL);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  return v2;
}
