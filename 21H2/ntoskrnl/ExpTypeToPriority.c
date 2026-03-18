/*
 * XREFs of ExpTypeToPriority @ 0x1402EF304
 * Callers:
 *     ExQueueWorkItemEx @ 0x1402EEBC0 (ExQueueWorkItemEx.c)
 *     ExpTryQueueWorkItem @ 0x1402EEE7C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x14063F338 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
