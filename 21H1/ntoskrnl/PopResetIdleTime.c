/*
 * XREFs of PopResetIdleTime @ 0x140320350
 * Callers:
 *     PopSetSystemState @ 0x1403A2AB0 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A2AF4 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A4810 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x14070E290 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140320394 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140571B94 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140C23348 = 0;
  byte_140C23390 = 0;
  dword_140C23380 = 0;
  return PopTraceSystemIdleTimeReset();
}
