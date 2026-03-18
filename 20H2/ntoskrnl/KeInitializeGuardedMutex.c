/*
 * XREFs of KeInitializeGuardedMutex @ 0x140240260
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14071AE94 (PiUEventInitClientRegistrationContext.c)
 *     PiDqObjectManagerInit @ 0x140798C54 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x1407A9478 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407CEF04 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x1407D1194 (CmpInitSIDToHiveMapping.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     sub_140A59CD4 @ 0x140A59CD4 (sub_140A59CD4.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
}
