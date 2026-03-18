/*
 * XREFs of DestroyEventEntry @ 0x14037355C
 * Callers:
 *     FlushEventEntryList @ 0x14074D648 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
