/*
 * XREFs of _RtlSetSearchPathMode@4 @ 0x4B33CDC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpInvalidatePathCache@4 @ 0x4B2ED502 (_RtlpInvalidatePathCache@4.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  NTSTATUS v2; // esi
  void *v3; // edi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 0x10000) != 0 )
      return -1073741811;
  }
  else if ( (Flags & 0x18000) != 0x10000 )
  {
    return -1073741811;
  }
  RtlAcquireSRWLockExclusive(&stru_4B3A69F0);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((Flags & 0x8000) == 0)) != 0 )
  {
    v2 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = Flags;
    v2 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_4B3A69F0);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}
