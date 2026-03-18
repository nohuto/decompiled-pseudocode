/*
 * XREFs of KeInitializeGuardedMutex @ 0x1402DF510
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x14067D7C0 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x14068421C (PiUEventNotifyUserMode.c)
 *     EtwpInitializeProviderTraits @ 0x1407849E4 (EtwpInitializeProviderTraits.c)
 *     PiDqObjectManagerInit @ 0x14078A644 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407BD504 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x1407BF434 (CmpInitSIDToHiveMapping.c)
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
