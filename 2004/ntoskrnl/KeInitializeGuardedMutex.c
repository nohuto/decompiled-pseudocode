/*
 * XREFs of KeInitializeGuardedMutex @ 0x140273520
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140647C2C (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406F3904 (PiUEventInitClientRegistrationContext.c)
 *     PiDqObjectManagerInit @ 0x14078C514 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x14079A148 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407C0674 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitSIDToHiveMapping @ 0x1407C2994 (CmpInitSIDToHiveMapping.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
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
