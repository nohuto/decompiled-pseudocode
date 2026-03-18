/*
 * XREFs of ExpTypeToPriority @ 0x140226F98
 * Callers:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x140229E00 (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x140304FF8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B12B8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return *((unsigned int *)ExpBuiltinPriorities + (int)a1);
}
