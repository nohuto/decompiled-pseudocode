/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x14070E210
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14070E140 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpIsIumEncryptionKeyAvailable @ 0x140947060 (ExpIsIumEncryptionKeyAvailable.c)
 *     PopCheckShutdownMarker @ 0x140A3F5F0 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094D224 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x14094F7C8 (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140C19590 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return FirmwareEnvironmentVariable;
}
