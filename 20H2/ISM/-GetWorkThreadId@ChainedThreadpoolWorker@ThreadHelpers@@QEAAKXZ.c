/*
 * XREFs of ?GetWorkThreadId@ChainedThreadpoolWorker@ThreadHelpers@@QEAAKXZ @ 0x180048FC4
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x18015761C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadHelpers::ChainedThreadpoolWorker::GetWorkThreadId(
        ThreadHelpers::ChainedThreadpoolWorker *this)
{
  return **(unsigned int **)this;
}
