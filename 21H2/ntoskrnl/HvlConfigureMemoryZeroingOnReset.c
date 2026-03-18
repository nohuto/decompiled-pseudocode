/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1405430DC
 * Callers:
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14054C0E0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
