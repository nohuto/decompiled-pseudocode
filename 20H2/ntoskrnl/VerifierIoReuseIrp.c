/*
 * XREFs of VerifierIoReuseIrp @ 0x1409D5F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReuseIrp()
{
  return ((__int64 (*)(void))pXdvIoReuseIrp)();
}
