/*
 * XREFs of RtlDestroyAtomTable @ 0x18008A730
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpLockAtomTable @ 0x18004C948 (RtlpLockAtomTable.c)
 *     RtlDestroyHandleTable @ 0x1800855D0 (RtlDestroyHandleTable.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlDestroyAtomTable(char *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD **i; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( RtlpLockAtomTable(a1, a2, a3, a4) )
  {
    v5 = 0;
    for ( i = (_QWORD **)(a1 + 72); v5 < *((_DWORD *)a1 + 16); ++v5 )
    {
      v7 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v8 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        *v8 = 0LL;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset(a1, 0, 0x50uLL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
    return 0LL;
  }
  return 3221225485LL;
}
