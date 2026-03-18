/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1409FB890
 * Callers:
 *     NtSetSystemEnvironmentValueEx @ 0x1406DCB10 (NtSetSystemEnvironmentValueEx.c)
 *     PopClearSystemSleepCheckpoint @ 0x1408002B4 (PopClearSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140A6BEC8 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FE284 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1409FF108 (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
