/*
 * XREFs of ExpSafeWcslen @ 0x140953900
 * Callers:
 *     ExpSetBootEntry @ 0x140953930 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140954124 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1409555F8 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140955754 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140955B40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140956190 (NtEnumerateDriverEntries.c)
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
