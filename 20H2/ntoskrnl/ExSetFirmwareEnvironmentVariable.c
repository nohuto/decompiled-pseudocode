/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x140951CD0
 * Callers:
 *     PopClearSystemSleepCheckpoint @ 0x1407733F0 (PopClearSystemSleepCheckpoint.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140957E90 (NtSetSystemEnvironmentValueEx.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409B57E4 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409546FC (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140955588 (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C19690 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
