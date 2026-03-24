/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1402B6418
 * Callers:
 *     IoQueueWorkItem @ 0x1402B63C0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1402B63F0 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036F8E4 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E6E8 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E730 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
