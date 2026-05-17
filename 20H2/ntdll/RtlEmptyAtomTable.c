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

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // r15
  unsigned int v6; // ebp
  __int64 *i; // r14
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rdx

  v4 = a2;
  if ( !RtlpLockAtomTable((_DWORD *)a1, a2, a3, a4) )
    return 3221225485LL;
  v6 = 0;
  for ( i = (__int64 *)(a1 + 72); v6 < *(_DWORD *)(a1 + 64); ++v6 )
  {
    v8 = i++;
    while ( 1 )
    {
      v9 = *v8;
      if ( !*v8 )
        break;
      if ( v4 || (*(_BYTE *)(v9 + 14) & 1) == 0 )
      {
        v11 = *v8;
        *v8 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        RtlpFreeHandleForAtom(a1, v11);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
      }
      else
      {
        v8 = (__int64 *)*v8;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return 0LL;
}
