/*
 * XREFs of MiEmptyWorkingSet @ 0x14052AFFC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D2AE8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140311470 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
