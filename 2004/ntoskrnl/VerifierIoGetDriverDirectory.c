/*
 * XREFs of VerifierIoGetDriverDirectory @ 0x1409CFC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDriverDirectory()
{
  return ((__int64 (*)(void))pXdvIoGetDriverDirectory)();
}
