/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x140A73758
 * Callers:
 *     PopPowerRequestInit @ 0x140A73554 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14023FD70 (RtlInitializeGenericTableAvl.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  qword_140C1ECD8 = 0LL;
  PowerReqestStatsLock = 0LL;
  qword_140C1EC50 = 0LL;
  *((_QWORD *)&ExecutionRequiredStopWatchCollection + 1) = &ExecutionRequiredStopWatchCollection;
  *(_QWORD *)&ExecutionRequiredStopWatchCollection = &ExecutionRequiredStopWatchCollection;
  xmmword_140C1EC30 = 0LL;
  xmmword_140C1EC40 = 0LL;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
