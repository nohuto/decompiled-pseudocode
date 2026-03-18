/*
 * XREFs of KiLoadMTRRTarget @ 0x14099CA10
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140994DD0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
