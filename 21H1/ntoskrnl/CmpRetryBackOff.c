/*
 * XREFs of CmpRetryBackOff @ 0x140870928
 * Callers:
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
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
