/*
 * XREFs of PopResetIdleTime @ 0x14035DF70
 * Callers:
 *     PopSetSystemState @ 0x1403A3240 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A3284 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A4F90 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1406A6300 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14077A6C8 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x14035DFB4 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x1405721E4 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140C22D88 = 0;
  byte_140C22DD0 = 0;
  dword_140C22DC0 = 0;
  return PopTraceSystemIdleTimeReset();
}
