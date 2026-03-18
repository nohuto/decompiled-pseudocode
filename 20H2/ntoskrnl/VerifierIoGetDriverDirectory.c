/*
 * XREFs of VerifierIoGetDriverDirectory @ 0x1409D5C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDriverDirectory()
{
  return ((__int64 (*)(void))pXdvIoGetDriverDirectory)();
}
