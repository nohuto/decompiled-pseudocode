/*
 * XREFs of KeInitializeGuardedMutex @ 0x1402EE570
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1406E49AC (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1406E675C (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerInit @ 0x1407A3174 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407D32F4 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x1407D42D4 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1407D5614 (CmpInitSIDToHiveMapping.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
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
