/*
 * XREFs of ?GetWorkThreadId@ChainedThreadpoolWorker@ThreadHelpers@@QEAAKXZ @ 0x180049014
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x1801576AC (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadHelpers::ChainedThreadpoolWorker::GetWorkThreadId(
        ThreadHelpers::ChainedThreadpoolWorker *this)
{
  return **(unsigned int **)this;
}
