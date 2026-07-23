/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1402345F8
 * Callers:
 *     IoQueueWorkItem @ 0x1402345A0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1402345D0 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036FA94 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x1402E2F38 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402E2F80 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2);
  v4 = ExpTypeToPriority((unsigned int)v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, -1, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
