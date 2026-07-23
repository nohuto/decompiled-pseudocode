/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180083A60
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18002FAF0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1)
{
  __int64 v2; // rbx
  struct _PEB *v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  bool v11; // zf
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rbx

  v2 = a1[4] | 0x7D0LL;
  v3 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v2 = a1[4];
  if ( v3->NumberOfProcessors == 1 )
    v2 = (unsigned int)v2 & 0xFF000000;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v4 = *a1 + 16LL;
  if ( !*(_QWORD *)v4 )
  {
    a1[4] = v2;
    v5 = (__int64 *)off_180164578[0];
    if ( *(_UNKNOWN ***)off_180164578[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v4 = &RtlCriticalSectionList;
    *(_QWORD *)(v4 + 8) = v5;
    *v5 = v4;
    off_180164578[0] = (_UNKNOWN **)v4;
  }
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
  if ( v6 != 1 )
  {
    do
    {
      v7 = 3LL;
      v8 = v6 & 6;
      if ( v8 != 2 )
        v7 = -1LL;
      v9 = v6 + v7;
      v10 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v9, v6);
    }
    while ( v10 != v6 );
    if ( v8 == 2 )
    {
      while ( (v9 & 1) == 0 )
      {
LABEL_17:
        v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
        v13 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v13 )
        {
          do
          {
            v14 = v12;
            v12 = (_QWORD *)*v12;
            v12[2] = v14;
            v13 = v12[1];
          }
          while ( !v13 );
          if ( v12 != (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v13;
        }
        if ( (*(_DWORD *)(v13 + 36) & 1) != 0 )
        {
          v15 = *(_QWORD *)(v13 + 16);
          if ( v15 )
          {
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
            *(_QWORD *)(v13 + 16) = 0LL;
            _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
            do
            {
LABEL_24:
              v17 = *(_QWORD *)(v13 + 16);
              v6 = *(_QWORD *)(v13 + 24);
              _interlockedbittestandset((volatile signed __int32 *)(v13 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v13 + 36), 1u) )
                LODWORD(v6) = ZwAlertThreadByThreadId((HANDLE)v6);
              v13 = v17;
            }
            while ( v17 );
            return v6;
          }
        }
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v9);
        v11 = v9 == v16;
        v9 = v16;
        if ( v11 )
          goto LABEL_24;
      }
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v9 - 4, v9);
        v11 = v9 == v6;
        v9 = v6;
        if ( v11 )
          break;
        if ( (v6 & 1) == 0 )
          goto LABEL_17;
      }
    }
  }
  return v6;
}
