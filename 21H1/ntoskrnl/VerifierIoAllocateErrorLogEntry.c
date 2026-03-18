/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x1409C62E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1, char a2)
{
  __int64 v4; // rdx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvIoAllocateErrorLogEntry)(a1, v4);
}
