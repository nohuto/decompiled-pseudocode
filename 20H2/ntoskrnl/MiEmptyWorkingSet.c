/*
 * XREFs of MiEmptyWorkingSet @ 0x14052E9CC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406C54D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14031AA80 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
