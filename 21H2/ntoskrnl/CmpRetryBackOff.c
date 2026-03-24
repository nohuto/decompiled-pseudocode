/*
 * XREFs of CmpRetryBackOff @ 0x140875040
 * Callers:
 *     CmUnloadKey @ 0x140719C78 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
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
