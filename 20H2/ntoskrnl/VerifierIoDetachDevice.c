/*
 * XREFs of VerifierIoDetachDevice @ 0x1409D5A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoDetachDevice()
{
  return ((__int64 (*)(void))pXdvIoDetachDevice)();
}
