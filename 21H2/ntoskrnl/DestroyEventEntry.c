/*
 * XREFs of DestroyEventEntry @ 0x140386BF4
 * Callers:
 *     FlushEventEntryList @ 0x1407FAAB8 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
