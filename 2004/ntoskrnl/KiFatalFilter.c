/*
 * XREFs of KiFatalFilter @ 0x14050F6C0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402F84C0 (KeExpandKernelStackAndCalloutInternal.c)
 *     NtReleaseSemaphore @ 0x1406D57C0 (NtReleaseSemaphore.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
