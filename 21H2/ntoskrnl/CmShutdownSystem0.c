/*
 * XREFs of CmShutdownSystem0 @ 0x14053EBB0
 * Callers:
 *     CmShutdownSystem @ 0x140911B58 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x140911208 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
