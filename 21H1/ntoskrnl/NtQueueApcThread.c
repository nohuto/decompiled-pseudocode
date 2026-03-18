/*
 * XREFs of NtQueueApcThread @ 0x14070A070
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x140709C80 (NtQueueApcThreadEx.c)
 */

NTSTATUS __fastcall NtQueueApcThread(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NtQueueApcThreadEx(a1, 0LL, a2, a3, a4, a5);
}
