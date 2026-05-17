/*
 * XREFs of _RtlpSafewcslen@12 @ 0x4B354A42
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpSafewcslen(_WORD *a1, int a2, int a3)
{
  bool v4; // zf

  if ( !a1 )
    return 1;
  v4 = a2 == 0;
  if ( a2 )
  {
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --a2;
    }
    while ( a2 );
    v4 = a2 == 0;
  }
  return !v4;
}
