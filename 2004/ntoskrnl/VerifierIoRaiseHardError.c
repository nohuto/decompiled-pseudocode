/*
 * XREFs of VerifierIoRaiseHardError @ 0x1409CFD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRaiseHardError()
{
  return ((__int64 (*)(void))pXdvIoRaiseHardError)();
}
