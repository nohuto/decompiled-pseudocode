/*
 * XREFs of ExpSafeWcslen @ 0x1409512A0
 * Callers:
 *     ExpSetBootEntry @ 0x1409512D0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x140951AC4 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x140952F98 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409530F4 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1409534E0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140953B30 (NtEnumerateDriverEntries.c)
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
