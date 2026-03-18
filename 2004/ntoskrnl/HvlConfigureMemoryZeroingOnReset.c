/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404EC3BC
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CC54C (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x140995550 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409AF7B4 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404F4EF0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
