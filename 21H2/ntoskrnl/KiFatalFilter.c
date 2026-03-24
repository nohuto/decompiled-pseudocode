/*
 * XREFs of KiFatalFilter @ 0x140514B30
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140329FF0 (KeExpandKernelStackAndCalloutInternal.c)
 *     NtReleaseSemaphore @ 0x140683780 (NtReleaseSemaphore.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
