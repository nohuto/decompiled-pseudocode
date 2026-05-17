/*
 * XREFs of _RtlDeleteBarrier@4 @ 0x4B3502C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __stdcall RtlDeleteBarrier(int a1)
{
  volatile signed __int32 *v1; // esi
  signed __int32 result; // eax

  if ( ((a1 + 7) & 0xFFFFFFF8) != 0 )
  {
    v1 = (volatile signed __int32 *)(((a1 + 7) & 0xFFFFFFF8) + 8);
    RtlAcquireSRWLockExclusive(v1);
    return RtlReleaseSRWLockExclusive(v1);
  }
  return result;
}
