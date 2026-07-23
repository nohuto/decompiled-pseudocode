/*
 * XREFs of KeInitializeGuardedMutex @ 0x1402F92C0
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1406BBC8C (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerInit @ 0x1407A3374 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407D3464 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x1407D4444 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x1407D5784 (CmpInitSIDToHiveMapping.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
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
