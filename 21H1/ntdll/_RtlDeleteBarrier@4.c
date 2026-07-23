/*
 * XREFs of _RtlDeleteBarrier@4 @ 0x4B3502C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

NTSTATUS __cdecl RtlDeleteBarrier(PRTL_BARRIER Barrier)
{
  _RTL_SRWLOCK *v1; // esi
  NTSTATUS result; // eax

  if ( (((unsigned int)&Barrier->Reserved2 + 3) & 0xFFFFFFF8) != 0 )
  {
    v1 = (_RTL_SRWLOCK *)((((unsigned int)&Barrier->Reserved2 + 3) & 0xFFFFFFF8) + 8);
    RtlAcquireSRWLockExclusive(v1);
    RtlReleaseSRWLockExclusive(v1);
  }
  return result;
}
