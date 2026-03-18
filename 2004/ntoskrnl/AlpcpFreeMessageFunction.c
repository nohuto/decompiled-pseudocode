/*
 * XREFs of AlpcpFreeMessageFunction @ 0x140698E00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExDestroyHandle @ 0x14069AF88 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x14069BB9C (ExMapHandleToPointerEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *Buffer)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  ExFreePoolWithTag(Buffer, 0);
}
