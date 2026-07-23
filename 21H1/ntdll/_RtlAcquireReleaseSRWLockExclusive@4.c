/*
 * XREFs of _RtlAcquireReleaseSRWLockExclusive@4 @ 0x4B34A390
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 *     _RtlpHpHeapExtendContext@8 @ 0x4B378E8C (_RtlpHpHeapExtendContext@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __cdecl RtlAcquireReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int32 v1; // [esp+8h] [ebp-4h] BYREF

  _InterlockedOr(&v1, 0);
  if ( (SRWLock->Value & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
}
