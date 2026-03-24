/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x140582CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
