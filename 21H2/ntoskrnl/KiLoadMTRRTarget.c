/*
 * XREFs of KiLoadMTRRTarget @ 0x1409A2980
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x14099A760 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
