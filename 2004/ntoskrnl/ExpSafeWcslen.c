/*
 * XREFs of ExpSafeWcslen @ 0x14094DB40
 * Callers:
 *     ExpSetBootEntry @ 0x14094DB70 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14094E364 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x14094F838 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x14094F994 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x14094FD80 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1409503D0 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  if ( (unsigned __int64)v2 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v2 - a1;
}
