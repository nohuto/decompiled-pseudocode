/*
 * XREFs of ExpTypeToPriority @ 0x1402B9C18
 * Callers:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x1402BCA80 (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1402C7E8C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1402FACC0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemFromIo @ 0x140342A58 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B19D8 (ExQueueWorkItemExFromIo.c)
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
