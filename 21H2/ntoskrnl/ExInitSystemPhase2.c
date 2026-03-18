/*
 * XREFs of ExInitSystemPhase2 @ 0x140B1BBE4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     BootApplicationPersistentDataProcess @ 0x140B1C0FC (BootApplicationPersistentDataProcess.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
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
