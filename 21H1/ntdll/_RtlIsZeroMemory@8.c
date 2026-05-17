/*
 * XREFs of _RtlIsZeroMemory@8 @ 0x4B366980
 * Callers:
 *     _RtlNormalizeSecurityDescriptor@20 @ 0x4B3468A0 (_RtlNormalizeSecurityDescriptor@20.c)
 * Callees:
 *     <none>
 */

char __stdcall RtlIsZeroMemory(_BYTE *a1, unsigned int a2)
{
  while ( ((unsigned __int8)a1 & 3) != 0 && a2 )
  {
    if ( *a1 )
      return 0;
    ++a1;
    --a2;
  }
  while ( a2 >= 4 )
  {
    if ( *(_DWORD *)a1 )
      return 0;
    a1 += 4;
    a2 -= 4;
  }
  if ( !a2 )
    return 1;
  while ( !*a1 )
  {
    ++a1;
    if ( !--a2 )
      return 1;
  }
  return 0;
}
