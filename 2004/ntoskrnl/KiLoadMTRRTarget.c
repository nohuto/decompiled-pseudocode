/*
 * XREFs of KiLoadMTRRTarget @ 0x14099E130
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x1409961A0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
