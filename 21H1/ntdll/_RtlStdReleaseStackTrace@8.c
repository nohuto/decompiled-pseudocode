/*
 * XREFs of _RtlStdReleaseStackTrace@8 @ 0x4B369090
 * Callers:
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlInitializeResource@4 @ 0x4B2DFA70 (_RtlInitializeResource@4.c)
 *     _RtlpAddDebugInfoToCriticalSection@4 @ 0x4B2DFCB0 (_RtlpAddDebugInfoToCriticalSection@4.c)
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _RtlReleaseStackTrace@4 @ 0x4B368E50 (_RtlReleaseStackTrace@4.c)
 * Callees:
 *     @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090 (@RtlpInterlockedPushEntrySList@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpStdListRemove@8 @ 0x4B3694A1 (_RtlpStdListRemove@8.c)
 */

void __stdcall RtlStdReleaseStackTrace(int a1, int a2)
{
  int v2; // edi
  unsigned int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx
  _RTL_SRWLOCK *v6; // ebx
  unsigned __int16 v7; // cx

  v2 = 0;
  v3 = 0;
  v4 = *(unsigned __int16 *)(a2 + 10);
  if ( *(_WORD *)(a2 + 10) )
  {
    v5 = (_DWORD *)(a2 + 12);
    do
    {
      v3 += *v5++;
      --v4;
    }
    while ( v4 );
  }
  v6 = (_RTL_SRWLOCK *)(a1 + 8 * (v3 % *(_DWORD *)(a1 + 376)));
  if ( !byte_4B3A5DA8 )
    RtlAcquireSRWLockExclusive(v6 + 96);
  v7 = *(_WORD *)(a2 + 4);
  if ( (v7 & 0x7FF) != 0x7FF )
  {
    *(_WORD *)(a2 + 4) = v7 ^ (v7 ^ (v7 - 1)) & 0x7FF;
    if ( ((v7 ^ (v7 ^ (unsigned __int16)(v7 - 1)) & 0x7FF) & 0x7FF) == 0 )
    {
      RtlpStdListRemove(&v6[95], a2);
      v2 = 1;
    }
  }
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive(v6 + 96);
  if ( v2 )
  {
    RtlpInterlockedPushEntrySList(a1 + 8 * ((*(unsigned __int16 *)(a2 + 4) >> 11) + 15), (_DWORD *)(a2 + 12));
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 108));
  }
}
