/*
 * XREFs of _RtlResetMemoryBlockLookaside@4 @ 0x4B34D5E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlResetMemoryZone@4 @ 0x4B34D850 (_RtlResetMemoryZone@4.c)
 */

int __stdcall RtlResetMemoryBlockLookaside(int a1)
{
  unsigned int v1; // ecx
  _DWORD *v2; // eax
  int v3; // esi

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
  v1 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    v2 = (_DWORD *)(a1 + 32);
    do
    {
      *v2 = 0;
      ++v1;
      v2[1] = 0;
      v2 += 4;
    }
    while ( v1 < *(_DWORD *)(a1 + 20) );
  }
  v3 = RtlResetMemoryZone(*(_DWORD *)(a1 + 8));
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return v3;
}
