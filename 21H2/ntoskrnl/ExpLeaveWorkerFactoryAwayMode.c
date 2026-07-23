/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x14026DC18 (ExpShutdownWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x1402A77A0 (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(PVOID Object)
{
  if ( (*((_DWORD *)Object + 78) & 0x400) != 0
    && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL)) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 78) &= ~0x400u;
  }
  *((_DWORD *)Object + 78) &= ~0x200u;
}
