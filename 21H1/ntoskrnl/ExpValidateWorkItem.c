/*
 * XREFs of ExpValidateWorkItem @ 0x140226FB8
 * Callers:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x140229E00 (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140304FF8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140387BD8 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B12B8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0x7FFFFFFF0000LL;
  if ( v2 <= 0x7FFFFFFF0000LL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
