/*
 * XREFs of ExpTypeToPriority @ 0x14023E730
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14023BDCC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14027A208 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemFromIo @ 0x1402B6418 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemToPartition @ 0x1402F78AC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B6F68 (ExQueueWorkItemExFromIo.c)
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
