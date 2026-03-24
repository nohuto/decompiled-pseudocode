/*
 * XREFs of ExpSafeWcslen @ 0x1409510D0
 * Callers:
 *     ExpSetBootEntry @ 0x140951100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409518F4 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x140952DC8 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x140952F24 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140953310 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953960 (NtEnumerateDriverEntries.c)
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
