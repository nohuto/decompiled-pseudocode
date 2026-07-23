/*
 * XREFs of _RtlIsZeroMemory@8 @ 0x4B366980
 * Callers:
 *     _RtlNormalizeSecurityDescriptor@20 @ 0x4B3468A0 (_RtlNormalizeSecurityDescriptor@20.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsZeroMemory(PVOID Buffer, SIZE_T Length)
{
  unsigned int i; // ecx

  for ( i = Length; ((unsigned __int8)Buffer & 3) != 0 && i; --i )
  {
    if ( *(_BYTE *)Buffer )
      return 0;
    Buffer = (char *)Buffer + 1;
  }
  while ( i >= 4 )
  {
    if ( *(_DWORD *)Buffer )
      return 0;
    Buffer = (char *)Buffer + 4;
    i -= 4;
  }
  if ( !i )
    return 1;
  while ( !*(_BYTE *)Buffer )
  {
    Buffer = (char *)Buffer + 1;
    if ( !--i )
      return 1;
  }
  return 0;
}
