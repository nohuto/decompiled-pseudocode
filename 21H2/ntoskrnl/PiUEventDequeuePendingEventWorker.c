/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x1406E6284
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x1406E15A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x1406E1D18 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1406E6D7C (PiUEventNotifyClient.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x1406E62DC (PiUEventDereferenceEventEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, void *a2, char a3)
{
  void **v4; // rdx
  void **v5; // rax

  v4 = *(void ***)a2;
  if ( v4[1] != a2 || (v5 = (void **)*((_QWORD *)a2 + 1), *v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  PiUEventDereferenceEventEntry(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
