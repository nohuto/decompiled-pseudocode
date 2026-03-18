/*
 * XREFs of MiEmptyWorkingSet @ 0x14052A9AC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406D0FA0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
