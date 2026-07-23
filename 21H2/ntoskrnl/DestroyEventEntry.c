/*
 * XREFs of DestroyEventEntry @ 0x14037597C
 * Callers:
 *     FlushEventEntryList @ 0x140760A78 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
