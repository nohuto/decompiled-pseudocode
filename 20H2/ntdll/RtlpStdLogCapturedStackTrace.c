/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x180101B48
 * Callers:
 *     RtlStdLogStackTrace @ 0x180101560 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A1A10 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpStdGetSpaceForTrace @ 0x180101A58 (RtlpStdGetSpaceForTrace.c)
 *     RtlpStdLockAcquire @ 0x180101B08 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x180101B28 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v6; // edx
  SIZE_T v7; // rbp
  unsigned int v8; // r15d
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 i; // rbx
  __int64 SpaceForTrace; // rax
  __int16 v14; // cx
  __int64 v15; // rcx
  __int16 v16; // cx

  v4 = *(unsigned __int16 *)(a2 + 14);
  v6 = (unsigned int)a3 % *(_DWORD *)(a1 + 720);
  v7 = 8 * v4;
  v8 = a3;
  v10 = 2LL * v6;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v11 = a1 + 16LL * v6;
  RtlpStdLockAcquire(v11 + 736, v6, a3, a4);
  for ( i = *(_QWORD *)(a1 + 8 * v10 + 728); i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v7) == v7 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove((void *)(SpaceForTrace + 16), (const void *)(a2 + 16), v7);
  v14 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v14;
  v15 = 2LL * (v8 % *(_DWORD *)(a1 + 720));
  *(_QWORD *)i = *(_QWORD *)(a1 + 16LL * (v8 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v15 + 728) = i;
LABEL_8:
  v16 = *(_WORD *)(i + 8);
  if ( (v16 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v16 ^ (v16 ^ (v16 + 1)) & 0x7FF;
LABEL_11:
  RtlpStdLockRelease((volatile signed __int64 *)(v11 + 736));
  return i;
}
