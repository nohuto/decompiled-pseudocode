/*
 * XREFs of CmpRetryBackOff @ 0x140871C08
 * Callers:
 *     CmUnloadKey @ 0x14064FEBC (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 */

NTSTATUS __fastcall CmpRetryBackOff(_DWORD *a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*a1 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    result = KeDelayExecutionThread(0, 0, &Interval);
    *a1 = 0;
  }
  return result;
}
