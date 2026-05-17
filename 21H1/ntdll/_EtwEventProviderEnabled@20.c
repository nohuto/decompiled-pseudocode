/*
 * XREFs of _EtwEventProviderEnabled@20 @ 0x4B2AB1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall EtwEventProviderEnabled(int a1, __int16 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al

  if ( !a2 || (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) )
    return 0;
  if ( *(_BYTE *)(a1 + 76) )
  {
    v5 = *(_BYTE *)(a1 + 77);
    if ( (a3 <= v5 || !v5)
      && ((*(_BYTE *)(a1 + 72) & 0x40) != 0 && !a4
       || (a4 & *(_QWORD *)(a1 + 64)) != 0 && (a4 & *(_QWORD *)(a1 + 56)) == *(_QWORD *)(a1 + 56)) )
    {
      return 1;
    }
  }
  if ( *(_BYTE *)(a1 + 196) )
  {
    v6 = *(_BYTE *)(a1 + 197);
    if ( (a3 <= v6 || !v6)
      && ((*(_BYTE *)(a1 + 192) & 0x40) != 0 && !a4
       || (a4 & *(_QWORD *)(a1 + 184)) != 0 && (a4 & *(_QWORD *)(a1 + 176)) == *(_QWORD *)(a1 + 176)) )
    {
      return 1;
    }
  }
  return 0;
}
