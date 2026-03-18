/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1402E2740
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x14035B4F8 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x1402E2798 (KeDeregisterObjectNotification.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(char *Object)
{
  if ( (*((_DWORD *)Object + 78) & 0x400) != 0
    && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL), Object + 520) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 78) &= ~0x400u;
  }
  *((_DWORD *)Object + 78) &= ~0x200u;
}
