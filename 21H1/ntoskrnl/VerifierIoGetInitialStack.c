/*
 * XREFs of VerifierIoGetInitialStack @ 0x1409CFC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetInitialStack()
{
  return ((__int64 (*)(void))pXdvIoGetInitialStack)();
}
