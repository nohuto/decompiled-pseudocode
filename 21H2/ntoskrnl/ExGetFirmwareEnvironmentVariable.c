/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406DC9F0 (NtQuerySystemEnvironmentValueEx.c)
 *     PopCheckShutdownMarker @ 0x140B2C124 (PopCheckShutdownMarker.c)
 * Callees:
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409FCB38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1409FF108 (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return FirmwareEnvironmentVariable;
}
