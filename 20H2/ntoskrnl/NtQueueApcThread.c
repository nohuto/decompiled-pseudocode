/*
 * XREFs of NtQueueApcThread @ 0x1406991A0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x140699390 (NtQueueApcThreadEx.c)
 */

__int64 __fastcall NtQueueApcThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return NtQueueApcThreadEx(a1, 0LL, a2, a3, a4, a5);
}
