/*
 * XREFs of _Normalization__LoadClassMapExceptions@4 @ 0x4B367B68
 * Callers:
 *     _Normalization__LoadTables@16 @ 0x4B367BB7 (_Normalization__LoadTables@16.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __thiscall Normalization__LoadClassMapExceptions(int this)
{
  unsigned __int8 *v1; // esi
  char v2; // dl
  unsigned __int8 result; // al
  unsigned __int8 v4; // bl

  v1 = *(unsigned __int8 **)(this + 28);
  v2 = 0;
  *(_DWORD *)(this + 62) = -1;
  *(_BYTE *)(this + 66) = -1;
  result = *v1;
  do
  {
    v4 = result;
    switch ( result )
    {
      case 0xD8:
        *(_BYTE *)(this + 62) = v2;
        break;
      case 0xDC:
        *(_BYTE *)(this + 63) = v2;
        break;
      case 0xDD:
        *(_BYTE *)(this + 64) = v2;
        break;
      case 0xE6:
        *(_BYTE *)(this + 65) = v2;
        break;
      case 0xE7:
        *(_BYTE *)(this + 66) = v2;
        break;
    }
    ++v2;
    result = *++v1;
  }
  while ( *v1 >= v4 );
  return result;
}
