/*
 * XREFs of VerifierIoGetDeviceObjectPointer @ 0x1409CFB80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceObjectPointer()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceObjectPointer)();
}
