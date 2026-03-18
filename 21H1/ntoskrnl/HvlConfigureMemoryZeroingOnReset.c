/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1404EBD8C
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1409AE954 (PopShutdownSystem.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x1404F48A0 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
