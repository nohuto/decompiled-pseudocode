/*
 * XREFs of VerifierExfTryToWakePushLock @ 0x1409E1BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409E1DB4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryToWakePushLock(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEBuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfTryToWakePushLock)(a1);
}
