/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x180005B5C
 * Callers:
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x180007D74 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdi
  __int64 v10; // rbx

  if ( *a4 == -1 )
  {
    v10 = a1 + 2144;
    RtlAcquireSRWLockShared(a1 + 2144);
    v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    RtlReleaseSRWLockShared(v10);
  }
  else
  {
    v8 = a1 + 48 * ((unsigned int)*a4 + 45LL);
  }
  return RtlpHpVaMgrAlloc(v8, a2, a3);
}
