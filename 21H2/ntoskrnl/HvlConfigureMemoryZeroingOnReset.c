/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404F17EC
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFB58 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x1409988A0 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409B2624 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404FA300 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
