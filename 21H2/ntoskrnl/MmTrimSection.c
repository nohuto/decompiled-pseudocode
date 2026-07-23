/*
 * XREFs of MmTrimSection @ 0x1402FA398
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1402FA2A0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 * Callees:
 *     MiComputeFlushRange @ 0x140262830 (MiComputeFlushRange.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     MiFlushRelease @ 0x14031FD60 (MiFlushRelease.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v4 = a4 & 1;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v11;
    v11 = v7;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (int)a2, a3, v4 >= 0x20, (__int64)&v8) )
    return 0LL;
  v5 = MiTrimSection(&v8, 0LL, v4);
  MiFlushRelease(v8, *((_QWORD *)&v9 + 1), v10);
  return v5;
}
