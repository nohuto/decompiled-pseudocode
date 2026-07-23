/*
 * XREFs of RtlIsZeroMemory @ 0x140587E50
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1402D91B0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsZeroMemory(PVOID Buffer, SIZE_T Length)
{
  BOOLEAN result; // al

  result = 0;
  while ( ((unsigned __int8)Buffer & 7) != 0 && Length )
  {
    if ( *(_BYTE *)Buffer )
      return result;
    Buffer = (char *)Buffer + 1;
    --Length;
  }
  while ( Length >= 8 )
  {
    if ( *(_QWORD *)Buffer )
      return result;
    Buffer = (char *)Buffer + 8;
    Length -= 8LL;
  }
  if ( !Length )
    return 1;
  while ( !*(_BYTE *)Buffer )
  {
    Buffer = (char *)Buffer + 1;
    if ( !--Length )
      return 1;
  }
  return result;
}
