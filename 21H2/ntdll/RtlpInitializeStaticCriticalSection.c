/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180083F60
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18002FAF0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAlertThreadByThreadId @ 0x18009E430 (ZwAlertThreadByThreadId.c)
 */

signed __int64 __fastcall RtlpInitializeStaticCriticalSection(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rbx
  struct _PEB *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rcx
  signed __int64 result; // rax
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  bool v14; // zf
  _QWORD *v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  signed __int64 v19; // rax
  __int64 v20; // rbx

  v5 = a1[4] | 0x7D0LL;
  v6 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v5 = a1[4];
  if ( v6->NumberOfProcessors == 1 )
    v5 = (unsigned int)v5 & 0xFF000000;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a1[4], a3, a4);
  v7 = *a1 + 16LL;
  if ( !*(_QWORD *)v7 )
  {
    a1[4] = v5;
    v8 = (__int64 *)off_180166648[0];
    if ( *(_UNKNOWN ***)off_180166648[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v7 = &RtlCriticalSectionList;
    *(_QWORD *)(v7 + 8) = v8;
    *v8 = v7;
    off_180166648[0] = (_UNKNOWN **)v7;
  }
  result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v10 = 3LL;
      v11 = result & 6;
      if ( v11 != 2 )
        v10 = -1LL;
      v12 = result + v10;
      v13 = result;
      result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v12, result);
    }
    while ( v13 != result );
    if ( v11 == 2 )
    {
      while ( (v12 & 1) == 0 )
      {
LABEL_17:
        v15 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
        v16 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v16 )
        {
          do
          {
            v17 = v15;
            v15 = (_QWORD *)*v15;
            v15[2] = v17;
            v16 = v15[1];
          }
          while ( !v16 );
          if ( v15 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v16;
        }
        if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
        {
          v18 = *(_QWORD *)(v16 + 16);
          if ( v18 )
          {
            *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
            *(_QWORD *)(v16 + 16) = 0LL;
            _InterlockedAnd64(&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
            do
            {
LABEL_24:
              v20 = *(_QWORD *)(v16 + 16);
              result = *(_QWORD *)(v16 + 24);
              _interlockedbittestandset((volatile signed __int32 *)(v16 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v16 + 36), 1u) )
                result = ZwAlertThreadByThreadId(result, v12);
              v16 = v20;
            }
            while ( v20 );
            return result;
          }
        }
        v19 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, v12);
        v14 = v12 == v19;
        v12 = v19;
        if ( v14 )
          goto LABEL_24;
      }
      while ( 1 )
      {
        result = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v12 - 4, v12);
        v14 = v12 == result;
        v12 = result;
        if ( v14 )
          break;
        if ( (result & 1) == 0 )
          goto LABEL_17;
      }
    }
  }
  return result;
}
