/*
 * XREFs of PopStatsInitPowerRequestLibrary @ 0x140A6CBA8
 * Callers:
 *     PopPowerRequestInit @ 0x140A6C9A4 (PopPowerRequestInit.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402E59F0 (RtlInitializeGenericTableAvl.c)
 */

__int64 PopStatsInitPowerRequestLibrary()
{
  qword_140C1EDF8 = 0LL;
  PowerReqestStatsLock = 0LL;
  qword_140C1ED70 = 0LL;
  *((_QWORD *)&ExecutionRequiredStopWatchCollection + 1) = &ExecutionRequiredStopWatchCollection;
  *(_QWORD *)&ExecutionRequiredStopWatchCollection = &ExecutionRequiredStopWatchCollection;
  xmmword_140C1ED50 = 0LL;
  xmmword_140C1ED60 = 0LL;
  RtlInitializeGenericTableAvl(
    &PowerRequestStatsDatabase,
    (PRTL_AVL_COMPARE_ROUTINE)PopAvlComparePowerRequestKeys,
    (PRTL_AVL_ALLOCATE_ROUTINE)PopAvlAllocatePowerRequestStats,
    (PRTL_AVL_FREE_ROUTINE)PopAvlFreePowerRequestStats,
    0LL);
  return 0LL;
}
