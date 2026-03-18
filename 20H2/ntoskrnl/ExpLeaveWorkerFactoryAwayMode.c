/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x140206148
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14028C9B0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x14033C0D8 (ExpShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x14035BF90 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x1402061A0 (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
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
