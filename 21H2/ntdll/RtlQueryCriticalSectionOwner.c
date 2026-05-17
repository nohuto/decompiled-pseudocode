/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E8EF0
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D8CBC (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18009DE20 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(char *a1, char a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  _UNKNOWN **v10; // rbx
  _QWORD *v11; // rdi
  char j; // si
  __int64 v13; // rbx
  __int64 v15; // [rsp+50h] [rbp-58h]
  char *v16; // [rsp+58h] [rbp-50h]
  unsigned int i; // [rsp+B0h] [rbp+8h]
  unsigned int v18; // [rsp+C0h] [rbp+18h]

  if ( !a1 )
    return 0LL;
  v18 = 0;
  v4 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 17LL, 0LL);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = (v4 >> 1) & 1;
      if ( (v4 & 1) != 0 && (v5 || (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
        return 0LL;
      v6 = (v4 | 1) + 16;
      if ( v5 )
        v6 = v4 | 1;
      if ( v4 == _InterlockedCompareExchange64(&RtlCriticalSectionLock, v6, v4) )
        break;
      v7 = v18;
      if ( v18 )
      {
        if ( v18 < 0x1FFF )
          v7 = 2 * v18;
      }
      else
      {
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
          goto LABEL_16;
        v7 = 64;
      }
      v18 = v7;
      v8 = __rdtsc();
      v9 = 10 * (((v7 - 1) & (unsigned int)v8) + v7) / MEMORY[0x7FFE02D6];
      for ( i = 0; i < v9; ++i )
        _mm_pause();
LABEL_16:
      _m_prefetchw(&RtlCriticalSectionLock);
      v4 = RtlCriticalSectionLock;
    }
  }
  v10 = (_UNKNOWN **)RtlCriticalSectionList;
  v11 = RtlCriticalSectionList;
  for ( j = 0; v10 != &RtlCriticalSectionList; j ^= 1u )
  {
    if ( !*((_WORD *)v10 - 8)
      && (!a2 || a1 == (char *)*(v10 - 1) + 8)
      && (int)ZwReadVirtualMemory() >= 0
      && (a2 || v16 == a1) )
    {
      v13 = v15;
      goto LABEL_31;
    }
    v10 = (_UNKNOWN **)*v10;
    if ( v10 == v11 )
      break;
    if ( j )
      v11 = (_QWORD *)*v11;
  }
  v13 = 0LL;
LABEL_31:
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v13;
}
