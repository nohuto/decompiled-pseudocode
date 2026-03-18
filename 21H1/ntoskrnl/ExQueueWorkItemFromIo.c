/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140304FF8
 * Callers:
 *     IoQueueWorkItem @ 0x140304FA0 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x140304FD0 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036B264 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140226F98 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140226FB8 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
