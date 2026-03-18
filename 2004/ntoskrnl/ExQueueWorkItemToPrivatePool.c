/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x140388B48
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1403889F0 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B9C38 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 result; // rax

  v4 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (ExpValidateWorkItem(BugCheckParameter2, a2 + 32),
        result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, a2, 0xFFFFFFFF, v4),
        !(_BYTE)result) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
