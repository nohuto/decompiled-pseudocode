/*
 * XREFs of DestroyEventEntry @ 0x14037274C
 * Callers:
 *     FlushEventEntryList @ 0x140749228 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
