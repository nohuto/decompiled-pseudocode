/*
 * XREFs of _LdrForkMrdata@4 @ 0x4B334E58
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __thiscall LdrForkMrdata(void *this)
{
  if ( this )
  {
    if ( this == (void *)1 )
      LdrpMrdataLock.0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)1;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  }
}
