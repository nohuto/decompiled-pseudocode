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

int __stdcall RtlSetSearchPathMode(int a1)
{
  int v2; // esi
  int v3; // edi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x10000) != 0 )
      return -1073741811;
  }
  else if ( (a1 & 0x18000) != 0x10000 )
  {
    return -1073741811;
  }
  RtlAcquireSRWLockExclusive(&dword_4B3A69F0);
  if ( (_bittest(&RtlpSearchPathMode, 0xFu) & ((a1 & 0x8000) == 0)) != 0 )
  {
    v2 = -1073741790;
  }
  else
  {
    RtlpSearchPathMode = a1;
    v2 = 0;
  }
  RtlReleaseSRWLockExclusive(&dword_4B3A69F0);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}
