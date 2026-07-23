/*
 * XREFs of _EtwEventProviderEnabled@20 @ 0x4B2AB1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwEventProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  UCHAR v4; // al
  UCHAR v5; // al

  if ( !WORD2(RegHandle) || (RegHandle & 1) != 0 || WORD2(RegHandle) != *(_WORD *)(RegHandle + 52) )
    return 0;
  if ( *(_BYTE *)(RegHandle + 76) )
  {
    v4 = *(_BYTE *)(RegHandle + 77);
    if ( (Level <= v4 || !v4)
      && ((*(_BYTE *)(RegHandle + 72) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(RegHandle + 64)) != 0
       && (Keyword & *(_QWORD *)(RegHandle + 56)) == *(_QWORD *)(RegHandle + 56)) )
    {
      return 1;
    }
  }
  if ( *(_BYTE *)(RegHandle + 196) )
  {
    v5 = *(_BYTE *)(RegHandle + 197);
    if ( (Level <= v5 || !v5)
      && ((*(_BYTE *)(RegHandle + 192) & 0x40) != 0 && !Keyword
       || (Keyword & *(_QWORD *)(RegHandle + 184)) != 0
       && (Keyword & *(_QWORD *)(RegHandle + 176)) == *(_QWORD *)(RegHandle + 176)) )
    {
      return 1;
    }
  }
  return 0;
}
