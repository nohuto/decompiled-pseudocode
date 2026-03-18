/*
 * XREFs of FlushEventEntry @ 0x27B1AB
 * Callers:
 *     FlushEventEntryList @ 0x27B1F6 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall FlushEventEntry(PCEVENT_DESCRIPTOR EventDescriptor, REGHANDLE RegHandle)
{
  int v2; // esi
  int v3; // edx

  v2 = 2;
  if ( (unsigned int)HIBYTE(EventDescriptor[2].Id) + 2 > 2 )
  {
    v3 = 32;
    do
    {
      v3 += 16;
      ++v2;
      *(_BYTE *)(*(_DWORD *)&EventDescriptor[1].Id + v3 - 3) = 0;
    }
    while ( v2 < HIBYTE(EventDescriptor[2].Id) + 2 );
  }
  return EtwWriteTransfer(
           RegHandle,
           EventDescriptor,
           0,
           0,
           LOBYTE(EventDescriptor[2].Id),
           *(PEVENT_DATA_DESCRIPTOR *)&EventDescriptor[1].Id);
}
