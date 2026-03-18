/*
 * XREFs of VerifierEtwUnregister @ 0x1409E4EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfTargetEtwUnregister @ 0x1409D3FE4 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1)
{
  VfTargetEtwUnregister(a1);
  return ((__int64 (__fastcall *)(__int64))pXdvEtwUnregister)(a1);
}
