/*
 * XREFs of AlpcpFreeMessageFunction @ 0x1406BB760
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExMapHandleToPointerEx @ 0x1406BB808 (ExMapHandleToPointerEx.c)
 *     ExDestroyHandle @ 0x1407A2B78 (ExDestroyHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *P)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v2 = P[78] & 0x7FFFFFFF;
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
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  ExFreePoolWithTag(P, 0);
}
