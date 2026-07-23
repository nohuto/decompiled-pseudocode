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

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable((__int64)AtomTableHandle) )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v2 < *((_DWORD *)AtomTableHandle + 16); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        *v5 = 0LL;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset(AtomTableHandle, 0, 0x50uLL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AtomTableHandle);
    return 0;
  }
  return -1073741811;
}
