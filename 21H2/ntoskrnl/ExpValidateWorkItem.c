/*
 * XREFs of ExpValidateWorkItem @ 0x1402E2F38
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402345F8 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x1402681A8 (ExQueueWorkItemEx.c)
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14038B688 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B7198 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
