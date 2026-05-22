/*
 * XREFs of ?GetWorkThreadId@ChainedThreadpoolWorker@ThreadHelpers@@QEAAKXZ @ 0x180049624
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180157B6C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadHelpers::ChainedThreadpoolWorker::GetWorkThreadId(
        ThreadHelpers::ChainedThreadpoolWorker *this)
{
  return **(unsigned int **)this;
}
