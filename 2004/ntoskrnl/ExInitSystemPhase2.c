/*
 * XREFs of ExInitSystemPhase2 @ 0x140A42B1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     BootApplicationPersistentDataProcess @ 0x140A42FD0 (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140A43A08 (ExpWatchProductTypeInitialization.c)
 */

__int64 ExInitSystemPhase2()
{
  __int64 result; // rax

  ExpWatchProductTypeInitialization();
  MEMORY[0xFFFFF780000002E0] = -1;
  BootApplicationPersistentDataProcess(0LL);
  ExpMicrocodeInitialization(2LL);
  result = (unsigned int)KeMaximumProcessors;
  if ( ExpFreeListCount > (unsigned int)KeMaximumProcessors )
    ExpFreeListCount = KeMaximumProcessors;
  return result;
}
