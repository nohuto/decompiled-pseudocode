/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404EFC4C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF1E8 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x14099B6B0 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409B5724 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404F8760 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
