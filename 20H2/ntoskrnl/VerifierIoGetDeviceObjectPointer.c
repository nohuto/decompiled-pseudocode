/*
 * XREFs of VerifierIoGetDeviceObjectPointer @ 0x1409D5BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceObjectPointer()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceObjectPointer)();
}
