/*
 * XREFs of DestroyEventEntry @ 0x140375E2C
 * Callers:
 *     FlushEventEntryList @ 0x1407608B8 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
