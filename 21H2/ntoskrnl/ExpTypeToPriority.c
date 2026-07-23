/*
 * XREFs of ExpTypeToPriority @ 0x1402E2F80
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402345F8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x1402681A8 (ExQueueWorkItemEx.c)
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B7198 (ExQueueWorkItemExFromIo.c)
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
