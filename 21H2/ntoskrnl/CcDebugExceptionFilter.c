/*
 * XREFs of CcDebugExceptionFilter @ 0x140417160
 * Callers:
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155EuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
