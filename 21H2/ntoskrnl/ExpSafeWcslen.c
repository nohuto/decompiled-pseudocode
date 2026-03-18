/*
 * XREFs of ExpSafeWcslen @ 0x1409FD474
 * Callers:
 *     ExpSetBootEntry @ 0x1409FD4A0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FDC88 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1409FF178 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FF2C4 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1409FF6B0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409FFD10 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
