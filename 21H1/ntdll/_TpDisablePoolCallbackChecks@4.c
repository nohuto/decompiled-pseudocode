/*
 * XREFs of _TpDisablePoolCallbackChecks@4 @ 0x4B2ED630
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __stdcall TpDisablePoolCallbackChecks(_RTL_SRWLOCK *a1)
{
  if ( !a1 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(a1 + 11);
  a1[67].Value |= 1u;
  RtlReleaseSRWLockExclusive(a1 + 11);
  return 0;
}
