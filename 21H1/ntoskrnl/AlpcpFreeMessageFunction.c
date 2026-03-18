/*
 * XREFs of AlpcpFreeMessageFunction @ 0x1405EF8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExDestroyHandle @ 0x1405F1A78 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x1405F2038 (ExMapHandleToPointerEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *Buffer)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = Buffer[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v2 & 0x3FFFFFF);
    ExDestroyHandle(v4, v5, v6);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
  }
  ExFreePoolWithTag(Buffer, 0);
}
