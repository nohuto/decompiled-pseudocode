/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x180005B5C
 * Callers:
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180007D74 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 268;
    RtlAcquireSRWLockShared(a1 + 268);
    v6 = (_RTL_SRWLOCK *)RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 270];
  }
  return RtlpHpVaMgrAlloc(v6);
}
