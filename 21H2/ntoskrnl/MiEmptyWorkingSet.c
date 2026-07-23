/*
 * XREFs of MiEmptyWorkingSet @ 0x14053070C
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406BD464 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
