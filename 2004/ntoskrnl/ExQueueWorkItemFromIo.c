/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140342A58
 * Callers:
 *     IoQueueWorkItem @ 0x140342A00 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x140342A30 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036B334 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B9C18 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402B9C38 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v4 = ExpTypeToPriority(v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, 0xFFFFFFFF, 1u);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
