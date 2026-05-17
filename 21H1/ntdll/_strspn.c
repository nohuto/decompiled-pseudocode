/*
 * XREFs of _strspn @ 0x4B2FA110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl strspn(const char *Str, const char *Control)
{
  unsigned int v2; // eax
  size_t v5; // ecx
  signed __int32 v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0;
  memset(v7, 0, 32);
  while ( 1 )
  {
    LOBYTE(v2) = *Control;
    if ( !*Control )
      break;
    ++Control;
    _bittestandset(v7, v2);
  }
  v5 = -1;
  do
  {
    ++v5;
    LOBYTE(v2) = *Str;
    if ( !*Str )
      break;
    ++Str;
  }
  while ( _bittest(v7, v2) );
  return v5;
}
