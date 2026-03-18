/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x140647754
 * Callers:
 *     PiUEventHandleGetEvent @ 0x140646D28 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x14064824C (PiUEventNotifyClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14070A3A8 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleVetoEvent @ 0x14075BB48 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x1406477AC (PiUEventDereferenceEventEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
