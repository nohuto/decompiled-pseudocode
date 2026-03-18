/*
 * XREFs of ExpIoPoolDeadlockWorker @ 0x140952770
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpIoPoolDeadlockWorker(int *a1)
{
  return DbgkWerCaptureLiveKernelDump(L"IoThreadpool", 453, *a1, *((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, 0LL, 0);
}
