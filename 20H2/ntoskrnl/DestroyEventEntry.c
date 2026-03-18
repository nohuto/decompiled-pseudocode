/*
 * XREFs of DestroyEventEntry @ 0x140375C1C
 * Callers:
 *     FlushEventEntryList @ 0x14075C228 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
