/*
 * XREFs of ExpTypeToPriority @ 0x1402D49F8
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x1402D45F8 (ExQueueWorkItemFromIo.c)
 *     ExpTryQueueWorkItem @ 0x1402D46BC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x1402D5148 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B5538 (ExQueueWorkItemExFromIo.c)
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
