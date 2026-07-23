/*
 * XREFs of RtlEmptyAtomTable @ 0x18008A7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpLockAtomTable @ 0x18004C948 (RtlpLockAtomTable.c)
 *     RtlpFreeHandleForAtom @ 0x18004CCD0 (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v4; // ebp
  __int64 *i; // r14
  __int64 *v6; // rsi
  _BYTE *v7; // rbx
  __int64 v9; // rdx

  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  v4 = 0;
  for ( i = (__int64 *)((char *)AtomTableHandle + 72); v4 < *((_DWORD *)AtomTableHandle + 16); ++v4 )
  {
    v6 = i++;
    while ( 1 )
    {
      v7 = (_BYTE *)*v6;
      if ( !*v6 )
        break;
      if ( IncludePinnedAtoms || (v7[14] & 1) == 0 )
      {
        v9 = *v6;
        *v6 = *(_QWORD *)v7;
        *(_QWORD *)v7 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTableHandle, v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      else
      {
        v6 = (__int64 *)*v6;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return 0;
}
