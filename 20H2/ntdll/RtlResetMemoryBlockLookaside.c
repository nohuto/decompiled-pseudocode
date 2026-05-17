/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1800EB440
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x18006EBA0 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x1800EB4A0 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int i; // ebx
  unsigned int v6; // ebx

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(32LL * i + a1 + 48));
  v6 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
