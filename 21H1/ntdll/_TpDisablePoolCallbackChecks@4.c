/*
 * XREFs of _TpDisablePoolCallbackChecks@4 @ 0x4B2ED630
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __stdcall TpDisablePoolCallbackChecks(int a1)
{
  if ( !a1 )
    return -1073741811;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 44));
  *(_DWORD *)(a1 + 268) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 44));
  return 0;
}
