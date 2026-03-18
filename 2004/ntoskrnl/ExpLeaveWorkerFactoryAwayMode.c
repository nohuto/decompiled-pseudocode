/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x140275348 (ExpShutdownWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x1402D5A48 (KeDeregisterObjectNotification.c)
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
