/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1402D56F4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x1402D3E44 (ExpShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x140232968 (KiDeregisterObjectWaitBlock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(__int64 *Object)
{
  if ( (Object[51] & 0x400) != 0
    && KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(Object[2] + 8), Object + 77) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 102) &= ~0x400u;
  }
  *((_DWORD *)Object + 102) &= ~0x200u;
}
