/*
 * XREFs of DestroyEventEntry @ 0x1C003E068
 * Callers:
 *     FlushEventEntryList @ 0x1C00D5C1C (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
