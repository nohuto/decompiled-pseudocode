/*
 * XREFs of DestroyEventEntry @ 0x1B6874
 * Callers:
 *     FlushEventEntryList @ 0x27B1F6 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __thiscall DestroyEventEntry(PVOID *this)
{
  if ( this )
    ExFreePoolWithTag(this[4], 0);
}
