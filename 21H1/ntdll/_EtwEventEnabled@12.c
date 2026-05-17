/*
 * XREFs of _EtwEventEnabled@12 @ 0x4B2E6910
 * Callers:
 *     _EtwEventWriteEndScenario@20 @ 0x4B380AB0 (_EtwEventWriteEndScenario@20.c)
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 * Callees:
 *     <none>
 */

bool __stdcall EtwEventEnabled(int a1, __int16 a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  bool result; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al

  if ( !a3 || !a2 || (a1 & 1) != 0 || a2 != *(_WORD *)(a1 + 52) )
    return 0;
  v3 = *(_DWORD *)(a3 + 12);
  v4 = *(_DWORD *)(a3 + 8);
  result = 1;
  if ( !*(_BYTE *)(a1 + 76)
    || (v6 = *(_BYTE *)(a1 + 77), *(_BYTE *)(a3 + 4) > v6) && v6
    || ((*(_BYTE *)(a1 + 72) & 0x40) == 0 || v3 | v4)
    && (!(v3 & *(_DWORD *)(a1 + 68) | v4 & *(_DWORD *)(a1 + 64))
     || (v4 & *(_DWORD *)(a1 + 56)) != *(_DWORD *)(a1 + 56)
     || (v3 & *(_DWORD *)(a1 + 60)) != *(_DWORD *)(a1 + 60)) )
  {
    if ( !*(_BYTE *)(a1 + 196) )
      return 0;
    v7 = *(_BYTE *)(a1 + 197);
    if ( *(_BYTE *)(a3 + 4) > v7 )
    {
      if ( v7 )
        return 0;
    }
    if ( ((*(_BYTE *)(a1 + 192) & 0x40) == 0 || v3 | v4)
      && (!(v3 & *(_DWORD *)(a1 + 188) | v4 & *(_DWORD *)(a1 + 184))
       || (v4 & *(_DWORD *)(a1 + 176)) != *(_DWORD *)(a1 + 176)
       || (v3 & *(_DWORD *)(a1 + 180)) != *(_DWORD *)(a1 + 180)) )
    {
      return 0;
    }
  }
  return result;
}
