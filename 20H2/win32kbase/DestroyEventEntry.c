/*
 * XREFs of DestroyEventEntry @ 0x1C01F9BE4
 * Callers:
 *     FlushEventEntryList @ 0x1C02795D0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
