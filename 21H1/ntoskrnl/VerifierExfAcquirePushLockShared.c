/*
 * XREFs of VerifierExfAcquirePushLockShared @ 0x1409E1A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1D54 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEAuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfAcquirePushLockShared)(a1);
}
