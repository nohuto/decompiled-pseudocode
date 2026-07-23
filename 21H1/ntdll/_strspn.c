/*
 * XREFs of _strspn @ 0x4B2FA110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl strspn(const char *Str, const char *Control)
{
  size_t result; // rax
  int v4; // ecx
  signed __int32 v5[9]; // [esp+0h] [ebp-24h] BYREF

  LODWORD(result) = 0;
  memset(v5, 0, 32);
  HIDWORD(result) = Control;
  while ( 1 )
  {
    LOBYTE(result) = *(_BYTE *)HIDWORD(result);
    if ( !*(_BYTE *)HIDWORD(result) )
      break;
    ++HIDWORD(result);
    _bittestandset(v5, result);
  }
  v4 = -1;
  do
  {
    ++v4;
    LOBYTE(result) = *Str;
    if ( !*Str )
      break;
    ++Str;
  }
  while ( _bittest(v5, result) );
  LODWORD(result) = v4;
  return result;
}
