/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404F176C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1409998A0 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409B3554 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404FA280 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
