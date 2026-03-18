/*
 * XREFs of PopResetIdleTime @ 0x140364434
 * Callers:
 *     PopSetSystemState @ 0x1403A5600 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1403A5644 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403A7390 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x14071E850 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140788CC8 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140364478 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140575C14 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140C23248 = 0;
  byte_140C23290 = 0;
  dword_140C23280 = 0;
  return PopTraceSystemIdleTimeReset();
}
