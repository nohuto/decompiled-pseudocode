/*
 * XREFs of FlushEventEntryList @ 0x27B1F6
 * Callers:
 *     FlushLookUpTableBucket @ 0x1B698C (FlushLookUpTableBucket.c)
 * Callees:
 *     DestroyEventEntry @ 0x1B6874 (DestroyEventEntry.c)
 *     FlushEventEntry @ 0x27B1AB (FlushEventEntry.c)
 */

void __thiscall FlushEventEntryList(EVENT_DESCRIPTOR *EventDescriptor, REGHANDLE RegHandle)
{
  EVENT_DESCRIPTOR *v2; // edi
  EVENT_DESCRIPTOR *v3; // esi

  v2 = EventDescriptor;
  if ( EventDescriptor )
  {
    do
    {
      FlushEventEntry(v2, RegHandle);
      v3 = *(EVENT_DESCRIPTOR **)&v2[1].Level;
      DestroyEventEntry((PVOID *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
}
